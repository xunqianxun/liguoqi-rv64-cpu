#include <proc.h>
#include <elf.h>
#include <common.h>

extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
#define RAMDISK_SIZE ((&ramdisk_end) - (&ramdisk_start))

/* The kernel is monolithic, therefore we do not need to
 * translate the address `buf' from the user process to
 * a physical one, which is necessary for a microkernel.
 */



#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif


/* read `len' bytes starting from `offset' of ramdisk into `buf' */
size_t ramdisk_read(void *buf, size_t offset, size_t len) {
  assert(offset + len <= RAMDISK_SIZE);
  memcpy(buf, &ramdisk_start + offset, len);
  return len;
}

/* write `len' bytes starting from `buf' into the `offset' of ramdisk */
size_t ramdisk_write(const void *buf, size_t offset, size_t len) {
  assert(offset + len <= RAMDISK_SIZE);
  memcpy(&ramdisk_start + offset, buf, len);
  return len;
}

void init_ramdisk() {
  Log("ramdisk info: start = %p, end = %p, size = %d bytes",
      &ramdisk_start, &ramdisk_end, RAMDISK_SIZE);
}

size_t get_ramdisk_size() {
  return RAMDISK_SIZE;
}


static uintptr_t loader(PCB *pcb, const char *filename) {
  //TODO();
  Elf_Ehdr elfehdr = {};
  Elf_Phdr elfphdr = {};
  //init_ramdisk();
  ramdisk_read(&elfehdr, 0, get_ramdisk_size());
  printf("magicdata = %lx", elfehdr.e_ident);
  //assert(*(uint32_t *)elfehdr.e_ident == 0x7f454c46);
  uint64_t i = 0;
  for(i=0; i<elfehdr.e_phnum; i++){
    uint64_t newoffset = elfehdr.e_phoff + elfehdr.e_phentsize*i;
    ramdisk_read(&elfphdr, newoffset, elfehdr.e_phentsize);
    if(elfphdr.p_type == 0x1){
      ramdisk_read((void*)elfphdr.p_vaddr, elfphdr.p_offset, elfphdr.p_memsz);
      memset((void*)(elfphdr.p_vaddr+elfphdr.p_filesz),0 ,(elfphdr.p_memsz-elfphdr.p_filesz));
    }
  }
  return elfehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

