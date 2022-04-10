#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  uint64_t len = 0;
  for(;(*s)!='\0';s++)
  	len++;
  return len;
}

char *strcpy(char *dst, const char *src) {
  char *p = dst;
  for(; *src; src++,p++)
  	*p = *src;
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  uint64_t len = strlen(src);
  for(uint64_t i = 0; i<n; i++){
  	if(i<len)
  		dst[i] = src[i];
  	else
  		dst[i] = '\0';
  }
  return dst;
}

char *strcat(char *dst, const char *src) {
  char *p = dst;
  while(*p != '\0')
    p++;
  for(; *src;p++,src++){
    *p = *src;
  }
  *p = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  int i = 0;
  while((s1[i] != '\0') | (s2[i] != '\0')){
    if(s1[i]!=s2[i])
      return s1[i]-s2[i];
    else
      i++;
  }
  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  int i = 0;
  while( ((s1[i] != '\0') | (s2[i] != '\0')) && (i<n) ){
    if(s1[i]!=s2[i])
      return s1[i]-s2[i];
    else
      i++;
  }
  return 0;
}

void *memset(void *s, int c, size_t n) {
  const unsigned char ch = c;
  unsigned char *str;
  for(str = s;0 < n;++str,--n)
    *str = ch;
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  unsigned char hold[n];
  unsigned char *d = dst;
  for(int i=0;i<n;i++,src++){
    hold[i] = *(unsigned char *)src;
  }
  for(int i=0;i<n;i++,d++){
    *d = hold[i];
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  for(;n>0;n--,out++,in++){
    *(unsigned char *)out = *(unsigned char *)in;
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  int res = 0;
  for( ; n>0 ; s1++,s2++,n--){
    if((res=*(unsigned char *)s1-*(unsigned char *)s2) != 0)
      break;
  }
  return res;
}

#endif