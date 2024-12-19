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
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);  
 cout << "------------------------------\n"; 
 
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "\\                            /\n"; 

 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << " \\                          /\n"; 

 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "  \\                        /\n"; 

 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "   \\                      /\n"; 

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "    \\                    /\n"; 

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "     \\                  /\n"; 


  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "      \\                /\n"; 

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "       \\              /\n"; 

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "        \\            /\n"; 

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "         \\          /\n";

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "          \\        /\n";

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "           \\      /\n";

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "            \\    /\n";

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "             \\  /\n";

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY);
cout << "              \\/\n";

 gotoxy(10,20);
 cout<<endl;
 return 0; 
}
