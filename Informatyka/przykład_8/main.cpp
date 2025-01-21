#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
 float const PI=3.14159;//definicja stalej
 float a,b,c;
 float pole,obwod,alfa_x,alfa_s;
 printf("Umiem obliczac pole oraz obwod trojkata\n");
 printf("po podaniu kata i przeciwprostokatnej\n");
 printf("podaj przeciwprostokatna\n");
 scanf("%f",&c);
 printf("podaj kat w stopniach\n");
 scanf("%f",&alfa_s);
 printf("wczytane dane");
 printf("\nc=%.2f",c);
// w linii wy¿ej definiowane s¹ dwa miejsca po przecinku
 printf(" cm");
 printf("\nalfa=%f %s\n",alfa_s,"st");
 alfa_x=alfa_s*PI/180;
 a=c*cos(alfa_x);
 b=c*sin(alfa_x);
pole=a*b/2;
 obwod=a+b+c;
 printf("wyniki");
 printf("\na=%f",a);
 printf(" cm");
 printf("\nb=%f",b);
 printf(" cm");
 printf("\npole=%f",pole);
 printf(" cm^2");
 printf("\nobwod=%f",obwod);
 printf(" cm");
 cout<<endl;
 
 system("PAUSE");
 return EXIT_SUCCESS;
}
