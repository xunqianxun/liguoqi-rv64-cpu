#include "dut.cpp"
#include <stdio.h>

//----------------------time-----------------------------------------//

static uint64_t boot_time = 0;

static uint64_t get_time_internal() {
#if defined(CONFIG_TARGET_AM)
  uint64_t us = io_read(AM_TIMER_UPTIME).us;
#elif defined(CONFIG_TIMER_GETTIMEOFDAY)
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
#else
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
#endif
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}

//--------------------------time-------------------------------------//

using namespace std;

// #define right 0
// #define fals  1
// uint32_t ifetch(uint64_t addr, int len);
// int exit_exec_once;

// void statistic();

// void npc_onceex(){
// exec_once();
// if(difftest_ena){
// difftest_step(cpu.pc, 1);
// }
// }

// static void execute(uint64_t n) {
//   int i;
//   for (i=0; i<n; i++){
//     // exec_once();
//     npc_onceex();
// //    difftest_step(rv64.pc, 1);
//   }
// //  if(i == n){
// //    exe_once();
// //  close_npc();
// //  }
// }  

// void cpu_exec(uint64_t n) {

//   execute(n);

//   switch (npc_state.state) {
//     case NEMU_RUNNING: npc_state.state = NEMU_STOP; break;

//     case NEMU_END: case NEMU_ABORT:

//     case NEMU_QUIT: statistic();
//   }
// }

// void statistic(){
// }

#define MAX_INST_TO_PRINT 10

//CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();

static void trace_and_difftest(Decode *_this, uint64_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { 
    log_write("%s\n", _this->logbuf);
    bool change = test_change();
    if(change) nemu_state.state = NEMU_STOP;
   }
#endif
//  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  if(difftest_ena){IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc)); printf("sss\n");}
}

static void exec_once(Decode *s, uint64_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(1);
//  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = 0; i < ilen; i ++) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (npc_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  _Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  _Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) _Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else _Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (npc_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: npc_state.state = NEMU_RUNNING;
  }

   uint64_t timer_start = get_time();

  execute(n);


  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (npc_state.state) {
    case NEMU_RUNNING: npc_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      _Log("npc: %s at pc = " "0x%016lx",
          (npc_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
           (npc_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
          npc_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}


