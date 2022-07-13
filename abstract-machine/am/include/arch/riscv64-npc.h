#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[32],mcause, mstatus, mepc;
};

#define GPR1 gpr[17] // a7
#define GPR2 gpr[5]
#define GPR3 gpr[6]
#define GPR4 gpr[7]
#define GPRx gpr[5]
#endif
