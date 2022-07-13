#include <stdint.h>

#ifdef __ISA_NATIVE__
#error can not support ISA=native
#endif

#define SYS_yield 1
void _exit(int status);
extern int _syscall_(int, uintptr_t, uintptr_t, uintptr_t);

int main() {
  _syscall_(SYS_yield, 0, 0, 0);
  _exit(1);
  return 1;
}
