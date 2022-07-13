#include <proc.h>
#include <elf.h>
#include <common.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

static uintptr_t loader(PCB *pcb, const char *filename) {
  //TODO();
  Elf_Ehdr elfehdr = {};
  Elf_Phdr elfphdr = {};
  ramdisk_read(&elfehdr, 0, get_ramdisk_size());
  uint64_t i = 0;
  for(i=0; i<elfehdr.e_phnum; i++){
    uint64_t newoffset = elfehdr.e_phoff + elfehdr.e_phentsize*i;
    ramdisk_read(&elfphdr, newoffset, elfehdr.e_phentsize);
    if(elfphdr.e_type == 0x1){
      ramdisk_read((void*)elfphdr.p_vaddr, elfphdr.p_offset, elfphdr.p_memsz);
      memset(void(*)(elfphdr.p_vaddr+elfphdr.filesz),0 ,(elfphdr.p_memsz-elfphdr.p_filesz));
    }
  }
  return elfehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

