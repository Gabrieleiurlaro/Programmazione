#include <iostream>
#include <math.h>
#define n 12
#define M 10
using namespace std;
int V[n];
int V1[n];
int i,j,r,T;
int main() {
  srand((unsigned)time(NULL));
while(i<n)
{
  V[i]=rand() % M +1;
  i++;
}
i=0;
while(i<n)
{
  j=i-1;
  while(j>=0)
   {
     if(V[i]==V[j])
      T=1;
     j--;
   }
   if(T==0)
   {V1[r]=V[i];
    r++;}
   
 i++;  
 T=0;
}
i=0;
while(i<n)
{
  printf("%d ",V[i]);
  i++;
}
i=0;
printf("\n");
while(i<n)
{
  printf("%d ",V1[i]);
  i++;
}
}