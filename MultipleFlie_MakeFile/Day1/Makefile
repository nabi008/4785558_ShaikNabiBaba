# target name: dependencies
# This Makefile compiles a simple C program with multiple source files.
#<tab space> is used for indentation in Makefiles.

object.o: sum.c square.c multiply.c subtract.c divide.c
	gcc sum.c square.c multiply.c subtract.c divide.c -c

all: sum.o square.o multiply.o subtract.o divide.o
	gcc sum.o square.o multiply.o subtract.o divide.o -o all.out

run: all
	./all.out

clean:
 	rm -rf *.o all.out

