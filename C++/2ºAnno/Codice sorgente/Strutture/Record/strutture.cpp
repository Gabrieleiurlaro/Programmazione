#include <iostream>
#include <math.h>
#include <string.h> 
#define N 100
#define l 16
using namespace std;

struct mnc {
    char n[l];
    char c[l];
    };
   
void stampa (mnc v[], int n){
  for (int i=0; i<n; i++){ 
        printf ("%3d  ",i+1);
        printf ("%-16s ",v[i].c);
        printf ("%-16s\n",v[i].n);
        }
      }    
         
int alfa (mnc s1, mnc s2){
    int a=strcmp(s1.c, s2.c);
    if (a==0) return strcmp(s1.n, s2.n);
    else return a;
    }
       

  void selection (mnc V[], int n){
  int minore;
  mnc t;
  for (int i=0; i<n; i++){
    minore=i;
    for (int j=i+1; j<n; j++){
      if (alfa(V[minore], V[j])>0) minore=j;
      }
    if (minore!=i){
      t=V[i];
      V[i]=V[minore];
      V[minore]=t;
      }
    }
    
   return;
   }
   
int a[N];
void ricercasequenziale (char ce[], mnc v[], int qnt) {
  printf("\n----------\n");
  int q=0;
  int k=0;
  for (int i=0; i<qnt; i++){
    if (!strcmp(ce,v[i].c)){
      q++;
      a[k]=i+1;
      k++;
      }
    }
  printf("Il cognome %s è stato trovato %d volte\n", ce,q);
  for (int i=0; i<q; i++) printf("Posizione %d: %s %s\n", a[i], v[a[i]-1].n, v[a[i]-1].c);
  printf("\n----------\n\n");
  return;
  }
  
void dicotomica (char ce[], mnc v[], int qnt) {
  printf("\n----------\n");
  int inizio=0;
  int fine=qnt-1;
  int comp;
  int centro=fine/2;
  while (fine-inizio>1){
    comp=strcmp(ce, v[centro].c);
    if (comp>=0) inizio=centro;
    if (comp<=0) fine=centro;
    centro=(inizio+fine)/2;
    }
     comp=strcmp(ce, v[centro].c);
    if (comp>=0) inizio=centro;
    if (comp<=0) fine=centro;
    
  if (strcmp(ce,v[inizio].c)) printf ("Il cognome %s non è stato trovato", ce);
  else {
    for (;(!strcmp(ce, v[inizio-1].c)) && inizio>0; inizio--);
    for (;(!strcmp(ce, v[fine+1].c)) && fine<qnt-1; fine++);
    printf("Il cognome %s è stato trovato dalla posizione %d alla posizione %d\n", ce, inizio+1, fine+1);
    for (int i=inizio; i<=fine; i++) printf("Posizione %d: %s %s\n", i+1, v[i].n, v[i].c);
    }
  printf("\n----------\n\n");
  return;
  }

           
mnc cose[N];
int quanti=0;
char ricerca[l];
      
    int main() {
      scanf("%d", &quanti);
      
      for (int i=0; i<quanti; i++){
        scanf("%s",&cose[i].n);
        scanf("%s",&cose[i].c);
        }
        scanf ("%s", &ricerca);
      stampa (cose, quanti);
      ricercasequenziale (ricerca, cose, quanti);
      selection (cose, quanti);
      stampa (cose, quanti);
      dicotomica (ricerca, cose, quanti);
        return 0;
}