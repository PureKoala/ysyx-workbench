#include "sdb.h"

#define NR_WP 32

word_t expr(char *e, bool *success);

typedef struct watchpoint {
  int NO;
  char str[32];
  uint64_t res;
  struct watchpoint *next;

} WP;
static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;


void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    memset(wp_pool[i].str,'\0',32);
    wp_pool[i].res = 0;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(){
	if(free_->next == NULL)
		assert(0);
	WP* to_use = free_;
	free_ = free_->next;
	to_use->next = NULL;
	return to_use;
}

void free_wp(WP *wp){
	if(wp == NULL)
		assert(0);
	memset(wp->str,'\0',32);
	wp->next = free_;
	free_ = wp;
	return;
}

bool check_wp(){
	WP* pre = head;
  	while(pre != NULL){
  		bool succ = false;
  		//printf("222222\n");
  		uint64_t r = expr(pre->str,&succ);
  		//printf("33333\n");
  		if (succ == false)
  			assert(0);
  		if(r != pre->res){
  			pre->res = r;	
  			nemu_state.state = NEMU_STOP;
  			return true;
  		}
  		pre = pre->next;
  	}
  	return false;  
}

void wp_display(){
	if(head == NULL)
  		assert(0);
  	printf("Num\tValue\tWhat\n");
  	WP* p = head;
  	while(p != NULL){
  		printf("%d\t%ld\t%s\n",p->NO,p->res,p->str);
  		p = p->next;
  	}
}

void wp_add(char* n1,uint64_t res){
  WP* np = new_wp();
  sprintf(np->str,"%s",n1);
  //printf("ddddd\n");
  np->res = res;
  if(head == NULL){
  	head = np;
  	return;
  }	
  np -> next = head;
  head = np;
  return;
}

void wp_delete(int n){
  WP* np = head;
  if(head->NO == n){
  	WP* np = head;
  	head = np->next;
  	free_wp(np);
  	return;
  }
  while(np->next != NULL){
  	if(np->next->NO == n){
  		WP* rls = np->next;
  		np->next = rls->next;
  		free_wp(rls);
  		break;
  	}
  	np = np -> next;
  }
	return;
}
