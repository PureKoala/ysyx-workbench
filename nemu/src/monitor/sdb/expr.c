#include <isa.h>
#include <memory/vaddr.h>
#include <ctype.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM, TK_POINT, TK_ABS_ADDR, TK_REG, TK_AND

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"0[xX][0-9]+", TK_ABS_ADDR},	// abs addr
  {"\\$[rsgtapPRSGTA][apcCAP0-9]+", TK_REG},	//find reg data
  {"[0-9]+", TK_NUM},	// num
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},         // sub
  {"\\*", '*'},         // mul
  {"/", '/'},         // div
  {"==", TK_EQ},        // equal
  {"&&", TK_AND}		// and
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;
		

        switch (rules[i].token_type) {
          case TK_NOTYPE: break;
          case TK_ABS_ADDR: 
          	tokens[nr_token].type = rules[i].token_type;
			sprintf(tokens[nr_token].str,"%.*s",substr_len-2, substr_start+2);
			nr_token++;
          	break;
          case TK_REG: 
          	tokens[nr_token].type = rules[i].token_type;
			sprintf(tokens[nr_token].str,"%.*s",substr_len-1, substr_start+1);
			nr_token++;
          	break;
          default:
          	tokens[nr_token].type = rules[i].token_type;
			sprintf(tokens[nr_token].str,"%.*s",substr_len, substr_start);
			nr_token++;
        }

        break;
      }
    }
	
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  return true;
}

int find_main(int p,int q){
	for(int i=p;i<=q;i++)
	{
		if(tokens[i].type == TK_NUM)
			continue;
		if(tokens[i].type == TK_AND )
			return i;
	}
	for(int i=p;i<=q;i++)
	{
		if(tokens[i].type == TK_NUM)
			continue;
		if(tokens[i].type == TK_EQ )
			return i;
	}
	for(int i=p;i<=q;i++)
	{
		if(tokens[i].type == TK_NUM)
			continue;
		if(tokens[i].type == '+' || tokens[i].type == '-')
			return i;
	}
	
	for(int i=p;i<=q;i++)
	{
		if(tokens[i].type == TK_NUM)
			continue;
		if(tokens[i].type == '*' || tokens[i].type == '/')
			return i;
	}
	return 0;
}

bool check_parentheses(int p ,int q){  
    int i,tag = 0;
    if(tokens[p].type != '(' || tokens[q].type != ')') return false;
    for(i = p ; i <= q ; i ++){    
        if(tokens[i].type == '(') tag++;
        else if(tokens[i].type == ')') tag--;
        if(tag == 0 && i < q) return false ;
    }                              
    if( tag != 0 ) return false;   
    return true;                   
} 


uint64_t cal(int p,int q)
{
	if( p == q ){
		if (tokens[p].type == TK_REG){
			bool success = false;
			for(int i=0;i<strlen(tokens[p].str);i++)
				tokens[p].str[i]=tolower(tokens[p].str[i]);
			uint64_t res = isa_reg_str2val(tokens[p].str,&success);
			if	(success == true)
				return res;
			else
				assert(0);
		}
		else if (tokens[p].type == TK_POINT){
			vaddr_t addr = strtol(tokens[p].str,NULL,16);
			uint64_t res = vaddr_read(addr,8);
			return res;
		}
		else if (tokens[p].type == TK_ABS_ADDR){
			return strtol(tokens[p].str,NULL,16);
		}
		else
			return atoi(tokens[p].str);
	}
	else if (check_parentheses(p,q) == true)
		return cal(p+1,q-1);
	else{
		int op = find_main(p,q);
		uint64_t val1 = cal(p,op-1);
		uint64_t val2 = cal(op+1,q);
		
		switch(tokens[op].type){
			case '+': return val1+val2;
			case '-': return val1-val2;
			case '*': return val1*val2;
			case '/': return val1/val2;
			case TK_AND: return val1 && val2;
			case TK_EQ: return (val1 == val2);
			default:assert(0);
		}
	
	}
}



word_t expr(char *e, bool *success) {
  if (e==NULL || !make_token(e)) {
    *success = false;
    return 0;
  }
  for (int i = 0; i < nr_token; i ++) {
  	if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '+' || tokens[i - 1].type == '-' || tokens[i - 1].type == '*' || tokens[i - 1].type == '/' || tokens[i - 1].type == '(' || tokens[i - 1].type == TK_EQ) ) {
    	for (int j=i; j<nr_token-1; j++){
    		tokens[j]=tokens[j+1];
    	}
    	nr_token--;
    	tokens[i].type = TK_POINT;
  	}
  }
  uint64_t res = cal(0,nr_token-1);
  *success = true;
  return res;
}
