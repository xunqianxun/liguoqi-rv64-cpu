#include "dut.cpp"


using namespace std;

#define right 0
#define fals  1
uint32_t ifetch(uint64_t addr, int len);

// void exec_once();
// int exec_close()
int exit_exec_once;
int  data_us    ;

void statistic();
//bool exe_once_sign ;

void exe_once(bool i ,bool exit){
    if(i == 1) {
    //exec_once();
    data_us = 1;
    }
    if(exit == 1) {
    //exec_close();
    data_us = 0;
    }
}

static void execute(uint64_t n) {
  int i;
  for (i=0; i<n; i++){
    exe_once(1,0);
//    difftest_step(rv64.pc, 1);
  }
  if(i == n){
    exe_once(0,1);
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

// void exec_once(){
// while(1){
// if(main_time > 10){
//   rvcpu->rst = 0 ; 
// }
// if((main_time % 10) == 1){
//   rvcpu->clk = 1;
//   if(rvcpu->inst_addr >= 0x80000000){
//   rvcpu->inst = ifetch(rvcpu->inst_addr, 4);
//   }
//   if(rv64.pc != 0 ){
//     difftest_step(rv64.pc,1);
//     exit_exec_once = 1;
//   }
  
//   rvcpu->eval();

// }
// if(exit_exec_once == 1){
//     break;
// }
// if((main_time % 10) == 6){
//   rvcpu->clk = 0;
// }
//   rvcpu->eval();
//   tfp->dump(main_time);
//   main_time++;
// }
// }
