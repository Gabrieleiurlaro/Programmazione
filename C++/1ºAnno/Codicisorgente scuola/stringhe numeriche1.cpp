#include <iostream>
#include <math.h>
using namespace std;
#define N 10

int vettore[N];

int main() {
  srand((unsigned)time(NULL));
  
int i=0;
while (i<N) {
//scanf("%d",&vettore[i]);
vettore[i]=rand()%100 +1;
i++;
}
i=0;
while (i<N) {
printf("%d ",vettore[i]);
i++;
}
printf("\n");
i=N-1;
while (i>=0) {
printf("%d ",vettore[i]);
i--;
}

i=0;
int somma=0;

int minimo=0;
int posmin=0;
int massimo=0;
int posmax=0;

while (i<N) 
{
   somma=somma+vettore[i];
   if (i==0 || vettore[i]<minimo) 
       {
           minimo=vettore[i];
           posmin=i+1;
       }
   if (i==0 || vettore[i]>massimo) 
       {
           massimo=vettore[i];
           posmax=i+1;
       }
i++;
}
float media=(float)somma/N;
printf("\nLa somma e\' %d\nLa media e\' %.2f",somma,media);
printf("\nIl minimo è %d, in posizione %d\nIl massimo è %d, in posizione %d\n(La prima posizione è 1)",minimo,posmin,massimo,posmax);
return 0;
}