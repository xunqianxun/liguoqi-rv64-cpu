// #include <stdlib.h>
// #include <assert.h>
// #include "Vrvcpu.h"
// #include <verilated.h>          
// #include <verilated_vcd_c.h>  
// #include <Vrvcpu__Dpi.h>
// #include "monitor.cpp"
// #include <svdpi.h>

#include <stdlib.h>
#include <assert.h>
#include "VSocTop.h"
#include <verilated.h>          
#include <verilated_vcd_c.h>  
#include <VSocTop__Dpi.h>
#include "monitor.cpp"
#include <svdpi.h>
//#include <time.h>

using namespace std;

VSocTop* rvcpu ;
VerilatedVcdC* tfp;
VerilatedContext* contextp;

uint32_t ifetch(uint64_t addr, int len);
int is_exit_status_bad();


// extern "C" void caceh_check(long long write_data, long long read_data){
//   printf("writedcaceh_data = %llx \n", write_data);
//   printf("readdcaceh_data = %llx \n", read_data);
// }

// extern "C" void caceh_checkteg(const svBitVecVal* write_teg, const svBitVecVal* read_teg){
//   printf("writedcaceh_teg = %lx \n", write_teg);
//   printf("readdcaceh_teg = %lx \n", read_teg);
// }


extern "C" void difftest_dut_thepc(long long thepc_data){
    cpu.pc = thepc_data  ;
}

extern "C" void difftest_dut_pc(long long pc_data, long long exit_code, svBit endyn, svBit exe){
  name_pc = pc_data;
  difftest_ena = exe;
  if(endyn) {
    npc_state.halt_ret = exit_code;
    npc_state.state = NEMU_END;
    npc_state.halt_pc = pc_data;
  }
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

vluint64_t main_time = 0;
double sc_time_stamp(){
  return main_time;
}


int main(int argc , char** argv , char** env) {

contextp = new VerilatedContext ;
contextp->commandArgs(argc, argv) ;
rvcpu = new VSocTop(contextp);
Verilated::traceEverOn(true) ; //out vcd need
tfp = new VerilatedVcdC ; // out vcd need
rvcpu->trace(tfp,0) ;
tfp->open("obj_dir/SocTop.vcd") ; // open vcd
rvcpu->rst = 1;
init_monitor(argc, argv);

sdb_mainloop();
close_npc();
is_exit_status_bad();
}

//----------------------get time-------------------------------//
// static uint64_t boot_time = 0;

// static uint64_t get_time_internal() {
//   struct timespec now;
//   clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
//   uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;

//   return us;
// }

// uint64_t get_time() {
//   if (boot_time == 0) boot_time = get_time_internal();
//   uint64_t now = get_time_internal();
//   return now - boot_time;
// }

//close npc function

extern int close_npc(){
tfp->close() ;
delete rvcpu ;
delete contextp ;
exit(0) ;
return 0;
}

int is_exit_status_bad() {
  int good = (npc_state.state == NEMU_END && npc_state.halt_ret == 0) ||
    (npc_state.state == NEMU_QUIT);
  return !good;
}
#define AXI_DIFFTEST
#ifndef AXI_DIFFTEST
extern void isa_exec_once(int y){
uint64_t startpc = 0x80000000;
int della;
int ddy ;
ddy = y;
while(ddy){
if(main_time > 10){
  rvcpu->rst = 0 ;
}

if((main_time % 10) == 1){
  rvcpu->clk = 1;
  if(rvcpu->rst == 0){
    if(main_time == 11){
      rvcpu->inst = ifetch(startpc, 4);
    }
  rvcpu->eval();
  // get pc
    if(della == 1){
    rvcpu->mem_finish = 0;
    della = 0;
  }
  rvcpu->inst = ifetch(rvcpu->inst_addr, 4);
  //make mem sign
  if(rvcpu->re){
    della = 1;
    rvcpu->data_i = vaddr_read(rvcpu->data_addr, 8);
    rvcpu->mem_finish = 1;
  }
  if(rvcpu->we){
    della = 1;
    switch (rvcpu->wmask)
    {
    case 1: case 2: case 4: case 8: case 16: case 32: case 64: case 128: 
    vaddr_write(rvcpu->data_addr, 1, rvcpu->data_o);
    rvcpu->mem_finish = 1;
    break;

    case 3: case 12: case 48: case 192:
    vaddr_write(rvcpu->data_addr, 2, rvcpu->data_o);
    rvcpu->mem_finish = 1;
    break;

    case 15: case 240:
    vaddr_write(rvcpu->data_addr, 4, rvcpu->data_o);
    rvcpu->mem_finish = 1;
    break;

    case 255:
    vaddr_write(rvcpu->data_addr, 8, rvcpu->data_o);
    rvcpu->mem_finish = 1;
    break;

    default:
      break;
    }
  }
}
}

if((main_time % 10) == 6){
  rvcpu->clk = 0;
}

if((main_time % 10) == 9){
  rvcpu->clk = 0;
  ddy = 0;
}
//  printf("maintime=%ld\n",main_time);

  rvcpu->eval();
  tfp->dump(main_time);
  main_time++;
}
}
#else 
extern void isa_exec_once(int y){
int ddy ;
ddy = y;
while(ddy){
  if(main_time > 11) {
    rvcpu->rst = 0 ;
  }
  if((main_time % 10) == 2){
    rvcpu->clk = 1;
    rvcpu->eval();
    if(rvcpu->read_ena_sign_ == 1){
        //printf("addraddr : %lx\n",rvcpu->out_addr_outp);
      if(rvcpu->out_addr_outp != 0) && (rvcpu->out_addr_outp != 0xa00003f8){
        printf("addraddr : %lx\n",rvcpu->out_addr_outp);

      rvcpu->read_data_sign_ = vaddr_read(rvcpu->out_addr_outp, 8);
      }
    }
    if(rvcpu->out_write_ram_ena == 1){
      if(rvcpu->out_write_ram_addr != 0){
      printf("writeaddr : %lx\n", rvcpu->out_write_ram_addr);
      vaddr_write(rvcpu->out_write_ram_addr, 8, rvcpu->out_write_ram_data);
      }
    }
    if(rvcpu->out_serial_write_ == 1){
      if(rvcpu->out_slave_addr_ != 0){
         char flower = (char) rvcpu->out_serial_data_;
         printf("%c", flower);
      }
    }
  }
  if((main_time % 10) == 6){
  rvcpu->clk = 0;
  }

  if((main_time % 10) == 9){
    rvcpu->clk = 0;
    ddy = 0;
  }

  rvcpu->eval();
  tfp->dump(main_time);
  main_time++;
}
}
#endif
