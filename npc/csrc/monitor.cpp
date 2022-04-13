#include<iostream>
#include<fstream>
#include"sdb.cpp"

using namespace std;

string filepach = "/home/mulin/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-nemu.bin";
int load_img_getsize(string path);
void readbin(string path, uint8_t * buf, int size);
static void img_load();
void init_monitorp(int argc, char *argv[]);

static uint8_t pmem[0x8000000] __attribute((aligned(4096)))  = {};

int load_img_getsize(string path){
  int size = 0;
  ifstream infile(path, ifstream::binary);
  infile.seekg(0, infile.end);
  size = infile.tellg();
  infile.seekg(0, infile.beg);
  infile.close();
  return size;
}

void readbin(string path, uint8_t * buf, int size){
  ifstream infile(path, ifstream::binary);
  infile.read(reinterpret_cast<char *> (buf), size);
  for(int count; count < size; count++)
  cout << buf[count] << endl;
  infile.close();
}

// string returnpach(string filepacht){
//     return filepacht;
// }

static void img_load(){
    // string filepach = "/home/mulin/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-nemu.bin";
    int size = load_img_getsize(filepach);
    readbin(filepach, pmem, size);
}

void init_monitorp(int argc, char *argv[]){
 //   parseargs(argc, argv);

//    init_mem();
    img_load();

    int img_size = load_img_getsize(filepach);

 //   inst_sdb();

}