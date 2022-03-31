#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
 panic("Not implemented");
// int i;
// char buf[256];

//   va_list arg = (va_list)((char*)(&fmt)+4);
//   i=vsprintf(buf,fmt,arg);
//   write(buf,i);
//   return 1;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
// int len;
// unsigned long num;
// int i, base;
// char *str;
// const char *s;

// int flags;

// int field_width;
// int precision;
// int qualifier;

// for(str = buf; *fmt; ++fmt){
//   if(*fmt != '%'){

//   }
// }
}

int sprintf(char *out, const char *fmt, ...) {
 panic("Not implemented");
// va_list args;
// int val;
// va_start(args, fmt);
// val = vsprintf(out, fmt, args);
// va_end(args);
// return val;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
