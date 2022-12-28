CC = gcc
FLAGS = -Wall -g

make all: isort txtfind

isort: isort.o
	$(CC) $(FLAGS) -o isort isort.o

isort.o: isort.c
	$(CC) $(FLAGS) -c isort.c

txtfind: txtfind.o 
	$(CC) $(FLAGS) -o txtfind txtfind.o

txtfind.o: txtfind.c Func.c Func.h
	$(CC) $(FLAGS) -c txtfind.c 
	
clean:
	rm -f *.o *.a *.so isort txtfind
	



