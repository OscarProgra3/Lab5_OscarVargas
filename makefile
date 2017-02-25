main:  main.o funcion.o
	g++ main.o funcion.o -o main

main.o: main.cpp funcion.h
	g++ -c main.cpp funcion.h

funcion.o: funcion.cpp funcion.h
	g++ -c funcion.cpp funcion.h

clean:
	rm -f *.o *.main
                                                                          
