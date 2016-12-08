#include <iostream>
#include <math.h>
using namespace std;
#define N 10000
#define M 1000

int V[N];
int C[M+1];
int I,K,S;

int main() 

{
srand((unsigned) time(NULL));
while(I<N)
  {
  V[I]=rand() % M + 1 ;
  I++;
  }
printf("\n");
I=0;
while(I<N)
{
  K=V[I];
  C[K]++;
  I++;
}
I=1;
while(I<=M)
{
  printf(" il valore %d è stato trovato %d volte\n",I,C[I]);
  I++;
}
}