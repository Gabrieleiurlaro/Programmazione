#include <iostream>
#include <math.h>

#define N 100
#define x 1000

using namespace std;
 struct nodo {
   int info;
   int flag_attivo;
   int nxt;
 };

 int s,e,p;
 int k;
 nodo L[N];

 int attivi,non_attivi;

  void crea(nodo lista[],int V,int C){
      lista[C].info=V;
      lista[C].flag_attivo=1;
      lista[C].nxt=0;
      return;
  }

  void testa(nodo lista[]){
      lista[p].nxt=s;
      s=p;
      return;
  }

  //Procedura 1 esercizio 1
  void carica(){
      for(int i=0;i<N;i++) {
            p++;
      crea(L,rand()%x+1,p);
      if(s==0)
        s=e=p;
      else
        testa(L);
      }
      return;
  }
  //procedura 2 esercizio 3-5
  void  stampa(nodo lista[]){
      k=s;
      attivi=0;
      non_attivi=0;
      while(k!=0){
        if(lista[k].flag_attivo==1){
            printf("%d ",lista[k].info);
            attivi++;
        }
        else
            non_attivi++;
        k=lista[k].nxt;
      }
      return;
  }

  //procedura 3 esercizio 4
  void cambioflag(nodo lista[]){
      k=s;
      while(k!=0){
        if(100<=lista[k].info && lista[k].info<=900)
            lista[k].flag_attivo=0;
        k=lista[k].nxt;
      }
      return;
  }

 int main(){
    srand((unsigned)time(NULL));
    carica();
    stampa(L);
    printf("\n\n");
    cambioflag(L);
    stampa(L);
    printf("\n\n");
    printf("I nodi attivi sono %d e i nodi non attivi sono %d",attivi,non_attivi);
 }
