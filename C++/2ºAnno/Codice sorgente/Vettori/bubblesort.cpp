/*ordinamento di un vettore tramite l'ordinamento a volle(bubblesort)
 *usa le procedure
 */
#include <iostream>
#include <math.h>
#define n 50
#define M 100
using namespace std;
int vettore[n];
int i,j,t;
void carica(int V[],int N){
for(i=0; i<N;i++) V[i]=rand()%M+1;return;}

void bubblesort(int V[],int N){
for(i=N-1;i>0;i--)for(j=0;j<i;j++)
if(V[j]>V[j+1])
// if(V[j]<V[j+1]) 
{t=V[j]; V[j]=V[j+1]; V[j+1]=t;}return;}

void stampa(int V[],int N){
for(i=0;i<N;i++) printf("%d ",V[i]);return;}
int main() {
srand((unsigned)time(NULL));
carica(vettore,n);
bubblesort(vettore,n);
stampa(vettore,n);
system("pause");
}
