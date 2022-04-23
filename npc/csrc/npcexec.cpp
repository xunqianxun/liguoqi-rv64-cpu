#include <iostream>
#include "dut.cpp"


using namespace std;

void statistic();
bool exe_once_sign ;

void exe_once(bool i ,bool exit){
    if(i == 1) {
        exe_once_sign = 1;
        printf('sign2 = %ld \n',i);
    }
    if(exit == 1) {exe_once_sign = 0;}
}

static void execute(uint64_t n) {
  int i;
  for (i=0; i<n; i++){
    exe_once(1,0);
//    difftest_step(rv64.pc, 1);
printf("sign3 = %ld \n",n);
  }
  if(i == n){
    exe_once(0,1);
  }
}  

void cpu_exec(uint64_t n) {

  execute(n);
  printf("sign1 = %ld\n", n);

  switch (npc_state.state) {
    case NEMU_RUNNING: npc_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:

    case NEMU_QUIT: statistic();
  }
}

void statistic(){
}

