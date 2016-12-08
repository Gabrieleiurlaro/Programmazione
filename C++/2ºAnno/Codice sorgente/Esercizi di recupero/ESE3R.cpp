//11 marzo 2016
//esercizio recupero 3
//operazioni di stampa su vettore con valori casuali
//somma e media di elementi su vettore
//ricerca sequenziale di un valore
//ordinamento: bubblesort e selectionsort
#include <iostream>
#include <math.h>
#define x 10
#define n 10
using namespace std;
int v[n],v1[n];
int somma,j;
float media;
int main() {
  srand((unsigned)time(NULL));
  for(int i=0;i<n;i++){
   v[i]=rand()%x+1;
   printf("%2d ",v[i]);}
   printf("\n");
  for(int i=n-1;i>=0;i--)
    printf("%2d ",v[i]);
  printf("\n");
  for(int i=0;i<n;i++){
  v1[i]=v[i];
  somma=somma+v1[i];
  printf("%2d ",v1[i]);}
  media=float(somma)/n;
  printf("\n\nsomma:%d\nmedia:%.2f\n",somma,media);
  int k;
  scanf("%d",&k);
  int t=0;
  for(int i=0;i<n;i++)
   if(v[i]==k){
    t=1;
    printf("%d trovato alla posizione %d\n",k,i);
    }
  if(t==0)
  printf("non trovato\n");
  //ordinamento bubblesort su v
  for(int i=n-1;i>0;i--)
   for(j=0;j<i;j++)
    if(v[j]>v[j+1])
//   if(v[j]<v[j+1]) 
      {
      t=v[j]; 
      v[j]=v[j+1]; 
      v[j+1]=t;
      }
   printf("---------\n");
   printf("effettuo ordinamento bubblesort su v\n");
   for(int i=0;i<n;i++)
    printf("%2d ",v[i]);
   //ordinamento selectionsort su v1(uguale a v)
   t=0;
   for(int i=0; i<n-1; i++){
    int mins = i;
     for(j=i+1; j<n; j++)
      if(v1[j] < v1[mins]) 
       mins = j;
       t=v1[mins];
       v1[mins]=v1[i];
       v1[i]=t;
       }
   printf("\n----------\n");
   printf("effettuo ordinamento selectionsort su v1(uguale a v)\n");
   for(int i=0;i<n;i++)
    printf("%2d ",v1[i]);
   
   
}