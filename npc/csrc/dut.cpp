#include <iostream>
#include <dlfcn.h>
#include <stdlib.h>

enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };

extern "C"{
typedef void ( *difftest_memcpy)(uint32_t, void *buf, unsigned long n, bool direction) = NULL;
typedef void ( *difftest_regcpy)(void *dut, bool direction) = NULL;
typedef void ( *difftest_exec)(uint64_t n) = NULL;
}

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

typedef struct 
{
  uint64_t gpr[31];
  uint64_t pc;
} CPU_state;

typedef struct dut
{
  int state;
  uint64_t halt_pc;
  uint32_t halt_ret;
} npc_state;

// extern "C"{
// typedef void ( *difftest_memcpy)(uint32_t, void *buf, unsigned long n, bool direction) = NULL;
// typedef void ( *difftest_regcpy)(void *dut, bool direction) = NULL;
// typedef void ( *difftest_exec)(uint64_t n) = NULL;
// }
//void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
#define DIFFTEST_TO_REF 1


// static bool is_skip_ref = false;
// static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
// void difftest_skip_ref() {
//   is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
//   skip_dut_nr_inst = 0;
// }

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    h_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
//  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, 0x00001);
//  assert(handle);

  difftest_memcpy h_difftest_memcpy = (difftest_memcpy)dlsym(handle, "difftest_memcpy");
//  assert(ref_difftest_memcpy);

  difftest_regcpy h_difftest_regcpy = (difftest_regcpy)dlsym(handle, "difftest_regcpy");
//  assert(ref_difftest_regcpy);

  difftest_exec h_difftest_exec = (difftest_exec)dlsym(handle, "difftest_exec");
//  assert(ref_difftest_exec);

  // ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
  // assert(ref_difftest_raise_intr);

//   void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
//   assert(ref_difftest_init);

//   Log("Differential testing: %s", ASNI_FMT("ON", ASNI_FG_GREEN));
//   Log("The result of every instruction will be compared with %s. "
//       "This will help you a lot for debugging, but also significantly reduce the performance. "
//       "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

//   ref_difftest_init(port);
  h_difftest_memcpy(0x80000000, gi_to_hi(0x80000000), img_size, DIFFTEST_TO_REF);
  h_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

static void checkregs(CPU_state *ref, uint64_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NEMU_ABORT;
    npc_state.halt_pc = pc;
//    isa_reg_display();
  }
}

void difftest_step(uint64_t pc, uint64_t npc) {
  CPU_state ref_r;

  if (skip_dut_nr_inst > 0) {
    h_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    return;
  }

  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    h_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  h_difftest_exec(1);
  h_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, pc);
}
// void init_difftest(char *ref_so_file, long img_size, int port) { }
// #endif
bool isa_difftest_checkregs(CPU_state *ref_r, uint64_t pc) {
    if (memcmp(&cpu.gpr[1], &ref_r->gpr[1], DIFFTEST_REG_SIZE - sizeof(cpu.gpr[0]))) {
    int i;
    // do not check $0
    for (i = 1; i < ARRLEN(cpu.gpr); i ++) {
      difftest_check_reg(reg_name(i, 4), pc, ref_r->gpr[i], cpu.gpr[i]);
    }
    difftest_check_reg("pc", pc, ref_r->pc, cpu.pc);
    return false;
  }
  return true;
}
