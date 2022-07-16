#include <stdlib.h>
#include <assert.h>
#include "VysyxSoCFull.h"
#include <verilated.h>          
#include <verilated_vcd_c.h>  
#include <VysyxSoCFull__Dpi.h>
#include "spiFlash.cpp"
#include <svdpi.h>

using namespace std;

VysyxSoCFull* ysyxSoCFull ;
VerilatedVcdC* tfp;
VerilatedContext* contextp;

uint32_t ifetch(uint64_t addr, int len);

vluint64_t main_time = 0;
double sc_time_stamp(){
  return main_time;
}


int main(int argc , char** argv , char** env) {

contextp = new VerilatedContext ;
contextp->commandArgs(argc, argv) ;
ysyxSoCFull = new VysyxSoCFull(contextp);
Verilated::traceEverOn(true) ; //out vcd need
tfp = new VerilatedVcdC ; // out vcd need
ysyxSoCFull->trace(tfp,0) ;
tfp->open("obj_dir/ysyxSoCFull.vcd") ; // open vcd
ysyxSoCFull->reset = 1;
char path = "/home/mulin/ysyxSoC/ysyx/program/bin/loader/hello-loader.bin";
flash_init(path);

while(1){
  if(main_time > 11) {
    ysyxSoCFull->reset = 0 ;
  }
  if((main_time % 10) == 2){
    ysyxSoCFull->clock = 1 ;
  }
  if((main_time % 10) == 6){
    ysyxSoCFull->clock = 0 ;
  }

tfp->close() ;
delete ysyxSoCFull ;
delete contextp ;
exit(0) ;
return 0;
}
