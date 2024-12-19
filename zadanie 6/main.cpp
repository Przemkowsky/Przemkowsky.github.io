#include <iostream>
#include <cmath>  // Dla sta³ej M_PI

using namespace std;

int main() {
    // Sta³a PI
    const double PI = M_PI;  // Sta³a PI w C++ (M_PI jest zdefiniowane w <cmath>)
    
    // Deklaracja zmiennych (trzy litery nazwiska)
    double rad_raw, stopnie_raw;
    
    // Wczytanie danych od u¿ytkownika
    cout << "Podaj radiany: ";
    cin >> rad_raw;
    
    // Zamiana radianów na stopnie
    stopnie_raw = rad_raw * 180 / PI;
    
    // Wyœwietlanie wyników
    cout << "stopnie=" << stopnie_raw << " stopni" << endl;
    
    return 0;
}

