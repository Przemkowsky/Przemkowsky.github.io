#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
 float metry;
 float kilometry;
 float k=1000;
 
 cout<<"Podaj liczbe metrow:";
 cin>>metry; //wczytanie z klawiatury
 
 kilometry=metry/k;
 
 cout<<"Oto wynik przekszta³cenia:\n"<<metry<<" metrow to "<<kilometry<<"kilometrow.";
 cout<<endl;
 
 system("PAUSE");
 return EXIT_SUCCESS;
}
