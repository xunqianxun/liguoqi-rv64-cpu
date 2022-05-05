ifeq ($(wildcard /home/mulin/ysyx-workbench/npc/csrc/main.cpp),)
  $(error can't find the sim cpp file)
endif

include /usr/share/verilator/include/verilated.mk

OBJ_PATH=./obj_dir/
VERILOG= ./vsrc/
CC=g++
SIM_DIR= ./csrc/build
IMG_NPC?=
IMGE_FLAGS?= 
LINK= -LDFLAGS "-ldl"
LINEREAD=-LDFLAGS "-lreadline"
VERILAGS= -Wall
VERILAGS+= --trace
VERILAGS+= --cc
VERILAGS+= --exe
VERILAGS+= -build

sim:
	@$(shell if[!-e$(SIM_DIR)];then mkdir -p$(SIM_DIR);fi)

run:git
	@verilator $(VERILAGS) $(LINK) $(LINEREAD) ./csrc/main.cpp $(VERILOG)rvcpu.v
	@make -C $(OBJ_PATH) -f Vrvcpu.mk Vrvcpu
	./obj_dir/Vrvcpu $(IMGE_FLAGS) $(IMG_NPC)

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
