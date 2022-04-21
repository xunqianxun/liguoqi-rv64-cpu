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

bool exe_success;
int ebreaksign;
char sdb_sign;
#define right 0
#define fals  1
uint32_t ifetch(uint64_t addr, int len);
bool isa_difftest_checkregs(CPU_state *ref_r, uint64_t pc);

void statistic(){
   char data = scanf("%c", &sdb_sign);
   if(data == 'q'){exe_success  = 0 ;}
}

extern "C" void Ebreak_teap(svLogic rvsign){
  if(rvsign == 1) ebreaksign = 1;
  else            ebreaksign = 0;
}

extern "C" void difftest_dut_pc(long long pc_data, svBit exe){
  cpu.pc = pc_data;
  exe_success = exe;
}

extern "C" void difftest_dut_regs(long long Z0, long long ra, long long sp, long long gp, long long tp, long long t0, long long t1, long long t2, long long fp, long long s1, long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long s2, long long s3, long long s4, long long s5, long long s6, long long s7, long long s8, long long s9, long long s10, long long a11, long long t3, long long t4, long long t5, long long t6){
  cpu.gpr[0] = Z0;
  cpu.gpr[1] = ra;
  cpu.gpr[2] = sp;
  cpu.gpr[3] = gp;
  cpu.gpr[4] = tp;
  cpu.gpr[5] = t0;
  cpu.gpr[6] = t1;
  cpu.gpr[7] = t2;
  cpu.gpr[8] = fp;
  cpu.gpr[9] = s1;
  cpu.gpr[10] = a0;
  cpu.gpr[11] = a1;
  cpu.gpr[12] = a2;
  cpu.gpr[13] = a3;
  cpu.gpr[14] = a4;
  cpu.gpr[15] = a5;
  cpu.gpr[16] = a6;
  cpu.gpr[17] = a7;
  cpu.gpr[18] = s2;
  cpu.gpr[19] = s3;
  cpu.gpr[20] = s4;
  cpu.gpr[21] = s5;
  cpu.gpr[22] = s6;
  cpu.gpr[23] = s7;
  cpu.gpr[24] = s8;
  cpu.gpr[25] = s9;
  cpu.gpr[26] = s10;
  cpu.gpr[27] = a11;
  cpu.gpr[28] = t3;
  cpu.gpr[29] = t4;
  cpu.gpr[30] = t5;
  cpu.gpr[31] = t6;
}

static void execute(uint64_t n) {

    if((exe_success == 1) && (cpu.pc != 0x80000000)){
    difftest_step(cpu.pc, n);
    }
}

void cpu_exec(uint64_t n) {

  execute(n);

  switch (npc_state.state) {
    case NEMU_RUNNING: npc_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:

    case NEMU_QUIT: statistic();
  }
}

vluint64_t main_time = 0;
double sc_time_stamp(){
  return main_time;
}


int main(int argc , char** argv , char** env) {
init_monitor(argc, argv); 
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
while(~ebreaksign && !contextp->gotFinish() && sc_time_stamp() < 1000){
    cout << cpu.pc << endl;
//  cpu_exec(1);

if(main_time > 10){
  rvcpu->rst = 0 ; 
}
if((main_time % 10) == 1){
  rvcpu->clk = 1;
  if(rvcpu->inst_addr >= 0x80000000){
  rvcpu->inst = ifetch(rvcpu->inst_addr, 4);
  }
  //  cout << rvcpu->inst << endl;
  //  cout << rvcpu->inst_addr << endl;
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
