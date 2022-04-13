#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vrvcpu.h"
#include <verilated.h>          
#include <verilated_vcd_c.h>  
#include "paddr.cpp"
#include <Vrvcpu__Dpi.h>

#define right 0
#define fals  1
uint32_t ifetch(uint64_t addr, int len);

vluint64_t main_time = 0;
double sc_time_stamp(){
  return main_time;
}

int main(int argc , char** argv , char** env) {
img_load();
VerilatedContext* contextp = new VerilatedContext ;
contextp->commandArgs(argc, argv) ;
Vrvcpu* rvcpu = new Vrvcpu(contextp);
Verilated::traceEverOn(true) ; //out vcd need
VerilatedVcdC* tfp = new VerilatedVcdC ; // out vcd need
rvcpu->trace(tfp,0) ;
tfp->open("obj_dir/rvcpu.vcd") ; // open vcd
rvcpu->rst = 1;
rvcpu->bui_inst_valid = fals;
while(sc_time_stamp()<10000 && (!contextp->gotFinish())){
//  int a = rand() & 1 ;
//  int b = rand() & 1 ;
if(main_time > 10){
  rvcpu->rst = 0 ; 
}
if((main_time % 10) == 1){
  rvcpu->clk = 1;
  rvcpu->inst = ifetch(rvcpu->inst_addr, 4);
  rvcpu->eval();

}
if((main_time % 10) == 6){
  rvcpu->clk = 0;
}
  rvcpu->eval();
  tfp->dump(main_time);
  main_time++;
}
tfp->close() ;
delete rvcpu ;
delete contextp ;
exit(0) ;
return 0;
}


