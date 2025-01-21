#include <iostream>

using namespace std;

int main() {
    const double PI = 3.14159;
    
    double stop_raw, rad_raw;
    
    cout << "Podaj stopnie: ";
    cin >> stop_raw;
    
    rad_raw = stop_raw * PI / 180;
    
    cout << "radiany=" << rad_raw << " radianow" << endl;
    
    return 0;
}

