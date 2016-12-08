/*ordinamento di un vettore tramite l'ordinamento a selezione(selection sort)
 *usa le procedure
 */
#include <iostream>
#include <math.h>
#define n 50
#define M 100
using namespace std;
int vettore[n];
int i,j,t,mins;
void carica(int V[],int N){
for(i=0; i<N;i++) V[i]=rand()%M+1;return;}

void stampa(int V[],int N){
for(i=0;i<N;i++) printf("%d ",V[i]);return;}

void selection (int V[], int N) {
for(i=0; i<N-1; i++){
mins = i;for(j=i+1; j<N; j++)
if(V[j] < V[mins]) mins = j;
t=V[mins];V[mins]=V[i];V[i]=t;}return;}

int main() {
srand((unsigned)time(NULL));
carica(vettore,n);
stampa(vettore,n);
printf("\n\n");
selection(vettore,n);
printf("\n\n");
stampa(vettore,n);
}