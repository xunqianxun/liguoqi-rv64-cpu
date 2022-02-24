.PHONY : all sim clean

TARGET=main
CC=g++
OBJ=main.o

all:
	@echo "yes i know"
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
$(TARGET):$(OBJ)
	$(CC) -o $(TARGET) $(OBJ)
$(OBJ):main.cpp stdio.h stdlib.h assert.h Vtop.h
	$(CC) -c main.cpp
clean:
	rm-rf *.o $(TARGET)
include ../Makefile
