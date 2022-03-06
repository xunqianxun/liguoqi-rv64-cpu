#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include <verilated.h>          
#include <verilated_vcd_c.h>  

int main(int argc , char** argv , char** env) {
//const std::unique_ptr<VerilatedContext> contextp (new VerilatedContext);
VerilatedContext* contextp = new VerilatedContext ;
contextp->commandArgs(argc, argv) ;
Vtop* top = new Vtop(contextp) ;
Verilated::traceEverOn(true) ;
VerilatedVcdC* tfp = new VerilatedVcdC ;
top->trace(tfp,99) ;
tfp->open("obj_dir/top.vcd") ;

while(!contextp->gotFinish()){
  int a = rand() & 1 ;
  int b = rand() & 1 ;
  top->a = a ;
  top->b = b ;  
  contextp-> timeInc(1) ;
  top->eval();
  //printf("a= %d , b=%d , f=%d\n",a,b,top->f);
  assert(top->f == a^b);
  tfp->dump(contextp->time());
}
tfp->close() ;
delete top ;
delete contextp ;
exit(0) ;
return 0;
}
