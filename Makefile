lister: main.o print.o
	gcc -o lister main.o print.o

main.o: main.c
	gcc -c -o main.o main.c

print.o: print.c
	gcc -c -o print.o print.c
