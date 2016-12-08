#include <iostream>
#include <math.h>
#define X 100
#define N 10
#define M 10
using namespace std;
int matrice [N][M];
int A [5][M];
int B [5][M];
  
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
      
void creamatrice(int m[][10], int m2[][10], int R, int r, int c){
   int conta=0;
    for (int i=R; i<r; i=i+2){
      for (int j=0; j<c; j++) m2[conta][j]=m[i][j];
      conta++;
      }
    return;
  }
      
int main() {
srand ((unsigned) time (NULL));
carica (matrice, N, M);
creamat (matrice,A,0,N,M);
creamatrice (matrice, B,1,N,M);
stampa (matrice, N, M);
stampa (A,N/2,M);
stampa (B,N/2,M);
return 0;
}