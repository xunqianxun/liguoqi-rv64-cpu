#include<iostream>
#include<fstream>
#include<getopt.h>
#include"sdb.cpp"
#include"paddr.cpp"
#include"dut.cpp"

 using namespace std;

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static long load_img() {
   #ifdef PACH_IMG
   char *img_file = (char *)PACH_IMG;
   #endif
//  char *img_file = (char *)"/home/mulin/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-nemu.bin";
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

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , 0      , NULL, 'b'},
    {"log"      , 1      , NULL, 'l'},
    {"diff"     , 1      , NULL, 'd'},
    {"port"     , 1      , NULL, 'p'},
    {"help"     , 0      , NULL, 'h'},
    {0          , 0      , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}


void init_monitor(int argc, char *argv[]) {

  parse_args(argc, argv);

  init_rand();
//  init_log(log_file);
//  init_mem();
//  IFDEF(CONFIG_DEVICE, init_device());
//  init_isa();

  long img_size = load_img();

  init_difftest(diff_so_file, img_size, difftest_port);

  init_sdb(); 


//   IFDEF(CONFIG_ITRACE, init_disasm(
//     MUXDEF(CONFIG_ISA_x86,     "i686",
//     MUXDEF(CONFIG_ISA_mips32,  "mipsel",
//     MUXDEF(CONFIG_ISA_riscv32, "riscv32",
//     MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));
}
