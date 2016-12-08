#include <iostream>
#include <string.h>
#include <math.h>
#define n 16
using namespace std;
char binario[n];
int pesi[n];
int decimale[n];
int t;
int numero;
void caricapesi(int v[], int l){
  v[l-1]=1;
  for(int i=l-2; i>=0; i--)
   v[i]=v[i+1]*2;
  return;
  }
void stampa(int v[], int l){
 for (int i=0; i<l; i++)
  printf("%d ",v[i]);
  return;}

int main() {
  scanf("%s",&binario);
caricapesi(pesi,n);
//decimale
int ultimo=strlen(binario)-1;
t=n-1;
for(int i=ultimo; i>=0; i--){
  if(binario[i]=='1')
  decimale[t]=pesi[t];
  t--;
}
for(int i=0; i<n; i++)
numero=numero+decimale[i];
printf("%s\n",binario);
printf("%d",numero);
}