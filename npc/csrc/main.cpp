#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vrvcpu.h"
#include <verilated.h>          
#include <verilated_vcd_c.h>  
#include "monitor.cpp"
#include <Vrvcpu__Dpi.h>
#include <svdpi.h>

using namespace std;

#define right 0
#define fals  1
uint32_t ifetch(uint64_t addr, int len);
extern svBit Ebreak_teap();

vluint64_t main_time = 0;
double sc_time_stamp(){
  return main_time;
}

int main(int argc , char** argv , char** env) {
load_img();
VerilatedContext* contextp = new VerilatedContext ;
contextp->commandArgs(argc, argv) ;
Vrvcpu* rvcpu = new Vrvcpu(contextp);
Verilated::traceEverOn(true) ; //out vcd need
VerilatedVcdC* tfp = new VerilatedVcdC ; // out vcd need
rvcpu->trace(tfp,0) ;
tfp->open("obj_dir/rvcpu.vcd") ; // open vcd
rvcpu->rst = 1;
rvcpu->bui_inst_valid = fals;
while(Ebreak_teap() && !contextp->gotFinish()){
//  int a = rand() & 1 ;
//  int b = rand() & 1 ;
if(main_time > 10){
  rvcpu->rst = 0 ; 
}
if((main_time % 10) == 1){
  rvcpu->clk = 1;
  if(rvcpu->inst_addr >= 0x80000000){
  rvcpu->inst = ifetch(rvcpu->inst_addr, 4);
  }
   cout << rvcpu->inst << endl;
   cout << rvcpu->inst_addr << endl;
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

//read regsfile
// void readregfile(){
//   for(int i; i < 32; i++)
//   cout << 
// }

//
