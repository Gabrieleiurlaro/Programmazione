#include <iostream>
#include <math.h>
using namespace std;
#define N 10
#define x 100
int vettore[N];
int I;
int T,K;

int main() 

{
srand((unsigned) time(NULL));
printf(" hai acquisito casualmente questi valori:");
while(I<N)
  {
  vettore[I]=rand() % x +1;
  printf(" %d ",vettore[I]);
  I++;
  }
I=0; 
scanf("%d",&K);
while(I<N)
{
  if(K==vettore[I])
  {
    T=1;
    printf(" Hai trovato %d alla posizione %d\n",K,I);
  }
  I++;
}
printf("\n");
if(T==0)
printf("%d non è stato trovato",K);
}

  
  
  
  
 