#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
/*  char *p = s;
  uint64_t len = 0;
  for(;*p;p++)
  	len++;
  return len;*/
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
/*  uint64_t len = strlen(src);
  for(uint64_t i=0; i<len; i++)
  	dst[i] = src[i];
  return dst;*/
  panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
/*  uint64_t len = strlen(src);
  for(uint64_t i = 0; i<n; i++){
  	if(i<len)
  		dst[i] = src[i];
  	else
  		dst[i] = '\0';
  }
  return dst;*/
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
