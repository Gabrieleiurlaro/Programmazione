#include <iostream>
#include <math.h>
#define N 10
using namespace std;
int i,massimo,posmax,minimo,posmin;
int vettore[N];
int main()
{ 
while(i<N)
{
scanf("%d" ,&vettore[i]);
i++;
}
i=0;
while (i<N) 
{
   
   if (i==0) 
       {
           minimo=vettore[i];
           massimo=vettore[i];
           posmin=i+1;
           posmax=i+1;
       }
   if (vettore[i]>massimo) 
       {
           massimo=vettore[i];
           posmax=i+1;
       }
       else if(vettore[i]<minimo)
       {
         minimo=vettore[i];
         posmin=i+1;
       }
i++;
}
printf("\nIl minimo è %d, in posizione %d\nIl massimo è %d, in posizione %d\n(La prima posizione è 1)",minimo,posmin,massimo,posmax);
}