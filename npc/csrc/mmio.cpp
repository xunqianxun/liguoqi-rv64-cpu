//#include <reg.h>
#include "paddr.cpp"

#define NR_MAP 16

static IOMap maps[NR_MAP] = {};
static int nr_map = 0;

static IOMap* fetch_mmio_map(uint32_t addr) {
  int mapid = find_mapid_by_addr(maps, nr_map, addr);
  return (mapid == -1 ? NULL : &maps[mapid]);
}

/* device interface */
void add_mmio_map(const char *name, uint32_t addr, void *space, uint32_t len, io_callback_t callback) {
  //assert(nr_map < NR_MAP);
  maps[nr_map] = (IOMap){ .name = name, .low = addr, .high = addr + len - 1,
    .space = space, .callback = callback };
//   Log("Add mmio map '%s' at [" FMT_PADDR ", " FMT_PADDR "]",
//       maps[nr_map].name, maps[nr_map].low, maps[nr_map].high);

  nr_map ++;
}

/* bus interface */
uint64_t mmio_read(uint32_t addr, int len) {
  return map_read(addr, len, fetch_mmio_map(addr));
}

void mmio_write(uint32_t addr, int len, uint64_t data) {
  map_write(addr, len, data, fetch_mmio_map(addr));
}

#define IO_SPACE_MAX (2 * 1024 * 1024)

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  //assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

// static void check_bound(IOMap *map, paddr_t addr) {
//   if (map == NULL) {
//     Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
//   } else {
//     Assert(addr <= map->high && addr >= map->low,
//         "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
//         addr, map->name, map->low, map->high, cpu.pc);
//   }
// }

static void invoke_callback(io_callback_t c, uint32_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
  io_space = malloc((void*)2*1024*1024);
  //assert(io_space);
  p_space = io_space;
}

uint64_t map_read(uint32_t addr, int len, IOMap *map) {
  //assert(len >= 1 && len <= 8);
  //check_bound(map, addr);
  uint32_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read
  uint64_t ret = host_read((void*)map->space + offset, len);
  return ret;
}

void map_write(uint32_t addr, int len, uint64_t data, IOMap *map) {
  //assert(len >= 1 && len <= 8);
  //check_bound(map, addr);
  uint32_t offset = addr - map->low;
  host_write((void*)map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);
}


static uint32_t *rtc_port_base = NULL;

static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
  assert(offset == 0 || offset == 4);
//  printf("%d,%d\n", offset, is_write);
  if (!is_write) {
    uint64_t us = get_time();
    rtc_port_base[0] = (uint32_t)us;
    rtc_port_base[1] = us >> 32;
  }
}

#ifndef CONFIG_TARGET_AM
static void timer_intr() {
  if (npc_state.state == NEMU_RUNNING) {
    extern void dev_raise_intr();
    dev_raise_intr();
  }
}
#endif

void init_timer() {
  rtc_port_base = (uint32_t *)new_space(8);
// #ifdef CONFIG_HAS_PORT_IO
//   add_pio_map ("rtc", CONFIG_RTC_PORT, rtc_port_base, 8, rtc_io_handler);
// #else
// #endif
  add_mmio_map("rtc", 0xa0000048, rtc_port_base, 8, rtc_io_handler);
  //IFNDEF(CONFIG_TARGET_AM, add_alarm_handle(timer_intr));
}