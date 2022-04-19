ifeq ($(wildcard /home/mulin/ysyx-workbench/npc/csrc/main.cpp),)
  $(error can't find the sim cpp file)
endif

OBJ_PATH=./obj_dir/
VERILOG= ./vsrc/
CC=g++
SIM_DIR= ./csrc/build
TEST_PATH="/home/mulin/ysyx-workbench/am-kernels/tests/cpu-tests/build/riscv64-nemu/"
IMG_NPC?=
PACH_ADD=$(TEST_PATH)
PACH_ADD+=$(IMG_NPC)


sim:
	@$(shell if[!-e$(SIM_DIR)];then mkdir -p$(SIM_DIR);fi)

run:git
	@verilator -Wall --trace --cc --exe -build ./csrc/main.cpp $(VERILOG)rvcpu.v
	@make -C $(OBJ_PATH) -f Vrvcpu.mk Vrvcpu CXXFLAGS+= -DPACH_IMG=\"$(PACH_ADD)\" LDFLAGS+= -ldl
	@./obj_dir/Vrvcpu

gtk:
	@gtkwave ./obj_dir/rvcpu.vcd
git:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
clean:
	rm -rf $(SIM_DIR)
clean-all: clean
	rm -rf ./csrc/obj_dir/
.PHONY:clean
include ../Makefile
