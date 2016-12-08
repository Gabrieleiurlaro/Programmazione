#include <iostream>
#include <math.h>
#define n 10
#define m 100
using namespace std;
int i,pos,j,massimo,pos2;
int V[n];
int V1[n];
int main() 
  {
  srand((unsigned)time(NULL));
  
  while(i<n)
  {
    V[i]=rand() % m +1;
    
    printf("%d ",V[i]);
    i++;
  }
  i=n-1;
  printf("\n");
  while(i>=0)
  {
    V1[j]=V[i];
    j++;
    i--;
  }
  i=0;
  
  while(i<n)
  {
    printf("%d ",V1[i]);
    i++;
  }
  i=0;
  printf("\n");
  while(i<n)
  {
    if(i==0)
    { massimo=V1[i];
      pos=i+1;
    }
    if(V1[i]>massimo)
    {
      massimo=V1[i];
      pos=i+1;
    }
    i++;
  }
  printf("%d(la prima posizione è 1)",pos);
  i=0;
  while(i<n)
  {
    if(V[i]==massimo)
      {pos2=i+1;
       i=n;}
    i++;
  }
  printf("\n %d",pos2);
  }
 