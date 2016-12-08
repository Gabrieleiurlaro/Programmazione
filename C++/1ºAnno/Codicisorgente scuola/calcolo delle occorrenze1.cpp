#include <iostream>
#include <math.h>
using namespace std;
#define N 10
#define M 100
int V[N];
int I,T,K,S;

int main() 

{
srand((unsigned) time(NULL));
printf(" hai acquisito casualmente questi valori:");
while(I<N)
  {
  V[I]=rand() % M +1;
  printf(" %d ",V[I]);
  I++;
  }
printf("\n");
K=1;
while(K<=M)
  {
    T=0;
    I=0;
    while(I<N)
    {
      if(K==V[I])
          T++;
      I++;
    } 
    //if(T!=0)
    printf("il valore %d è stato trovato %d volte sul vettore\n" ,K,T);
    S=S+T;
    K++;
  }
  /*do
  {
    T=0;
    I=0;
    do
    {
      if(K==V[I])
          T++;
      I++;
    } while(I<N);
    //if(T!=0)
    printf("il valore %d è stato trovato %d volte sul vettore\n" ,K,T);
    S=S+T;
    K++;
  }while(K<=M);*/
  if(S==N)
  printf("Sei un genio, il numero delle occorrenze è uguale a %d", N);
  else
  printf("Rivedi il programma");
}