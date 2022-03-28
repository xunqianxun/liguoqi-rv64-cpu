#include <iostream>

// static struct mem{
//     u_int64_t addr;
//     u_int32_t inst;
// }mems[]={
//     {0x80000000,0xffc10113},
//     {0x80000004,0xff010113},
//     {0x80000008,0x00000517},
//     {0x8000000c,0x01c50513},
//     {0x80000010,0x00100073}
// };

// u_int64_t memery(int addr){
//    int i;
//    if(addr == mems[i].addr) {
//        i=0;
//        return mems[i].inst;
//        }
//    else {
//        i=i+1;
//        return mems[5].inst;
//     }
// }

u_int64_t memery(int addr){
    switch (addr)
    {
    case 0x80000000: return 0xffc10113; break;
    case 0x80000004: return 0xff010113; break;
    case 0x80000008: return 0x00000517; break;
    case 0x8000000c: return 0x01c50513; break;
    case 0x80000010: return 0x00100073; break;
    
    default: return 0; break;
    }
}
