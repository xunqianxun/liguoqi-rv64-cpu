ifeq ($(wildcard /home/mulin/ysyx-workbench/npc/csrc/main.cpp),)
  $(error can't find the sim cpp file)
endif

include /usr/share/verilator/include/verilated.mk

OBJ_PATH=./obj_dir/
VERILOG= ./vsrc/
CC=g++
SIM_DIR= ./csrc/build
IMG_NPC?= /home/mulin/oscpu/bin/custom-output/rt-thread/rtthread.bin
IMGE_FLAGS?= 
LINK= -LDFLAGS "-ldl"
LINEREAD=-LDFLAGS "-lreadline"
LINKDEBUG=--prof-cfuncs -CFLAGS -DVL_DEBUG
VERILAGS= -Wall
VERILAGS+= --trace
VERILAGS+= --cc
VERILAGS+= --exe
VERILAGS+= -build

sim:
	@$(shell if[!-e$(SIM_DIR)];then mkdir -p$(SIM_DIR);fi)

run:git
	@verilator $(VERILAGS) $(LINK) $(LINEREAD) $(LINKDEBUG) ./csrc/main.cpp $(VERILOG)SocTop.v
	@make -C $(OBJ_PATH) -f VSocTop.mk VSocTop
	./obj_dir/VSocTop $(IMGE_FLAGS) $(IMG_NPC)

gtk:
	@gtkwave ./obj_dir/SocTop.vcd
git:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
clean:
	rm -rf $(SIM_DIR)
clean-all: clean
	rm -rf ./csrc/obj_dir/
.PHONY:clean
include ../Makefile
