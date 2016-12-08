#include <iostream>
#include <math.h>

#define n 30
#define x 100

using namespace std;
 struct nodo {
   int info;
   int nxt;
 };

 int s,e,p;

 nodo lista[n];

 void crea(nodo L[],int V, int C){
   L[C].info = V;
   L[C].nxt = 0;
   return;
 }

 void coda(nodo L[]){
   L[e].nxt=p;
   e=p;
   return;
 }

 void lettura(nodo L[],int K){
   while(K!=0){
     printf("%d ",L[K].info);
     K=L[K].nxt;
   }
   return;
 }
 
 void elimina(nodo L[], int *S, int k){
    for (;L[*S].info==k; *S=L[*S].nxt);
    for(int i=*S;L[i].info!=e;i=L[i].nxt) {
		if(L[L[i].nxt].info == k)
		 L[i].nxt=L[L[i].nxt].nxt;
		}
    return;
 }
 
 
 int main(){
    for(int i=0;i<n;i++){
	  p++;
      crea(lista,p,p);
      if(s==0)
        s=e=p;
      else
        coda(lista);
    }
    lettura(lista,s);
    elimina(lista,&s,1);
    lettura(lista,s);
    return 0;
 }
