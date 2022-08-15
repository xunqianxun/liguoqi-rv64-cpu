#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
    if (memcmp(&cpu.gpr[1], &ref_r->gpr[1], DIFFTEST_REG_SIZE - sizeof(cpu.gpr[0]))) {
    int i;
    // do not check $0
    for (i = 1; i < ARRLEN(cpu.gpr); i ++) {
      difftest_check_reg(reg_name(i, 4), pc, ref_r->gpr[i], cpu.gpr[i]);
    }
    difftest_check_reg("mepc"  , pc, ref_r->mepc, cpu.mepc);
    difftest_check_reg("mcause", pc, ref_r->mcause, cpu.mcause);
    difftest_check_reg("mtvec"  , pc, ref_r->mtvec, cpu.mtvec);
    difftest_check_reg("pc"    , pc, ref_r->pc, cpu.pc);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
