main: main.o unindent.o
	g++ -o main main.o unindent.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

unindent.o: unindent.cpp funcs.h
	g++ -c unindent.cpp

clean:
	rm -f main.o unindent.o

	