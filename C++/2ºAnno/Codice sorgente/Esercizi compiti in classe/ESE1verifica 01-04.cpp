#include <iostream>
#include <math.h>
#define n 32
using namespace std;
int vettore[n];
int N,i;
void inizializza(int v[], int l){
 for( i=0; i<l;i++)
  v[i]=0;
 return;
}

void binarizza(int v[],int l,int num){
for( i=l-1; i>=0 && num>=0;i--)
{if(num%2==1)
v[i]=1;
num=floor(num/2);
}
return;
}
void stampa(int v[], int l){
  int start=0;
  qint t=0;
  for(i=0; i<l && t==0;i++)
   if(v[i]==1)
    t=1;
  start=i-1;
 for( i=start; i<l; i++)
  printf("%d",v[i]);
  return;
}
int main() {
scanf("%d",&N);
printf("%d\n",N);
inizializza(vettore, n);
binarizza(vettore, n, N);
stampa(vettore, n);
}