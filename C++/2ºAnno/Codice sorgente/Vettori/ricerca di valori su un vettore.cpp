#include <iostream>
#include <math.h>
#define n 100
#define m 200
using namespace std;
int V[n];
int posizione[n];
int i,j,k, p;
int main() 
{
 i=0;
srand((unsigned)time(NULL));
while(i<n)
{
  V[i]=rand()%m+1;
  printf("%d ",V[i]);
  i++;
}
printf("\n");

scanf("%d",&j);
while(j!=0)
{
  
  
  printf("quale numero devo cercare?\ncerco %d...\n",j);
  
  i=0;
  k=0;
  while(i<n)
  {
    
    if(j==V[i])
    {
    posizione[k]=i+1;
    k++;
    
    }
    i++;
  }
  if(j!=0)
  {
  if(k==0) printf("%d non è stato trovato\n",j);
  else
  {printf("%d è stato trovato %d volte,in posizione",j,k);
  i=0;
  while(i<k)
  {
    printf(" %d ",posizione[i]);
    i++;
  }
  printf("\n");}
  
  }
  scanf("%d",&j);
}
printf("(la prima posizione è 1)");
return 0;
}