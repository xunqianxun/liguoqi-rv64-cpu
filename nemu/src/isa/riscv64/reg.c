#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
//riscv64_CPU_state regsfile ;
void isa_reg_display() {
  int i ;
  for (i=0;i<32;i++) {
    printf("%s is %lx\n", regs[i] , gpr(i));
  }
    printf("mepc is %lx\n", cpu.mepc);
    printf("mcause is %lx\n", cpu.mcause);
    printf("mtvec is %lx\n", cpu.mtvec);
    printf("mstatus is %lx\n", cpu.mstatus);
}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
