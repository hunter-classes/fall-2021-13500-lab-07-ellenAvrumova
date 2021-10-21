# Author: Ellen Avrumova
# Course: CSCI-135
# Instructor: Tong Yi & Mike Zamansky
# Assignment: Lab 7
# This is the Makefile for Lab7.

main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

unindent.o: unindent.cpp funcs.h
	g++ -c unindent.cpp

indent.o: indent.cpp funcs.h
	g++ -c indent.cpp

clean:
	rm -f main.o unindent.o indent.o fixedCode.cpp indentedFixedCode.cpp

	