#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define SIZE 10


typedef struct{
	char shape[4][4];
	char shape2[4][4];
	char shape3[4][4];
	char shape4[4][4];
	int angle;
}piece;

void carre(piece* p){ // @@
					            // @@
	memset(p->shape,' ',16);
  p->angle = 0;
	p->shape[1][1]='@';
	p->shape[1][2]='@';
	p->shape[2][1]='@';
	p->shape[2][2]='@';
}

void barre(piece* p){

	memset(p->shape,' ',16);
  //@@@@
	p->angle = 0;
	p->shape[1][0]='@';
	p->shape[1][1]='@';
	p->shape[1][2]='@';
	p->shape[1][3]='@';

  //@
  //@
  //@
  //@
  memset(p->shape2,' ',16);
  p->angle = 1;
	p->shape2[0][0]='@';
	p->shape2[1][0]='@';
	p->shape2[2][0]='@';
	p->shape2[3][0]='@';
	
}

void te(piece* p){ 
	memset(p->shape,' ',16);
   //@
  //@@@
  p->angle = 0;
	p->shape[0][1]='@';
	p->shape[1][0]='@';
	p->shape[1][1]='@';
	p->shape[1][2]='@';

  //@
  //@@
  //@
  memset(p->shape2,' ',16);
  p->angle = 1;
  p->shape2[0][1]='@';
  p->shape2[1][1]='@';
  p->shape2[1][2]='@';
  p->shape2[2][1]='@';

  //@@@
  // @
  memset(p->shape3,' ',16);
  p->angle = 2;
  p->shape3[1][0]='@';
  p->shape3[1][1]='@';
  p->shape3[1][2]='@';
  p->shape3[2][1]='@';

  // @
  //@@
  // @
  memset(p->shape4,' ',16);
  p->angle = 3;
  p->shape4[0][1]='@';
  p->shape4[1][0]='@';
  p->shape4[1][1]='@';
  p->shape4[2][1]='@';
}

void lambda (piece* p){
	memset(p->shape,' ',16);
  //@
  //@
  //@@
  p->angle = 0;
	p->shape[0][0]='@';
	p->shape[1][0]='@';
	p->shape[2][0]='@';
	p->shape[2][1]='@';

  //@@@
  //@
  memset(p->shape2,' ',16);
  p->angle = 1;
  p->shape2[1][0]='@';
  p->shape2[1][1]='@';
  p->shape2[1][2]='@';
  p->shape2[2][0]='@';
  
  //@@
  // @
  // @
  memset(p->shape3,' ',16);
  p->angle = 2;
  p->shape3[0][0]='@';
  p->shape3[0][1]='@';
  p->shape3[1][1]='@';
  p->shape3[2][1]='@';

  //  @
  //@@@
  memset(p->shape4,' ',16);
  p->angle = 3;
  p->shape4[0][2]='@';
  p->shape4[1][0]='@';
  p->shape4[1][1]='@';
  p->shape4[1][2]='@';
}

void j (piece* p){
	memset(p->shape,' ',16);
  // @
  // @
  //@@

  p->angle = 0;
	p->shape[0][1]='@';
	p->shape[1][1]='@';
	p->shape[2][1]='@';
	p->shape[2][0]='@';

  //@
  //@@@
  memset(p->shape2,' ',16);
  p->angle = 1;
  p->shape2[0][0]='@';
	p->shape2[1][0]='@';
	p->shape2[1][1]='@';
	p->shape2[1][2]='@';

  //@@
  //@
  //@
  memset(p->shape3,' ',16);
  p->angle = 2;
  p->shape3[0][1]='@';
  p->shape3[0][2]='@';
  p->shape3[1][1]='@';
  p->shape3[2][1]='@';

  //@@@
  //  @
  memset(p->shape4,' ',16);
  p->angle = 3;
  p->shape4[1][0]='@';
  p->shape4[1][1]='@';
  p->shape4[1][2]='@';
  p->shape4[2][2]='@';
}

void z (piece* p){
	memset(p->shape,' ',16);
  //@@
  // @@
  p->angle = 0;
	p->shape[0][0]='@';
	p->shape[0][1]='@';
	p->shape[1][1]='@';
	p->shape[1][2]='@';

  // @
  //@@
  //@
  memset(p->shape2,' ',16);
  p->angle = 1;
  p->shape2[0][1]='@';
	p->shape2[1][1]='@';
	p->shape2[1][2]='@';
	p->shape2[2][2]='@';
}

void s (piece* p){
	memset(p->shape,' ',16);
  // @@
  //@@
  p->angle = 0;
	p->shape[0][1]='@';
	p->shape[0][2]='@';
	p->shape[1][0]='@';
	p->shape[1][1]='@';

  //@
  //@@
  // @
  memset(p->shape2,' ',16);
  p->angle = 1;
  p->shape2[0][1]='@';
	p->shape2[1][0]='@';
	p->shape2[1][1]='@';
	p->shape2[2][0]='@';
}

void affichePiece(piece* p){
  int i,j ;
	if (p->angle == 0){
		for(i=0 ;i<4 ;i++){
      printf("\n");
			for(j=0 ;j<4 ;j++){
				printf("%c",p->shape[i][j]);
			  printf(" ");
        }
      }
	}
	else if (p->angle == 1){
		for(i=0 ;i<4 ;i++){
      printf("\n");
			for(j=0 ;j<4 ;j++){
				printf("%c",p->shape2[i][j]);
			printf(" ");
        }
      }
	}
	else if (p->angle == 2){
		for(i=0 ;i<4 ;i++){
			for(j=0 ;j<4 ;j++){
				printf("%c",p->shape3[i][j]);
			//printf("\n");
        }
      }
	}
	else if (p->angle == 3){
		for(i=0 ;i<4 ;i++){
			for(j=0 ;j<4 ;j++){
				printf("%c",p->shape4[i][j]);
			//printf(" ");
        }
      }
	}
}


void display(char board[][SIZE]){ //display of the table
	int i;
	int j;
	char c;
	
	printf(" ");
	for (c = 'A'; c < 'A' + SIZE; c++){ //display column number
		putchar(c);
		putchar(' ');
	}
	for (i= 0; i < SIZE; i++){ //creation of rows and columns
		puts("");
		printf("|");
		for (j= 0; j < SIZE; j++){
			printf(" |");
		}
	}
}

int linefull(int y, char board[][10]){
	int a=0;
	for (int i=0;i>9;i++){
		if (strcmp(&board[i][y],"@")==0){
			a+=1;
		}
	}
	return a;
}

int rewardpoints(int lines,int points){    //rewardpoint to a player compared to the destroyed line
	switch (lines){
		case 1:
			points+=40;
			break;
		case 2:
			points+=100;
			break;
		case 3:
			points+=300;
			break;
		case 4:
			points+=1200;
			break;
		default:
			printf("error");
		}
	return points;
}

int lineclear(int x,char board[][10],int points){    //clear line
	for (int i=9;i>=0;i--){
		if (linefull(i,board)==10){
			for (int j=0;j>9;i++){
				board[i][j]=" ";
			x+=1;
			return 0;
			}
		}
	rewardpoints(x,points);
	}
	return 0;
}


/*void angleChoice(piece *p){
  int choice;
  
  printf("Quelle orientation voulez vous utilisez?\n1.  \n2.  \n3.  \n4.  \n ");
  scanf("%d",&choice);
  switch (choice){
  case 1 :  affichePiece(p);
            break;
  case 2 :  affichePiece(p);
            break;
  case 3 :  affichePiece(p);
            break;
  case 4:   affichePiece(p);
            break;
  default : printf("Mauvais choix  ! \n ");
            break; 
    }
}
*/
/*void randomshape(piece *p){    // don't work
  piece pi;
  srand(time(NULL));
  int piecealeat=rand()%7+1;    //entre 1-7
  if (piecealeat==1){
    carre(&pi);
    }
  else if (piecealeat==2){
    barre(&pi);
  }
  else if (piecealeat==3){
    te(&pi);
  }
  else if (piecealeat==4){
    lambda(&pi);
  }
  else if (piecealeat==5){
    j(&pi);
  }
  else if(piecealeat==6){
    z(&pi);
  }
  else if(piecealeat==7){
    s(&pi);
  }
  
    //printf("%d\n",piecealeat);    
}
*/


/*void colision(){ 
  
}
*/

/*void end(char tab[SIZE][SIZE]){ function to end the game
  
}
*/



int main(){
  int points, i, j ;
  char board[SIZE][SIZE];
  char currentgame[SIZE][SIZE];
  for (i=0; i<10; i++){
    for (j=0; j<10; j++)
      currentgame[i][j]=' ';
    }
	display(board);
	puts("");
  points = 0;
	piece pi;
  carre(&pi);
	affichePiece(&pi);
	return 0;
}