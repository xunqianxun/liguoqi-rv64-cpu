#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
//  panic("Not implemented");
int cont = 0;
while(*s++){cont++;}
return cont;
}

char *strcpy(char *dst, const char *src){
//  panic("Not implemented");
size_t i;
for(i=0; src[1] != '\0'; i++)
  dst[i]=src[i];
dst[i]='\0';
return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
//  panic("Not implemented");
char* tmp = dst;
while(n && (*dst++ = *src++)){
  n--;
}
if(n){
  while(n--){
    *dst++ = '\0';
  }
}
return tmp;
}

char *strcat(char *dst, const char *src) {
//  panic("Not implemented");
char *p = dst;
while(*dst != '\0'){
  p++;
}
while((*dst++ = *src++) != '\0');
return p;
}

int strcmp(const char *s1, const char *s2) {
//  panic("Not implemented");
// int ret = 0;
// while( !(ret = *(unsigned char*)s1 - *(unsigned char*)s2) && *s2){
//    s1++;
//    s2++;
// }
// if(ret < 0) ret = -1;
// if(ret > 0) ret = 1;
// return ret;
uint32_t i=0;
for(i=0;s1[i] == s2[i]; i++) 
if(s1[i] == '\0') return 0;
return ((signed char *)s1)[i] - ((signed char *)s2)[i];
}

int strncmp(const char *s1, const char *s2, size_t n) {
//  panic("Not implemented");
if(!n) return 0;
while(--n && *s1 && *s1 == *s2){
  s1++;
  s2++;
}
return (*s1 - *s2);
}

void *memset(void *s, int c, size_t n) {
//  panic("Not implemented");
const unsigned char uc = c;
unsigned char *vu;
for (vu = s; 0<n; ++vu, --n)
  *vu = uc;

return s;
}

void *memmove(void *dst, const void *src, size_t n) {
//  panic("Not implemented");
void* ret = dst;
if(dst > src){
  while(n--){*(((char*)dst) + n) = *(((char*)src) + n);} 
}
else{
  ret = memcpy(dst, src, n);
}
return ret;
}

void *memcpy(void *out, const void *in, size_t n) {
//  panic("Not implemented");
char* psrc = (char*)in;
char* pdst = (char*)out;
if((psrc < pdst) && (psrc + n > pdst)){
  psrc = psrc + n - 1;
  pdst = pdst + n - 1;
  while(n--) *pdst-- = *psrc--;
}
else{
  while(n--) *pdst++ = *psrc++;
}
return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
while(n-- && *(char*)s1 == *(char*)s2){
  s1 = (char*)s1 + 1;
  s2 = (char*)s2 + 1;
}
return ( *((unsigned char *)s1) - *((unsigned char *)s2));
}

#endif
