#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vrvcpu.h"
#include <verilated.h>          
#include <verilated_vcd_c.h>  
//#include <svdpi.h>
#include "pmem.cpp"
#include <Vrvcpu__Dpi.h>

#define right 0
#define fals  1
#define EBREAK 0x100073

//extern int svtoc(int b);
//int returninst(int i){
//  if(i == 0b1110011) return fals;
//  else return right;
//}

bool instfsv(){
  int inst;
  svtoc(&inst);
  if(inst == EBREAK){return right;}
  else {return fals;}
}

//int falsethat(){
//  if(svtoc(EBREAK) == EBREAK) return fals;
//  else return right;
//}

vluint64_t main_time = 0;
double sc_time_stamp(){
  return main_time;
}

int main(int argc , char** argv , char** env) {
VerilatedContext* contextp = new VerilatedContext ;
contextp->commandArgs(argc, argv) ;
Vrvcpu* rvcpu = new Vrvcpu(contextp);
Verilated::traceEverOn(true) ; //out vcd need
VerilatedVcdC* tfp = new VerilatedVcdC ; // out vcd need
rvcpu->trace(tfp,0) ;
tfp->open("obj_dir/rvcpu.vcd") ; // open vcd
rvcpu->rst = 1;
rvcpu->bui_inst_valid = fals;
while(sc_time_stamp()<1000 && !contextp->gotFinish()){
//  int a = rand() & 1 ;
//  int b = rand() & 1 ;
if(main_time > 10){
  rvcpu->rst = 0 ; 
}
if((main_time % 10) == 1){
  rvcpu->clk = 1;
  rvcpu->inst = memery(rvcpu->inst_addr);
  rvcpu->eval();

}
if((main_time % 10) == 6){
  rvcpu->clk = 0;
}
  //contextp-> timeInc(1) ;
  rvcpu->eval();
  //printf("a= %d , b=%d , f=%d\n",a,b,top->f);
  //assert(top->f == a^b);
  tfp->dump(main_time);
  main_time++;
}
tfp->close() ;
delete rvcpu ;
delete contextp ;
exit(0) ;
return 0;
}


