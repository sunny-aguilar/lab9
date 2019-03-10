# File: 	makefile
# Author: 	Sandro Aguilar
# Date: 	March 4, 2019
# Description:	Makefile for Lab 9

# Variables to control Makefile operation

CXX = g++

CXXFLAGS = -Wall
CXXFLAGS += -g
CXXFLAGS += -std=c++0x

OBJECTS = main.o
OBJECTS += menu.o
OBJECTS += stackQueue.o

HPPs = menu.hpp
HPPs += stackQueue.hpp

CPPs = main.cpp
CPPs += menu.cpp
CPPs += stackQueue.cpp


# Targets needed to bring the executable up to date
STL: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o STL $(OBJECTS)

main.o: main.cpp $(HPPs)
	$(CXX) $(CXXFLAGS) -c main.cpp

menu.o: menu.hpp

stackQueue.o: stackQueue.hpp


# Clean-up operations
clean:
	rm STL *.o

debug:
	valgrind -v --leak-check=full --show-leak-kinds=all --track-origins=yes ./STL

zip:
	zip -D Lab9_Aguilar_Sandro.zip $(CPPs) $(HPPs) $(TXTS) makefile *.txt *.pdf
