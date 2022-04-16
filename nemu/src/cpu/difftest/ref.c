#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

// static void csr_prepare() {
//   cpu.mstatus = mstatus->val;
//   cpu.mcause  = mcause->val;
//   cpu.mepc    = mepc->val;

//   cpu.sstatus = csrid_read(0x100); // sstatus
//   cpu.scause  = scause->val;
//   cpu.sepc    = sepc->val;

//   cpu.satp     = satp->val;
//   cpu.mip      = mip->val;
//   cpu.mie      = mie->val;
//   cpu.mscratch = mscratch->val;
//   cpu.sscratch = sscratch->val;
//   cpu.mideleg  = mideleg->val;
//   cpu.medeleg  = medeleg->val;
//   cpu.mtval    = mtval->val;
//   cpu.stval    = stval->val;
//   cpu.mtvec    = mtvec->val;
//   cpu.stvec    = stvec->val;
// }

// static void csr_writeback() {
//   mstatus->val = cpu.mstatus;
//   mcause ->val = cpu.mcause ;
//   mepc   ->val = cpu.mepc   ;
//   //sstatus->val = cpu.sstatus;  // sstatus is a shadow of mstatus
//   scause ->val = cpu.scause ;
//   sepc   ->val = cpu.sepc   ;

//   satp->val     = cpu.satp;
//   mip->val      = cpu.mip;
//   mie->val      = cpu.mie;
//   mscratch->val = cpu.mscratch;
//   sscratch->val = cpu.sscratch;
//   mideleg->val  = cpu.mideleg;
//   medeleg->val  = cpu.medeleg;
//   mtval->val    = cpu.mtval;
//   stval->val    = cpu.stval;
//   mtvec->val    = cpu.mtvec;
//   stvec->val    = cpu.stvec;
// }

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  assert(0);
}

void difftest_regcpy(void *dut, bool direction) {
  assert(0);
  // if (direction == DIFFTEST_TO_REF) {
  //   memcpy(&cpu, dut, DIFFTEST_REG_SIZE);
  //   csr_writeback();
  // } else {
  //   csr_prepare();
  //   memcpy(dut, &cpu, DIFFTEST_REG_SIZE);
  // }
}

void difftest_exec(uint64_t n) {
  assert(0);
 // cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
