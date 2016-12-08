#include <iostream>
#include <math.h>
using namespace std;

int v[11]={8,11,13,5,99,2,88,45,10,24,51};
int v1[11];
int mediano;


void stampa(int V[],int n){
  for(int i=0; i<n; i++)
    printf("%d ",V[i]);
  return;
  }
  
void ricercamediano(int n1, int n2, int n3){
  if(n1<n2 && n2<n3 || n3<n2 && n2<n1)
   mediano=n2;
  else if(n2<n1 && n1<n3 || n3<n1 && n1<n2 )
   mediano=n1;
 
  else if( n1<n3 && n3<n2 || n2<n3 && n3<n1)
   mediano=n3;
  return;
  }
  
void carica(){
  int j=0;
  for(int i=0;i<11;i++){
    if(v[i]<mediano)
      {
        v1[j]=v[i];
        j++;
      }
    }
  v1[j]=mediano;
  j++;
  for(int i=0;i<11;i++){
    if(v[i]>mediano)
      {
        v1[j]=v[i];
        j++;
      }
    }
  return;
  }
  
int main() {
  stampa(v,11);
  ricercamediano(v[0],v[(11-1)/2],v[11-1]);
  printf("\n");
  printf("mediano:%d",mediano);
  printf("\n");
  carica();
  stampa(v1,11);
}