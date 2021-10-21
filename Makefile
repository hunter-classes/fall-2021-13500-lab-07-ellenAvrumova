main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

unindent.o: unindent.cpp funcs.h
	g++ -c unindent.cpp

indent.o: indent.cpp funcs.h
	g++ -c indent.cpp

clean:
	rm -f main.o unindent.o fixedCode.cpp

	