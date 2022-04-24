#include "dut.cpp"


using namespace std;

#define right 0
#define fals  1
uint32_t ifetch(uint64_t addr, int len);

// void exec_once();
// int exec_close()
int exit_exec_once;
//int  data_us    ;

void statistic();
//bool exe_once_sign ;

// void exe_once(bool i ,bool exit){
//     if(i == 1) {
//     //exec_once();
//     data_us = 1;
//     }
//     if(exit == 1) {
//     //exec_close();
//     data_us = 0;
//     }
// }

static void execute(uint64_t n) {
  int i;
  for (i=0; i<n; i++){
    exe_once();
//    difftest_step(rv64.pc, 1);
  }
  if(i == n){
//    exe_once();
  }
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


