#include <iostream>
#include <verilated.h> 

// u_int64_t *returnaddr(u_int64_t addr){ return addr;}

// u_int64_t mem_rade(void *addr){
//     return *(u_int64_t *)addr;
// }


u_int32_t memery(u_int64_t addr){
    //u_int32_t *inst = (u_int64_t *)addr;
//    std::cout << *inst << addr << (int *)0x80000000 << std::endl;
 //   return *(u_int64_t *)addr;//*inst;
     switch (addr)
     {
     case 0x80000000: return 0x01c50513; break;
     case 0x80000004: return 0xff010113; break;
     case 0x80000008: return 0x00000517; break;
     case 0x8000000c: return 0x01c50513; break;
     case 0x80000010: return *(u_int64_t *)0x80000010; break;
    
     default: return 0; break;
     }
}

