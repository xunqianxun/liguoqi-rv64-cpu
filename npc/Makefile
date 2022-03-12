VERILOG= ./vsrc/
TARGET=main
CC=g++
OBJ=main.o

all:cmp
	@echo "yes i know"
$(TARGET):$(OBJ)
	$(CC) -o $(TARGET) $(OBJ)
$(OBJ):main.cpp stdio.h stdlib.h assert.h ./obj_dir/Vtop.h
	$(CC) -c main.cpp
cmp:
	verilator -Wall --trace --cc --exe -build ./csrc/main.cpp $(VERILOG)top.v
	make -C obj_dir -f Vtop.mk Vtop
	./obj_dir/Vtop
gtk:
	gtkwave ./obj_dir/top.vcd
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
clean:
	rm-rf *.o $(TARGET)
.PHONY:clean
include ../Makefile
