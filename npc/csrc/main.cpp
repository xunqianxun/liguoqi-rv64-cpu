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

extern "C" void flash_init(char *img);

vluint64_t main_time = 0;
double sc_time_stamp(){
  return main_time;
}

extern "C" void flash_read(long long addr, long long *data) {
  if (!data) return;
  Assert(in_flash(addr), "Flash address 0x%lx out of bound", addr);
  *data = *(uint64_t *)(flash + addr);
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
char *path = (char *)"/home/mulin/ysyxSoC/ysyx/program/bin/loader/hello-loader.bin";
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
}