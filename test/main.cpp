#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
using namespace std;
void changeColorToYellow() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
	                        FOREGROUND_RED | FOREGROUND_GREEN  | FOREGROUND_INTENSITY);
}
void changeColorToRed() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
	                        FOREGROUND_RED | FOREGROUND_INTENSITY);
}
void changeColorToBlack() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main() {
	system("chcp 850");

	int tab[14][26]= {
		{1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0},
		{1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,0,0,0,0,0,0,0,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,1,1},
		{1,1,0,0,0,0,0,0,0,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
		{1,1,0,0,0,0,0,0,0,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
		{1,1,0,0,0,0,0,0,0,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
		{1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0,1,1,1,1,1,1},
		{1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1},
		{1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1},
		{1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1},
		{1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1},
		{1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0},
	};

	int width=100;
	int height = width/2;
	int border=2;
	int wierszLiter=10;
	int kolumnaLiter=38;

	changeColorToRed();
	cout << "+----------------------------------------+\n\n";
	gotoxy(0,2);
	cout << "!";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
	                        FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "        Przemyslaw Galeziowski\n\n";
	changeColorToRed();
	gotoxy(41,2);
	cout << "!\n";
	cout << "+----------------------------------------+\n\n\n\n\n\n\n\n";

	int przesuniecie=1;
	for(int z=1; z<=height; z++) {
		for(int s=1; s<z; ++s) {
			cout << " ";
			przesuniecie++;
		}
		for(int i=przesuniecie; i<=przesuniecie+width-(z*2); i++) {
			if ( (z>=wierszLiter && z<wierszLiter+14) && (i>=kolumnaLiter && i<kolumnaLiter+26))  { //litery
				if (tab[z-wierszLiter][i-kolumnaLiter]==1) {
					changeColorToBlack();
					cout<<(char) 219;
					changeColorToYellow();
				} else {
					cout<<(char) 219;
				}
			} else if (z<=border/2) { // ramka na gorze
				changeColorToRed();
				cout<<(char) 219;
			} else {
				if (i<przesuniecie+border || i>przesuniecie+width-border-(z*2)) { // ramki na bokach
					changeColorToRed();
					cout<<(char) 219;
				} else { // wypelnienie
					changeColorToYellow();
					cout<<(char) 219;
				}
			}
		}
		przesuniecie=1;
		cout << "\n";
	}
	cout<<endl;
	return 0;
}
