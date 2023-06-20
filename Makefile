all: main.o arvore.o
	gcc -g main.o arvore.o -o main
	rm *.o

arvores.o: arvore.c arvore.h
	gcc -c arvores.c arvores.h

main.o: main.c
	gcc -c main.c

run: 
	./main