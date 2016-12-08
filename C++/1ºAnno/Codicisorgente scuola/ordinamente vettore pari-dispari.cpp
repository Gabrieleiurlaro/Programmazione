#include <iostream>
#include <math.h>
#define n 10
#define m 100
using namespace std;
int i,j;
int V[n];
int V1[n];
int main()
{
srand((unsigned) time(NULL));

while(i<n)
{
 V[i]=rand() % m +1;
 printf("%d ",V[i]);
 i++;  
} 
printf("\n");
i=0;
while(i<n)
{
  if(V[i]%2==0)
  {V1[j]=V[i];
   j++;}
  i++;  
}
i=0;
while(i<n)
{
  if(V[i]%2==0)
  {}
  else
  {V1[j]=V[i];
   j++;}
   i++;
}
i=0;
while(i<n)
{
  printf("%d ",V1[i]);
  i++;
}
}