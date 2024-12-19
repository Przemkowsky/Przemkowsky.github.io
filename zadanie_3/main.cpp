#include <iostream>
#include <windows.h> 
using namespace std; 
void gotoxy(int x, int y) 
{ 
 COORD coord; 
 coord.X = x; 
 coord.Y = y; 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
}
int main() 
{ 
 system("chcp 1250");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "+--------------------------------------+\n"; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "!       kolor      ! numer koloru      !\n"; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "+-------------------!------------------!\n"; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "!   wszyst kolory  !    ...........    !\n"; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "+-------------------!------------------!\n"; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "!      bia³y       !    15 oraz 7      !\n"; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "+-------------------!------------------!\n";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
 cout << "!      ¿ó³ty       !    14 oraz 6      !\n";
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "+-------------------!------------------!\n";  
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13| 
FOREGROUND_INTENSITY);
 cout << "!     purpurowy    !    13 oraz 5      !\n"; 
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "+-------------------!------------------!\n"; 
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| 
FOREGROUND_INTENSITY);
 cout << "!     czerwony     !    12 oraz 4      !\n"; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "+-------------------!------------------!\n"; 
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| 
FOREGROUND_INTENSITY);
 cout << "!   jasnoniebieski !    11 oraz 3      !\n"; 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "+-------------------!------------------!\n"; 
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| 
FOREGROUND_INTENSITY);
 cout << "!     zielony      !    10 oraz 2      !\n"; 
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "+-------------------!------------------!\n"; 
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| 
FOREGROUND_INTENSITY);
 cout << "! ciemnoniebieski  !    9 oraz 1       !\n"; 
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "+-------------------!------------------!\n"; 
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| 
FOREGROUND_INTENSITY);
 cout << "!       szary      !    8 oraz 0       !\n"; 
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
 cout << "+-------------------!------------------!\n"; 
 cout<<endl;
 return 0;
 }
