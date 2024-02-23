# SHELL := bash for windows
CC = gcc
CFLAGS = -g

run: main
	./main.out

main: clean mylib.o main.o 
	$(CC) $(CFLAGS) mylib.o main.o -o main.out

mylib.o: mylib.c
	$(CC) $(CFLAGS) -c mylib.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o main.out