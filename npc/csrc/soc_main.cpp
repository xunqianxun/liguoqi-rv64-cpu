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
ysyxSoCFull = new VSocTop(contextp);
Verilated::traceEverOn(true) ; //out vcd need
tfp = new VerilatedVcdC ; // out vcd need
ysyxSoCFull->trace(tfp,0) ;
tfp->open("obj_dir/ysyxSoCFull.vcd") ; // open vcd
ysyxSoCFull->rst = 1;
init_monitor(argc, argv);



}


//close npc function
extern int close_npc(){
tfp->close() ;
delete rvcpu ;
delete contextp ;
exit(0) ;
return 0;
}