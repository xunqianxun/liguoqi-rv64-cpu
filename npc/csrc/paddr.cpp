#include <iostream>

// u_int64_t *returnaddr(u_int64_t addr){ return addr;}

// u_int64_t mem_rade(void *addr){
//     return *(u_int64_t *)addr;
// }


u_int64_t memery(int addr){
    return int (int *)addr;
    // switch (addr)
    // {
    // case 0x80000000: return 0xffc10113; break;
    // case 0x80000004: return 0xff010113; break;
    // case 0x80000008: return 0x00000517; break;
    // case 0x8000000c: return 0x01c50513; break;
    // case 0x80000010: return 0x00100073; break;
    
    // default: return 0; break;
    // }
}

