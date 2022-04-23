#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vrvcpu.h"
#include <verilated.h>          
#include <verilated_vcd_c.h>  
#include "monitor.cpp"
#include <Vrvcpu__Dpi.h>
#include <svdpi.h>
#include "regs.h"

using namespace std;


#define right 0
#define fals  1
uint32_t ifetch(uint64_t addr, int len);
bool isa_difftest_checkregs(CPU_state *ref_r, uint64_t pc);
void npc_mainworkint(int argc, char *argv[]);
void exe_once(int n);

// void npc_mainworkint(int argc, char *argv[]){
//    init_monitor(argc, argv);
//    sdb_mainloop();
// }

void statistic(){
}

vluint64_t main_time = 0;
double sc_time_stamp(){
  return main_time;
}


int main(int argc , char** argv , char** env) {
//init_monitor(argc, argv); 
//load_img();
VerilatedContext* contextp = new VerilatedContext ;
contextp->commandArgs(argc, argv) ;
Vrvcpu* rvcpu = new Vrvcpu(contextp);
Verilated::traceEverOn(true) ; //out vcd need
VerilatedVcdC* tfp = new VerilatedVcdC ; // out vcd need
rvcpu->trace(tfp,0) ;
tfp->open("obj_dir/rvcpu.vcd") ; // open vcd
rvcpu->rst = 1;
rvcpu->bui_inst_valid = fals;
init_monitor(argc, argv);

// npc_mainworkint(argc, argv);
while(sc_time_stamp() < 100){
 sdb_mainloop();
if(exe_once_sign == 1){

if(main_time > 10){
  rvcpu->rst = 0 ; 
}
if((main_time % 10) == 1){
  rvcpu->clk = 1;
  if(rvcpu->inst_addr >= 0x80000000){
  rvcpu->inst = ifetch(rvcpu->inst_addr, 4);
  }
  if(rv64.pc != 0 ){
    difftest_step(rv64.pc,1);
  }
  
  rvcpu->eval();

}
if((main_time % 10) == 6){
  rvcpu->clk = 0;
}
  rvcpu->eval();
  tfp->dump(main_time);
  main_time++;
}
}
tfp->close() ;
delete rvcpu ;
delete contextp ;
exit(0) ;
return 0;
}



