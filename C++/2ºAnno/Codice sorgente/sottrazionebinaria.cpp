#include <iostream>
#include <math.h>
using namespace std;
int n1;
int n2;
int N1[32];
int N2[32];
int D[32];
  
 void binarizza (int a, int b[]){
   for (int i=31; a!=0; i--){
     b[i]=a%2;
     a=a/2;
     }
   return;
   }
   
   
 void stampa (int a[]){
   int i;
   for (i=0; a[i]==0; i++);
   if (i>=32) printf("0");
   for (i; i<32; i++)
     printf ("%d",a[i]);
     printf("\n\n");
    return;
   }
  
  void riporto (int a[], int c){
    if (a[c-1]>0) a[c-1]--;
    else {
      riporto (a, c-1);
      a[c-1]--;
      }
    a[c]=a[c]+2;
    return;
    }
  
  void differenza (int a1[], int a2[], int d[]){
    for (int i=31; i>=0; i--){
      if (a1[i]>=a2[i]) d[i]=a1[i]-a2[i];
      else {
             riporto (a1, i);
             d[i]=a1[i]-a2[i];
        }
      }
    return;
    }
   
   
   
    int main() {
     scanf("%d",&n1);
     scanf("%d",&n2);
     binarizza(n1, N1);
     binarizza(n2, N2);
     stampa (N1);
     stampa (N2);
     differenza (N1, N2, D);
     stampa (D);
     return 0;
}