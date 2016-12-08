#include <iostream>
#include <math.h>
#define n 100
#define M 15
using namespace std;
int vettore[n];
int i,j,t,mins,conta;
void carica(int V[],int N){
for(i=0; i<N;i++) V[i]=rand()%M+1;return;}

void stampa(int V[],int N){
for(i=0;i<N;i++) printf("%d ",V[i]);return;}

void selection (int V[], int N) {
for(i=0; i<N-1; i++){
mins = i;for(j=i+1; j<N; j++)
if(V[j] < V[mins]) mins = j;
t=V[mins];V[mins]=V[i];V[i]=t;}return;}

int f,c,K;
void ricerca(int V[],int N){
t=0;i=0;f=N-1;
scanf("%d",&K);
do {
c=(i+f)/2; if(K>V[c]) i=c+1;
else if(K<V[c]) f=c-1;
else t=1;}while(i<=f && t==0);
if (t) {}
else printf ("%d non trovato",K);
return;}
   
   
int main() {
srand((unsigned)time(NULL));
carica(vettore,n);
stampa(vettore,n);
printf("\n\n");
selection(vettore,n);
stampa(vettore,n);
printf("\n\n");
ricerca(vettore,n);
for(i=c; K==vettore[i];i++)conta++;
for(i=c; K==vettore[i];i--)conta++;
if (conta>=1)
printf("%d trovato %d volte",K,conta-1);
}