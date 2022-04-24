#ifndef _REGS_H_
#define _REGS_H_

extern void exec_once();

typedef struct 
{
  uint64_t gpr[32];
  uint64_t pc;
} CPU_state;

typedef struct dut
{
  int state;
  uint64_t halt_pc;
  uint32_t halt_ret;
} NPC_state;

#define DIFFTEST_TO_REF 1
#define DIFFTEST_TO_DUT 0
#define DIFFTEST_REG_SIZE (sizeof(uint64_t) * 32)
// #define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

#endif