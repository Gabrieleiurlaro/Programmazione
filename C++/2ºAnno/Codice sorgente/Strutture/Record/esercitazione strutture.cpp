#include <iostream>
#include <math.h>
#define n 10
#define x 1000
using namespace std;
struct rec{
  int a;
  int b;
  };
rec v[n],c[n],d[n];
rec t;
int i,j;

void carica(rec V[], int N ){
  for(int i=0;i<N;i++){
  V[i].a=rand()%x+1;
  V[i].b=rand()%x+1;}
  return;}

 void stampa( rec V[], int N ){
   for(int i=0;i<N;i++){
     printf("%3d-",V[i].a);
     printf("%3d\n",V[i].b);
     }
     return;
   }
void ordinamento(rec V[], rec V1[],int N, char quale){
  if(quale=='a'){
     for(i=N-1;i>0;i--)
        for(j=0;j<i;j++)
           if(V[j].a>V[j+1].a)
           //if(V[j].a<V[j+1].a) 
           {
           t=V[j]; 
           V[j]=V[j+1]; 
           V[j+1]=t;
           }
    for(int i=0;i<N;i++)
     c[i]=v[i];}
  if(quale=='b'){
    for(i=N-1;i>0;i--)
        for(j=0;j<i;j++)
         if(V[j].b>V[j+1].b)
         //if(V[j].b<V[j+1].b) 
           {
           t=V[j]; 
           V[j]=V[j+1]; 
           V[j+1]=t;
           }
    for(int i=0;i<N;i++)
     d[i]=v[i];}
  return;}
int main() {
   srand((unsigned)time(NULL));
   carica(v,n);
   printf(" a   b \n");
   stampa(v,n);
   printf("\n----------\nordinamento sulla colonna:a\n\n a   b \n");
   ordinamento(v,c,n,'a');
   ordinamento(v,d,n,'b');
   stampa(c,n);
   printf("\n----------\nordinamento sulla colonna:b\n\n a   b \n");
   stampa(d,n);

}