#include <iostream>
#include <math.h>

#define n 30
#define x 100

using namespace std;
 struct nodo {
   int info;
   int nxt;
 };

 int s,e,p;    //variabili d'ambiente per la prima lista
 int sp,ep,pp; //variabili d'ambiente per la lista pari
 int sd,ed,pd; //variabili d'ambiente per la lista dispari

 nodo lista [n],lp[n],ld[n];

 int i,k;

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

 void dispari(int informazione){
   pd++;
   ld[pd].info = informazione;
   ld[pd].nxt = 0;
   if(sd==0)
     sd=ed=pd;
   else if(ld[pd].info < ld[sd].info){
     ld[pd].nxt = sd;
     sd = pd;}
   else if(ld[pd].info > ld[ed].info){
     ld[ed].nxt=pd;
     ed=pd;}
   else{
     int k=sd;
     int j=ld[k].nxt;
     int t = 0; //indice se il nodo  stato caricato
     while(j!=0 && t==0) {
       if(ld[pd].info>=ld[k].info && ld[pd].info<=ld[j].info){
         ld[pd].nxt=ld[k].nxt;
         ld[k].nxt=pd;
         t=1;
       }
       k=j;
       j=ld[j].nxt;
     }
   }
   return;
 }

 void pari(int informazione){
   pp++;
   lp[pp].info = informazione;
   lp[pp].nxt = 0;
   if(sp==0)
     sp=ep=pp;
   else if(lp[pp].info < lp[sp].info){
     lp[pp].nxt = sp;
     sp = pp;}
   else if(lp[pp].info > lp[ep].info){
     lp[ep].nxt=pp;
     ep=pp;}
   else{
     int k=sp;
     int j=lp[k].nxt;
     int t = 0; //indice se il nodo  stato caricato
     while(j!=0 && t==0) {
       if(lp[pp].info>=lp[k].info && lp[pp].info<=lp[j].info){
         lp[pp].nxt=lp[k].nxt;
         lp[k].nxt=pp;
         t=1;
       }
       k=j;
       j=lp[j].nxt;
     }
   }
   return;
 }

int main(){
    srand((unsigned)time(NULL));
    s=sp=sd=e=ed=ep=p=pd=pp=0;
    for(i=0;i<n;i++){
        p++;
        crea(lista,rand()%x+1,p);
        if(s==0)
            s=e=p;
        else
            coda(lista);
        }
    printf("lista originale\n");
    lettura(lista,s);

    for(int K=s; K!=0;K=lista[K].nxt){
        if(lista[K].info%2==0)
            pari(lista[K].info);
        else
            dispari(lista[K].info);
    }

    printf("\nlista ordinata sui pari\n");
    lettura(lp,sp);
    printf("\nlista ordinata sui dispari\n");
    lettura(ld,sd);
}
