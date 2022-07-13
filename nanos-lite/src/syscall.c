#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[4] = c->GPRx;

  switch (a[0]) {
    case 1 : printf("syscall success!!\n"); break;
    default: panic("Unhandled syscall ID = %d", a[0]); break;
  }
}
