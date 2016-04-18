#in terminal, type "make" to compile, then type "./LinkedListTest" to run

#variables
FLAGS = -g -std=c++11 -Wall

LinkedListTest: main.o
		g++ $(FLAGS) main.o -o LinkedListTest

main.o: main.cpp LinkedList.h LinkedList.hpp Node.h Node.hpp
		g++ $(FLAGS) -c main.cpp

clean:
		rm *.o LinkedListTest
