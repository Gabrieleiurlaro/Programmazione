#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
int I;
char stringa[50];

using namespace std;
int main()
{
scanf("%s" ,&stringa);


printf(" hai digitato %s\n" ,stringa);
while(I<=strlen(stringa))
{
printf ("prima la frase era %c\n", stringa[I]);
if (65<=stringa[I]&& 90>=stringa[I])
    stringa[I]=stringa[I]+32;
else
{
    if(97<=stringa[I]&& 122>=stringa[I])
    stringa[I]=stringa[I]-32;    
}
printf("ora la frase è %c\n", stringa[I]);
//printf("%c\n",stringa[I]);
I++;
}
}