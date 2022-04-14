#include<iostream>
#include<fstream>
#include"sdb.cpp"
#include"paddr.cpp"

// using namespace std;

// string filepach = "/home/mulin/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-nemu.bin";
// int load_img_getsize(string path);
// void readbin(string path, uint8_t * buf, int size);
// static void img_load();
// void init_monitorp(int argc, char *argv[]);

//  static uint8_t pmem[0x8000000] __attribute((aligned(4096)))  = {};

// int load_img_getsize(string path){
//   int size = 0;
//   ifstream infile(path, ifstream::binary);
//   infile.seekg(0, infile.end);
//   size = infile.tellg();
//   infile.seekg(0, infile.beg);
//   infile.close();
//   return size;
// }

// void readbin(string path, uint8_t * buf, int size){
//   ifstream infile(path, ifstream::binary);
//   infile.read(reinterpret_cast<char *> (buf), size);
//   for(int count; count < size; count++)
//   cout << buf[count] << endl;
//   infile.close();
// }

// string returnpach(string filepacht){
//     return filepacht;
// }

// static void img_load(){
//     int size = load_img_getsize(filepach);
//     readbin(filepach, pmem, size);
// }

static long load_img() {
  char *img_file = (char *)"/home/mulin/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-nemu.bin";
  if (img_file == NULL) {
//    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
//  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

 // Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(gi_to_hi(0x80000000), size, 1, fp);
  assert(ret == 1);
  fclose(fp);
  return size;
}


void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

//   /* Open the log file. */
//   init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

//   IFDEF(CONFIG_ITRACE, init_disasm(
//     MUXDEF(CONFIG_ISA_x86,     "i686",
//     MUXDEF(CONFIG_ISA_mips32,  "mipsel",
//     MUXDEF(CONFIG_ISA_riscv32, "riscv32",
//     MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));
