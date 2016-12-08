/*
*Una stazione meteo registra nell’arco di un minuto la temperatura di 100 sensori che può variare da -40 a             *40 Simulare l’acquisizione dei dati per 60 minuti , calcolarne la media per processo , determinare il       *picco più alto e il picco più basso nell’arco dell’ora 
*/
#include <iostream>
#include <math.h>
#define M 81
using namespace std;
float medie_temp[60];
int temp[100];
int i,pos,j,somma;
float massimo, minimo;

void misurazione(int V[],int I){
  somma=0;
for(I=0;I<100;I++) {
V[I]=rand()%M-40; //printf("%d ",V[I]);
somma=somma+V[I];
}return;}
void picchi(float V[],int I){
 if(I==0){massimo=V[I];minimo=V[I];}
 if(V[I]>massimo) massimo=V[I];
 else if(V[I]<minimo) minimo=V[I];
 return;}
int main() {
  srand((unsigned)time(NULL));
  printf("Nell'arco di quest'ora si sono verificate le seguenti temperature:\n");
  while(j<60){
  misurazione(temp,i);
  //printf("\n");
  medie_temp[j]=(float)somma/100;
  pos=j+1;
  printf("%dºminuto:%.2f gradi\n",pos,medie_temp[j]);
  picchi(medie_temp,j);
  j++;}
  printf("la temperatura più alta è %.2f e la più bassa è %.2f",massimo,minimo);
  system("pause");
} 
