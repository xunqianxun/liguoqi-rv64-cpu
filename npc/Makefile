ifeq ($(wildcard /home/mulin/ysyx-workbench/npc/csrc/main.cpp),)
  $(error can't find the sim cpp file)
endif

include /usr/share/verilator/include/verilated.mk

OBJ_PATH=./obj_dir/
#VERILOG= ./vsrc/
VERILOG= ./superscalar/
CC=g++
SIM_DIR= ./csrc/build
IMG_NPC?= 
IMGE_FLAGS?= -b
LINK= -LDFLAGS "-ldl"
LINEREAD=-LDFLAGS "-lreadline"
LINKDEBUG=--prof-cfuncs -CFLAGS -DVL_DEBUG
VERILAGS= -Wall
VERILAGS+= --trace
VERILAGS+= --cc
VERILAGS+= --exe
VERILAGS+= -build
VERILAGS+= -timescale 1ns/1ns
#VERILAGS+= -y ./vsrc/
VERILAGS+= -y ./superscalar/
VERILAGS+= --top-module ysyx_22040228



sim:
	@$(shell if[!-e$(SIM_DIR)];then mkdir -p$(SIM_DIR);fi)

run:git
	@verilator $(LINEREAD) $(LINK) $(VERILAGS) ./csrc/main_sim.cpp $(VERILOG)ysyx_22040228.v
	@make -C $(OBJ_PATH) -f Vysyx_22040228.mk Vysyx_22040228
	./obj_dir/Vysyx_22040228 $(IMG_NPC) $(IMGE_FLAGS)

gtk:
	@gtkwave ./obj_dir/ysyx_22040228.vcd
git:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
clean:
	rm -rf $(SIM_DIR)
clean-all: clean
	rm -rf ./obj_dir/
.PHONY:clean
include ../Makefile
