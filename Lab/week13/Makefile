# SHELL := bash for windows
CXX = g++
CXXFLAGS = -g 
# -g is complie and debug in souce code level
run: main 
	./main.out

main: clean Shelf.o Book.o main.o  
	$(CXX) $(CXXFLAGS) Shelf.o Book.o main.o -o main.out

Shelf.o: Shelf.cc
	$(CXX) $(CXXFLAGS) -c Shelf.cc

Book.o: Book.cc
	$(CXX) $(CXXFLAGS) -c Book.cc

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c main.cc

clean:
	rm -f *.o main.out