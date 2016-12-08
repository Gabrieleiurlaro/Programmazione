#include <iostream>
#include <math.h>
#define n 10
using namespace std;
int i,j,T;
int V[n];
int main() {
srand((unsigned)time(NULL));
while(i<n)
{
  V[i]=rand()%100+1;
  printf("%d ",V[i]);
  i++; 
}
printf("\n");
i=n-1;
while(i>=1)
{
  j=0;
  while(j<i)
  {
    if(V[j]>V[j+1])
 // if(V[j]>V[j+1])
    {
      T=V[j];
      V[j]=V[j+1];
      V[j+1]=T;
    }
    j++;
  }
  i--;
}
i=0;
while(i<n)
{
  printf("%d ",V[i]);
  i++;
}
}