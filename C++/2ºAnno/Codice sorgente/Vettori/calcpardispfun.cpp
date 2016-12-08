/*calcolo dei numeri pari e dispari
 *tramite una procedura caricare i due vettori 
 *in modo parametrico e calcolare pari e dispari
 *tramite una funzione
 */
#include <iostream>
#include <math.h>
#define M 100
#define N 200
using namespace std;
int A[M];
int i=0;
int B[N];
int p,d;
void caricamento(int V[],int n)
{
  i=0;
  while(i<n)
  {
    V[i]=rand()% 100+1;
    i++;
  }
  return;
}
void stampa(int V[],int n)
{
  i=0;
  while(i<n)
  {
    printf("%d ",V[i]);
    i++;
  }
  printf("\n\n");
  return;
}
bool pari(int n)
{
  if(n%2==0) return true;
  else return false;

}
int main ()
{ 
  srand((unsigned) time (NULL));
  caricamento (A, N);
  caricamento (B, M);
  stampa (A, N);
  stampa (B, M);
  while(i<N)
  {
    if(pari(A[i])) p++;
    else d++;
    i++;
  }
  i=0;
  printf("\nNel primo vettore ci sono %d numeri pari e %d numeri dispari",p,d);
  p=0;
  d=0;
  while(i<M)
  {
    if(pari(A[i])) p++;
    else d++;
    i++;
  }
  printf("\nNel secondo vettore ci sono %d numeri pari e %d numeri dispari",p,d);
  return 0;
 }