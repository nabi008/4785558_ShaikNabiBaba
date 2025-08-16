object.o: sum.c main.c unity.c
	gcc sum.c main.c unity.c -c

all: sum.o main.o unity.o
	gcc sum.o main.o unity.o -o all.out

run: all
	./all.out
	
clean:
 	rm -rf *.o all.out