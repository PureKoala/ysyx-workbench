#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  int count=0;
  va_list ap;
  va_start(ap, fmt);
  char *tmp = out;
  while(*tmp != '\0')
  	*(tmp++) = '\0';
  tmp = out;
  int j = 0;
  while(fmt[j] != '\0')
  {
    //char s = fmt[j];
    if(fmt[j] != '%'){
      out[count++] = fmt[j];
    }
    else
    {
      //s = fmt[++j];
      switch (fmt[++j]) {
        case 'd': {
          int num = va_arg(ap, int);
          char n[32];
          int i = 0;
          while(num != 0){
            n[i++] = (num%10 + '0');
            num = num/10;
          }
          while((--i) >= 0)
            out[count++] = n[i];
          break;
        }
        case 's': {
          char *str = va_arg(ap, char *);
          strcat(&(out[count]), str);
          count = count+strlen(str);
          break;
        }
        default: break;
        }
      }
      j++;
    }
    va_end(ap);
    return count;
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
