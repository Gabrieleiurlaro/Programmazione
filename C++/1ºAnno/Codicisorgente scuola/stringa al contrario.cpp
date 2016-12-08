#include <iostream>
#include <math.h>
#include <string.h>
int I;
char parola[20];

using namespace std;
int main() {

scanf("%s",&parola);
//gets(parola);
printf("hai digitato %s\n",parola);
I=strlen(parola)-1;
while (I>=0)
{
    printf("%c alla posizione %d\n", parola[I],I);
     I--;
}
return 0;
}