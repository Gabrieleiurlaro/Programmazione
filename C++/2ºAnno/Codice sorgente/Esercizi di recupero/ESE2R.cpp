//04 marzo 2016
//esercizio recupero 2
//operazioni di stampa su vettore con valori casuali
//somma e media di elementi su vettore
#include <iostream>
#include <math.h>
#define x 100
#define n 10
using namespace std;
int v[n],v1[n];
int somma;
float media;
int main() {
  srand((unsigned)time(NULL));
  for(int i=0;i<n;i++){
   v[i]=rand()%x+1;
   printf("%2d ",v[i]);}
   printf("\n");
  for(int i=n-1;i>=0;i--)
    printf("%2d ",v[i]);
  printf("\n");
  for(int i=0;i<n;i++){
  v1[i]=v[i];
  somma=somma+v1[i];
  printf("%2d ",v1[i]);}
  media=float(somma)/n;
  printf("\n\nsomma:%d\nmedia:%.2f",somma,media);
}