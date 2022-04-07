#include <iostream>
#include <verilated.h> 

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

int getBinSize(std::string path){
    int size = 0;
    std::ifstream infile(path, std::ifstream::binary);
    infile.seekg(0, infile.end);
    int size = infile.tellg();
    infile.seekg(0, infile.beg);

    infile.close();
    return siez;
}

