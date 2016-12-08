/*
  Dato un vettore di N elementi caricato con valori da 1 a M<>0
  *Carica il vettore dando un limite alle celle con parametro Z con Z>=0<=N;
  *Stampi il vettore in maniera parametrizzata indicando le posizioni di due indici
   start,end che indica la stampa del vettore dalla posizione start alla posizione end;
  *Calcoli la somma con gli stessi parametri del punto 2;
  */
#include <iostream>
#include <math.h>
#define N 100
#define M 100
using namespace std;
int i,z,start,endd,somma;
int vettore[N];
void carica(int V[],int n){
for(i=0;i<z;i++) V[i]=rand()%M+1;return;}
void stampa(int V[],int n){
for(i=start;i<endd;i++){
printf("%d ",V[i]);somma=somma+V[i];}
printf("\nla somma dei valori è %d",somma);return;}
int main() {
srand((unsigned)time(NULL));
scanf("%d",&z);
carica(vettore,z);
scanf("%d",&start);
scanf("%d",&endd);
stampa(vettore,endd);
}