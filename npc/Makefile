ifeq ($(wildcard /home/mulin/ysyx-workbench/npc/csrc/main.cpp),)
  $(error can't find the sim cpp file)
endif

VERILOG= ./vsrc/
TARGET=main
CC=g++
OBJ=main.o
Q=@

all:
$(TARGET):$(OBJ)
	$(Q)$(CC) -o $(TARGET) $(OBJ)
$(OBJ):main.cpp stdio.h stdlib.h assert.h ./obj_dir/Vrvcpu.h
	$(Q)$(CC) -c main.cpp
run:sim
	$(Q)verilator -Wall --trace --cc --exe -build ./csrc/main.cpp $(VERILOG)rvcpu.v
	$(Q)make -C obj_dir -f Vrvcpu.mk Vrvcpu
	$(Q)./obj_dir/Vrvcpu
gtk:
	$(Q)gtkwave ./obj_dir/rvcpu.vcd
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
clean:
	rm -rf *.o $(TARGET)
.PHONY:clean
include ../Makefile
