#include <iostream>
#include <verilated.h> 
#include "monitor.cpp"

using namespace std;
// u_int32_t memery(u_int64_t addr){
//      switch (addr)
//      {
//      case 0x80000000: return 0x01c50513; break;
//      case 0x80000004: return 0xff010113; break;
//      case 0x80000008: return 0x00000517; break;
//      case 0x8000000c: return 0x01c50513; break;
//      case 0x80000010: return 0x00000517; break;
    
//      default: return 0; break;
//      }
// }

// int getBinSize(std::string path){
//     int size = 0;
//     std::ifstream infile(path, std::ifstream::binary);
//     infile.seekg(0, infile.end);
//     int size = infile.tellg();
//     infile.seekg(0, infile.beg);

//     infile.close();
//     return siez;
// }
uint8_t * gi_to_hi(uint32_t addr);
uint32_t hi_to_gi(uint8_t *addr);
static uint64_t pmem_read(uint32_t addr, int len);
static void pmem_write(uint32_t addr, int len, uint64_t data);
static inline uint64_t host_read(void *addr, int len);
static inline void host_write(void *addr, int len, uint64_t data);

uint32_t ifetch(uint64_t addr, int len){
    (uint32_t)addr;
    return pmem_read(addr, len);
}

uint32_t

uint8_t * gi_to_hi(uint32_t addr) {return pmem + addr - 0x8000000;}
uint32_t hi_to_gi(uint8_t *addr) {return addr - pmem + 0x8000000;}

static uint64_t pmem_read(uint32_t addr, int len) {
  uint64_t ret = host_read(gi_to_hi(addr), len);
  return ret;
}

static void pmem_write(uint32_t addr, int len, uint64_t data) {
  host_write(gi_to_hi(addr), len, data);
}

static inline uint64_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: return 0;
  }
}

static inline void host_write(void *addr, int len, uint64_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    default: return;
  }
}
