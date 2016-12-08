//04 marzo 2016
//esercizio recupero 1
//operazioni di stampa su vettore
#include <iostream>
#include <math.h>
#define n 10
using namespace std;
int v[n],v1[n];
int main() {
  for(int i=0;i<n;i++){
   v[i]=i;
   printf("%d ",v[i]);}
   printf("\n");
  for(int i=n-1;i>=0;i--)
    printf("%d ",v[i]);
  printf("\n");
  for(int i=0;i<n;i++){
  v1[i]=v[i];
  printf("%d ",v1[i]);}
}