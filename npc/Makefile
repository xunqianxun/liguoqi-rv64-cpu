VERILOG= ./vsrc/
TARGET=main
CC=g++
OBJ=main.o

all:cmp
	@echo "yes i know"
$(TARGET):$(OBJ)
	$(CC) -o $(TARGET) $(OBJ)
$(OBJ):main.cpp stdio.h stdlib.h assert.h ./obj_dir/Vrvcpu.h
	$(CC) -c main.cpp
run:
	verilator -Wall --trace --cc --exe -build ./csrc/main.cpp $(VERILOG)rvcpu.v
	make -C obj_dir -f Vrvcpu.mk Vrvcpu
	./obj_dir/Vrvcpu
gtk:
	gtkwave ./obj_dir/rvcpu.vcd
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
clean:
	rm -rf *.o $(TARGET)
.PHONY:clean
include ../Makefile
