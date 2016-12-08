#include <iostream>
#include <math.h>
#define N 10
#define M 10
using namespace std;
int i,j,k,t,mins,l;
int V[N*M];
int mat[N][M];
void carica(int r,int c){
for(i=0;i<c;i++)
 for(j=0;j<r;j++)
   mat[i][j]=rand()%100+1;
return;
}

void stampa(int r,int c){
i=0;while (i<c){j=0;  
while (j<r)
{printf("%3d ", mat[i][j]);
j++;
}
printf("\n");
i++;      
}
printf("\n");
return;}

void copia(int A[]){
  for(i=0;i<N;i++)
  for(j=0;j<M;j++)
  {A[t]=mat[i][j];
  t++;}
return;}

void selection (int v[], int L) {
for(i=0; i<L-1; i++){
mins = i;for(j=i+1; j<L; j++)
if(v[j] < v[mins]) mins = j;
t=v[mins];v[mins]=v[i];v[i]=t;}return;}

void caricacontrario(){
  t=0;
 for(i=0;i<N;i++)
  for(j=0;j<M;j++)
  {mat[i][j]=V[t];
  t++;}
  return;}
int main() {
srand((unsigned)time(NULL));
carica(N,M);
stampa(N,M);
copia(V);
l=N*M;
for(i=0;i<N*M;i++)printf("%d ",V[i]);
printf("\n\n");

selection(V,l);

for(i=0;i<N*M;i++)printf("%d ",V[i]);
printf("\n\n");
caricacontrario();
stampa(N,M);
}