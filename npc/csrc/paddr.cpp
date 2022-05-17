#include <iostream>
#include <verilated.h> 


using namespace std;

static uint8_t pmem[0x8000000] __attribute((aligned(4096)))  = {};

uint8_t * gi_to_hi(uint32_t addr);
uint32_t hi_to_gi(uint8_t *addr);
static uint64_t pmem_read(uint32_t addr, int len);
static void pmem_write(uint32_t addr, int len, uint64_t data);
static inline uint64_t host_read(void *addr, int len);
static inline void host_write(void *addr, int len, uint64_t data);
uint64_t paddr_read(uint32_t addr, int len) ;
uint64_t vaddr_read(uint64_t addr, int len);
void vaddr_write(uint64_t addr, int len, uint64_t data);

uint64_t vaddr_read(uint64_t addr, int len) {
  return paddr_read(addr, len);
}

void vaddr_write(uint64_t addr, int len, uint64_t data) {
  paddr_write(addr, len, data);
}

uint32_t ifetch(uint64_t addr, int len){
    return paddr_read(addr, len);
}

uint64_t paddr_read(uint32_t addr, int len) {
  return pmem_read(addr, len);
}

uint64_t vaddr_read(uint64_t addr, int len){
  return paddr_read(addr,len);
}
//   IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
//   out_of_bound(addr);
//   return 0;


uint8_t *gi_to_hi(uint32_t haddr) {return pmem + haddr - 0x80000000;}
uint32_t hi_to_gi(uint8_t *paddr) {return paddr - pmem + 0x80000000;}

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
