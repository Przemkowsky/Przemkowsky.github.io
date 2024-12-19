#include <iostream>
#include <cmath>
#include <iomanip>  
#include <windows.h> 
#include <sstream>  
using namespace std;

void zmienKolor(int kolorTla, int kolorTekstu) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, kolorTla * 16 + kolorTekstu);
    system("cls"); 
}

double obliczDlugoscWektora(double x, double y) {
    return sqrt(x * x + y * y);
}

double obliczKat(double x1, double y1, double x2, double y2, double &cosAlfa, double &sinAlfa, double &tanAlfa) {
    double iloczynSkalarny = x1 * x2 + y1 * y2;
    double dlugosc1 = obliczDlugoscWektora(x1, y1);
    double dlugosc2 = obliczDlugoscWektora(x2, y2);
    
    cosAlfa = iloczynSkalarny / (dlugosc1 * dlugosc2);
    sinAlfa = sqrt(1 - cosAlfa * cosAlfa);
    
    if (cosAlfa != 0) {
        tanAlfa = sinAlfa / cosAlfa;
    } else {
        tanAlfa = INFINITY; 
    }
    
    double katRad = acos(cosAlfa); 
    double katStopnie = katRad * 180 / M_PI; 
    
    return katStopnie;
}

void wczytajWartosc(double &value) {
    string input;
    getline(cin, input);
    stringstream ss(input);
    ss >> value;
}

int main() {
    system("chcp 1250");  
    
    zmienKolor(1, 15);

    double AB_x, AB_y, CD_x, CD_y;
    double cos_alfa, sin_alfa, tan_alfa, alfa_x;
    
    double dv1_x, dv1_y, dv2_x, dv2_y;

    cout << "Podaj wspolrzedne wektorow:\n";
    
    cout << "A: ";
    wczytajWartosc(AB_x);
    cout << "B: ";
    wczytajWartosc(AB_y);
    
    cout << "C: ";
    wczytajWartosc(CD_x);
    cout << "D: ";
    wczytajWartosc(CD_y);

    dv1_x = AB_x; 
    dv1_y = AB_y;
    dv2_x = CD_x; 
    dv2_y = CD_y;

    alfa_x = obliczKat(dv1_x, dv1_y, dv2_x, dv2_y, cos_alfa, sin_alfa, tan_alfa);

    cout << "\nWektor AB wynosi: [" << AB_x << ", " << AB_y << "]" << endl;
    cout << "Wektor CD wynosi: [" << CD_x << ", " << CD_y << "]" << endl;
    
    cout << "\ndv1: [" << dv1_x << ", " << dv1_y << "]" << endl;
    cout << "dv2: [" << dv2_x << ", " << dv2_y << "]" << endl;
    
    cout << "cos_alfa = " << cos_alfa << endl;
    cout << "sin_alfa = " << sin_alfa << endl;
    cout << "tan_alfa = " << tan_alfa << endl;
    cout << "alfa_x = " << fixed << setprecision(1) << alfa_x << " stopni" << endl;

    system("pause");
    return 0;
}
