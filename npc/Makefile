ifeq ($(wildcard /home/mulin/ysyx-workbench/npc/csrc/main.cpp),)
  $(error can't find the sim cpp file)
endif

VERILOG= ./vsrc/
CC=g++
SIM_DIR= ./csrc/build

sim:
	@$(shell if[!-e$(SIM_DIR)];then mkdir -p$(SIM_DIR);fi)

run:git
	verilator -Wall --trace --cc --exe -build ./csrc/main.cpp $(VERILOG)rvcpu.v
	make -C obj_dir -f Vrvcpu.mk Vrvcpu
	./obj_dir/Vrvcpu
gtk:
	gtkwave ./obj_dir/rvcpu.vcd
git:gtk
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
clean:
	rm -rf $(SIM_DIR)
clean-all: clean
	rm -rf ./csrc/obj_dir/
.PHONY:clean
include ../Makefile
