#include <iostream>
using namespace std;

int main() {
    int a_raw, b_raw;
    cout << "Podaj a=";
    cin >> a_raw;
    cout << "\nPodaj b=";
    cin >> b_raw;

    int suma = a_raw + b_raw;
    int roznica = a_raw - b_raw;
    int iloczyn = a_raw * b_raw;
    float iloraz = 1.0 * a_raw / b_raw;
    int reszta = a_raw % b_raw;

    cout << "\nWynik dzialania programu:" << endl;
    cout << "\nsuma=" << suma << endl;
    cout << "\nroznica=" << roznica << endl;
    cout << "\niloczyn=" << iloczyn << endl;
    cout << "\niloraz=" << iloraz << endl;
    cout << "\nreszta z dzielenia=" << reszta << endl;

    return 0;
}

