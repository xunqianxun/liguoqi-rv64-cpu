#include "./difftest/dut.cpp"


using namespace std;

#define right 0
#define fals  1
uint32_t ifetch(uint64_t addr, int len);
int exit_exec_once;

void statistic();

void npc_onceex(){
exec_once();
if(difftest_ena){
difftest_step(cpu.pc, 1);
}
}

static void execute(uint64_t n) {
  int i;
  for (i=0; i<n; i++){
    // exec_once();
    npc_onceex();
//    difftest_step(rv64.pc, 1);
  }
//  if(i == n){
//    exe_once();
//  close_npc();
//  }
}  

void cpu_exec(uint64_t n) {

  execute(n);

  switch (npc_state.state) {
    case NEMU_RUNNING: npc_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:

    case NEMU_QUIT: statistic();
  }
}

void statistic(){
}


