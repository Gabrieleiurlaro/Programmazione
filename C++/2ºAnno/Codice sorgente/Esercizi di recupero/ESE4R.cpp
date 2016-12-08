//11 marzo 2016
//esercizio recupero 4
//esercitazione procedure carica, stampa e ordinamento
//funzione calcolo pari e dispari
//funzione di ricerca e posizione
#include <iostream>
#include <math.h>
#define n 10
#define m 10
using namespace std;
int v[n];
int pari,disp,t,pos,key,conta;
//procedura di carica
void carica(int V[], int N){
 for(int i=0; i<N; i++)
  V[i]=rand()%m+1;
 return;}
//procedura di stampa
void stampa(int V[], int N){
 for(int i=0; i<N; i++)
  printf("%2d ",V[i]);
 return;}
//procedura ordinamento
void selection (int V[], int N) {
 for(int i=0; i<N-1; i++){
  int mins = i; 
  for(int j=i+1; j<N; j++)
   if(V[j] < V[mins]) 
    mins = j;
   t=V[mins];
   V[mins]=V[i];
   V[i]=t;}
 return;}
//funzione pari-dispari
int pd(int x){
 return x%2;}
//conteggio pari-dispari
void conteggio(int V[], int N){
 for(int i=0; i<N; i++)
  if(pd(V[i])==1)
   disp++;
  else
   pari++;
 return;}
//funzione di ricerca
int cerca(int V[], int N, int k){
 for(int i=0; i<N; i++)
  if(k==V[i]){
   t=1;
   pos=i;}
 if(t==0) 
  return -1;
 else
  return pos;}
int f,c;
void dicotomica(int V[],int N,int K){
t=0;int i=0;f=N-1;
do{
 c=(i+f)/2; 
 if(K>V[c]) 
  i=c+1;
 else if(K<V[c]) 
  f=c-1;
 else 
  t=1;
}while(i<=f && t==0);
if (t) {}
else printf ("%d non trovato",K);
return;}
int main() {
srand((unsigned)time(NULL));
//carica
carica(v,n);
//stampa
stampa(v,n);
//ricerca
printf("\n------------------------\n");
printf("ricerca sequenziale");
scanf("%d",&key);
if(cerca(v,n,key)!=-1)
 printf("\n%d trovato alla posizione %d", key,cerca(v,n,key));
else
 printf("\nnon trovato");
//ordinamento
printf("\n------------------------\n");
printf("effettuo ordinamento\n");
selection(v,n);
//stampa ordinata
stampa(v,n);
printf("\n------------------------\n");
//conteggio pari e dispari
conteggio(v,n);
printf("i pari sono:%2d\ni dispari sono:%2d",pari,disp);
//ricerca dicotomica
if(cerca(v,n,key)!=-1){
printf("\n------------------------\n");
printf("ricerca dicotomica");
dicotomica(v,n,key);
for(int i=c; key==v[i];i++)conta++;
for(int i=c; key==v[i];i--)conta++;
if (conta>=1)
printf("\n%d trovato %d volte",key,conta-1);
}
}