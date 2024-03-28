SHELL := bash
C = g++
CFLAGS = -g
MAIN_NAME = main
run: main clean
	./$(MAIN_NAME).out
main: main.o
	$(C) $(CFLAGS) $(MAIN_NAME).o -o $(MAIN_NAME).out
main.o:
	$(C) $(CFLAGS) -c $(MAIN_NAME).cc -o $(MAIN_NAME).o
clean:
	rm -rf *.o