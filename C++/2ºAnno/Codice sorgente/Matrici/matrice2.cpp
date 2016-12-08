/*
 data la matrice N*M caricata con valori casuali con N,M>0:
*stampa la matrice;
*richiedi il valore controllato di una colonna e stampa la colonna;
*richiedi il balore controllato di una riga e stampa la riga;
*determina il minimo e il massimo su tutta la matrice;
*/
#include <iostream>
#include <math.h>
#define N 10
#define M 10
#define X 100
using namespace std;
int matrice[N][M];
int colonna,riga;
void carica (int m[][10], int r, int c){
    for (int i=0; i<r; i++) 
      for (int j=0; j<c; j++) 
         m[i][j]=rand()%X+1;
    return;
    }
    
void stampa (int m[][10], int r, int c){
  printf("\n\n");
      for(int i=0; i<r; i++) 
        {
         for(int j=0; j<c; j++) 
            printf("%3d ",m[i][j]);
      printf("\n");
         }
      return;
      }
void col(int m[][10],int r,int c){
    do{
    scanf("%d",&colonna);
    printf("%d colonna:\n",colonna);
    for(int i=0;i<c;i++)
       printf("%d \n",m[i][colonna]);}
    while(colonna>=0 && colonna<M);
  return;
  }
int main() {
srand((unsigned)time(NULL));
carica(matrice,N,M);
stampa(matrice,N,M);
printf("\n\n");
col(matrice,N,M);
}