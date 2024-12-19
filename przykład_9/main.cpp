#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[])
{
system("chcp 1250");
system("cls");
char imie[64];
int wiek;
printf("Jak masz na imiê?: ");
scanf("%64s", imie);
printf("Ile masz lat?: ");
scanf("%i", &wiek);
printf("\nWitaj %s! Ja mam %i lat!\n",imie,wiek+1);
system("PAUSE");
return EXIT_SUCCESS;
}
