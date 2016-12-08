#include <iostream>
#include <math.h>
using namespace std;
int riporto[16];
int risultato[16];
int V1[16];
int V2[16];
int N2,N1;
void inizio(int v[],int n){
  for(int i=0;i<n;i++)
    v[i]=0;
  return;}

void bin(int v[],int n,int num){
  for(int i=n-1; i>=0 && num>0;i--)
    {if(num%2==1)
      v[i]=1;
      
      num=floor(num/2);
    }
    return;
   }
   void stampa(int v[],int n){
     for(int i=0;i<n;i++)
     printf("%d",v[i]);
     return;}
int main() {
  scanf("%d",&N1);
  scanf("%d",&N2);
printf("start\n");
inizio(V1,16);
inizio(V2,16);
bin(V2,16,N2);
bin(V1,16,N1);
stampa(V2,16);
printf("\n");
stampa(V1,16);
printf("\n");
for (int i=16-1; i>=1; i--)
{
if (V1[i]+V2[i]+riporto[i]>2)
{
risultato[i]=1;
riporto[i-1]=1;
}
else 
if (V1[i]+V2[i]+riporto[i]>1&&V1[i]+V2[i]+riporto[i]<3)
{
risultato[i]=0;
riporto[i-1]=1;
}
else 
if (V1[i]+V2[i]+riporto[i]==1)
{
risultato[i]=1;
riporto[i-1]=0;
}
else 
if (V1[i]+V2[i]+riporto[i]<1)
{
risultato[i]=0;
riporto[i]=0;
}
}


int decimale=0;
int r=1;
for (int i=16-1; i>0; i--)
{
if (risultato[i]!=0)
{
decimale=decimale+r;
}
r=r*2;
}


printf("%d",decimale);
//verificafinale
int somma=N1+N2;
printf("\n");
stampa(risultato,16);
printf("\n");
if (somma==decimale)
printf ("corretto");
else printf ("capre");
}