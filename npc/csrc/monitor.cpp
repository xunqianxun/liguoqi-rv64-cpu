#include<iostream>
#include<fstream>
#include"sdb.cpp"
using namespace std;

static uint8_t pmem[0x8000000] __attribute((aligned(4096)))  = {};

long load_img_getsize(string path){
  int size = 0;
  ifstream infile(path, ifstream::binary);
  infile.seekg(0, infile.end);
  int size = infile.tellg();
  infile.seekg(0, infile.beg);
  infile.close();
  return size;
}

void readbin(string path, char * buf, int size){
  ifstream infile(path, ifstream::binary);
  infile.read(static_cast<char *>(buf), size);
  infile.close;
}

// string returnpach(string filepacht){
//     return filepacht;
// }

static img_load(){
    string filepach = "/home/mulin/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-nemu.bin";
    int size = load_img_getsize(filepach);
    readbin(filepach, pmem, size);
}

void init_monitor(int argc, char *argv[]){
 //   parseargs(argc, argv);

    init_mem();

    long img_size = load_img_getsize();

    inst_sdb();

}