#ifndef _REGS_H_
#define _REGS_H_

#include <time.h>
#include "/home/mulin/ysyx-workbench/nemu/include/macro.h"
//#include "/home/mulin/ysyx-workbench/nemu/include/utils.h"

enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };
extern void isa_exec_once(int y);
extern int close_npc();
bool difftest_ena;
uint64_t name_pc;

typedef struct 
{
  uint64_t gpr[32];
  uint64_t pc;
  uint64_t mcycle;
  uint64_t mstatus;
  uint64_t mtvec;
  uint64_t mepc ;
  uint64_t mcause;
  uint64_t mie ;
  uint64_t mip ;
  uint64_t mscratch;
} CPU_state;

typedef struct dut
{
  int state;
  uint64_t halt_pc;
  uint32_t halt_ret;
} NPC_state;

#define DIFFTEST_TO_REF 1
#define DIFFTEST_TO_DUT 0
#define DIFFTEST_REG_SIZE (sizeof(uint64_t) * 32)
// #define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
char *diff_so = (char *)"/home/mulin/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";

#define GREENCLOR   \033[0;32;40m
#define GREENCLOSE  \033[0m
#define REDCLOR   \041[0m

typedef struct Decode {
  uint64_t pc;
  uint64_t snpc; // static next pc
  uint64_t dnpc; // dynamic next pc
//  ISADecodeInfo isa;
  IFDEF(CONFIG_ITRACE, char logbuf[128]);
} Decode;

//-------------- CONFIG SET ----------------------------//
#define CONFIG_DIFFTEST
//#define CONFIG_DEVICE
//#define CONFIG_ITRACE

//---------------CONFIG SET-----------------------------//

CPU_state cpu = { .pc =0x80000000};
NPC_state npc_state = { .state = NEMU_STOP };



//----------------uintl---------------------------------//
uint64_t get_time();
#define ASNI_FG_BLACK   "\33[1;30m"
#define ASNI_FG_RED     "\33[1;31m"
#define ASNI_FG_GREEN   "\33[1;32m"
#define ASNI_FG_YELLOW  "\33[1;33m"
#define ASNI_FG_BLUE    "\33[1;34m"
#define ASNI_FG_MAGENTA "\33[1;35m"
#define ASNI_FG_CYAN    "\33[1;36m"
#define ASNI_FG_WHITE   "\33[1;37m"
#define ASNI_BG_BLACK   "\33[1;40m"
#define ASNI_BG_RED     "\33[1;41m"
#define ASNI_BG_GREEN   "\33[1;42m"
#define ASNI_BG_YELLOW  "\33[1;43m"
#define ASNI_BG_BLUE    "\33[1;44m"
#define ASNI_BG_MAGENTA "\33[1;35m"
#define ASNI_BG_CYAN    "\33[1;46m"
#define ASNI_BG_WHITE   "\33[1;47m"
#define ASNI_NONE       "\33[0m"

#define ASNI_FMT(str, fmt) fmt str ASNI_NONE

#define log_write(...) IFDEF(CONFIG_TARGET_NATIVE_ELF, \
  do { \
    extern FILE* log_fp; \
    extern bool log_enable(); \
    if (log_enable()) { \
      fprintf(log_fp, __VA_ARGS__); \
      fflush(log_fp); \
    } \
  } while (0) \
)

#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
    log_write(__VA_ARGS__); \
  } while (0)

//-----------------------------uintl--------------------//


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

extern void isa_reg_display() ;


#define FMT_PADDR MUXDEF(PMEM64, "0x%016lx", "0x%08x")


//-------------------------MMIO----------------------------//
typedef void(*io_callback_t)(uint32_t, int, bool);
uint8_t* new_space(int size);

typedef struct {
  const char *name;
  // we treat ioaddr_t as paddr_t here
  uint32_t low;
  uint32_t high;
  void *space;
  io_callback_t callback;
} IOMap;

static inline bool map_inside(IOMap *map, uint32_t addr) {
  return (addr >= map->low && addr <= map->high);
}

static inline int find_mapid_by_addr(IOMap *maps, int size, uint32_t addr) {
  int i;
  for (i = 0; i < size; i ++) {
    if (map_inside(maps + i, addr)) {
      //difftest_skip_ref();
      return i;
    }
  }
  return -1;
}

void add_pio_map(const char *name, uint16_t addr,
        void *space, uint32_t len, io_callback_t callback);
void add_mmio_map(const char *name, uint32_t addr,
        void *space, uint32_t len, io_callback_t callback);

uint64_t map_read(uint32_t addr, int len, IOMap *map);
void map_write(uint32_t addr, int len, uint64_t data, IOMap *map);

#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)

#define TIMER_HZ 60

typedef void (*alarm_handler_t) ();
void add_alarm_handle(alarm_handler_t h);


#endif