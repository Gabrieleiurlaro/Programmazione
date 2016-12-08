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
  if(i==0)
  V1[i]=V[i];
  j=i-1;
  while(j>=0)
   {
     if(V[i]==V1[j])
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
printf("dato questo vettore di %d elementi:\n",n);
while(i<n)
{
  printf("%d ",V[i]);
  i++;
}
i=0;
printf("\nil vettore a meno delle duplicazioni è:\n");
while(i<r)
{
  printf("%d ",V1[i]);
  i++;
}
}