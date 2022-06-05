Tetris : main.o joueur.o
	gcc -o Tetris main.o joueur.o

main.o : main.c
	gcc -o main.o -c main.c

joueur.o : joueur.c
	gcc -o joueur.o -c joueur.c