#include <iostream>
#include <cmath>  // Dla sta�ej M_PI

using namespace std;

int main() {
    // Sta�a PI
    const double PI = M_PI;  // Sta�a PI w C++ (M_PI jest zdefiniowane w <cmath>)
    
    // Deklaracja zmiennych (trzy litery nazwiska)
    double rad_raw, stopnie_raw;
    
    // Wczytanie danych od u�ytkownika
    cout << "Podaj radiany: ";
    cin >> rad_raw;
    
    // Zamiana radian�w na stopnie
    stopnie_raw = rad_raw * 180 / PI;
    
    // Wy�wietlanie wynik�w
    cout << "stopnie=" << stopnie_raw << " stopni" << endl;
    
    return 0;
}

