ifeq ($(wildcard /home/mulin/ysyx-workbench/npc/csrc/main.cpp),)
  $(error can't find the sim cpp file)
endif

include /usr/share/verilator/include/verilated.mk

OBJ_PATH=./obj_dir/
VERILOG= ./vsrc/
CC=g++
SIM_DIR= ./csrc/build
IMG_NPC?=
IMGE_FLAGS=


sim:
	@$(shell if[!-e$(SIM_DIR)];then mkdir -p$(SIM_DIR);fi)

run:git
	@verilator -Wall --trace --cc --exe -build -LDFLAGS "-ldl" -LDFLAGS "-lreadline" -CFLAGS -b ./csrc/main.cpp $(VERILOG)rvcpu.v
	@make -C $(OBJ_PATH) -f Vrvcpu.mk Vrvcpu
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
