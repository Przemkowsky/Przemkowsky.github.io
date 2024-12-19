c#include <iostream>
#define PI 3.14159265358979323846

int main() {
    double gal_radiany;
    std::cout << "Podaj wartosc radianow: ";
    std::cin >> gal_radiany;

    double GAL_stopnie = gal_radiany * (180.0 / PI);
      
    std::cout << "Radiany: " << gal_radiany << " przeliczone na stopnie: " <<GAL_stopnie << std::endl;

    return 0;
}

