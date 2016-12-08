#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
char stringa[150];
int vocali;

int a=0;
int e=0;
int i=0;
int o=0;
int u=0;

int main() {
scanf("%s",&stringa);
int I=0;

while (I<strlen(stringa)){
{
if (stringa[I]=='A' || stringa[I]=='a') 
a++;
if (stringa[I]=='E' || stringa[I]=='e') 
e++;
if (stringa[I]=='I' || stringa[I]=='i') 
i++;
if (stringa[I]=='O' || stringa[I]=='o') 
o++;
if (stringa[I]=='U' || stringa[I]=='u') 
u++;
I++;
}
printf("%d A\n",a);
printf("%d E\n",e);
printf("%d I\n",i);
printf("%d O\n",o);
printf("%d U\n",u);
return 0;
}