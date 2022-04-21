#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>


void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
//  assert(0);
  if (direction == DIFFTEST_TO_REF) {memcpy(guest_to_host(addr), buf, n);}
  else {memcpy(buf, guest_to_host(addr), n);}
}

void difftest_regcpy(void *dut, bool direction) {
//  assert(0);
  if (direction == DIFFTEST_TO_REF) {
    memcpy(&cpu, dut, DIFFTEST_REG_SIZE);
    printf("the pc = %lx\n", cpu->pc);
//    csr_writeback();
  } else {
//    csr_prepare();
    memcpy(dut, &cpu, DIFFTEST_REG_SIZE);
  }
}

void difftest_exec(uint64_t n) {
//  assert(0);
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
