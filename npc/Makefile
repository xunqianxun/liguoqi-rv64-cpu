ifeq ($(wildcard /home/mulin/ysyx-workbench/npc/csrc/main.cpp),)
  $(error can't find the sim cpp file)
endif

VERILOG= ./vsrc/
CC=g++
Q=@

all:

run:sim
	verilator -Wall --trace --cc --exe -build ./csrc/main.cpp $(VERILOG)rvcpu.v
	make -C obj_dir -f Vrvcpu.mk Vrvcpu
	./obj_dir/Vrvcpu
gtk:
	gtkwave ./obj_dir/rvcpu.vcd
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
clean:
.PHONY:clean
include ../Makefile
