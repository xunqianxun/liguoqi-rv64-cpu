#include <stdlib.h>
#include <assert.h>
#include "VysyxSoCFull.h"
#include <verilated.h>          
#include <verilated_vcd_c.h>  
#include <VysyxSoCFull__Dpi.h>
#include "spiFlash.cpp"
#include <svdpi.h>

using namespace std;


vluint64_t main_time = 0;
double sc_time_stamp(){
  return main_time;
}

int main(int argc , char** argv , char** env) {
VysyxSoCFull* ysyxSoCFull ;
VerilatedVcdC* tfp;
VerilatedContext* contextp;
contextp = new VerilatedContext ;
contextp->commandArgs(argc, argv) ;
ysyxSoCFull = new VysyxSoCFull(contextp);
Verilated::traceEverOn(true) ; //out vcd need
tfp = new VerilatedVcdC ; // out vcd need
ysyxSoCFull->trace(tfp,0) ;
tfp->open("obj_dir/ysyxSoCFull.vcd") ; // open vcd
char *path = (char *)"/home/mulin/ysyxSoC/ysyx/program/bin/loader/hello-loader.bin";
flash_init(path);

while((main_time > 100000) && !Verilated::gotFinish()){
	  if( main_time % 10 == 0 ) ysyxSoCFull->clock = 0;
	  if( main_time % 10 == 5 ) ysyxSoCFull->clock = 1;
		  
	  if( main_time < 10 )
	  {
		ysyxSoCFull->reset = 1;
	  }
	  else
	  {
	    ysyxSoCFull->reset = 0;
    }
  ysyxSoCFull->eval();
  tfp->dump(main_time);
  main_time++;
}
tfp->close() ;
printf("finish simlation\n");
delete ysyxSoCFull ;
delete contextp ;
exit(0) ;
return 0;

}