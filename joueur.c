#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int score;
	char name[100];
}joueur;

void writeFile( joueur tab[], int size){
	FILE* file = NULL;
	file = fopen("nom.txt", "w+");
	for (int i = 0; i < size; i++){
		fprintf(file, "%s", tab[i].name);
	}
	for (int j=0; j < size; j++){
		fprintf(file, "%d", tab[j].score);
	}
	fprintf(file, "\n");
}