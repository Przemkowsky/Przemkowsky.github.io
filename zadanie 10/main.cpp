#include <iostream>
#include <cmath> 
#include <iomanip>


const double RAW_c = 30.0; 

int main() {
    double RAW_a; 
    double RAW_b; 
    double RAW_area;
    double RAW_cos_alpha, RAW_sin_alpha, RAW_tg_alpha; 
    double RAW_alpha_deg, RAW_beta_deg; 


    std::cout << "Podaj dlugosc boku trojkata a : ";
    std::cin >> RAW_a;

  
    if (RAW_a == 15.0) {
        RAW_b = RAW_a * std::sqrt(3); 
    } else {
        RAW_b = sqrt(pow(RAW_c, 2) - pow(RAW_a, 2));
    }

    RAW_area = (RAW_a * RAW_b) / 2; 

    RAW_cos_alpha = RAW_a / RAW_c; 
    RAW_sin_alpha = RAW_b / RAW_c;
    RAW_tg_alpha = RAW_b / RAW_a;

    RAW_alpha_deg = atan(RAW_tg_alpha) * (180.0 / M_PI); 
    RAW_beta_deg = 90.0 - RAW_alpha_deg; 

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "\nWyniki obliczen:" << std::endl;
    std::cout << "bok trojkata b= " << RAW_b << " cm" << std::endl;
    std::cout << "pole trojkata= " << RAW_area << " cm^2" << std::endl;
    std::cout << "cosinus alfa= " << RAW_cos_alpha << std::endl;
    std::cout << "sinus alfa= " << RAW_sin_alpha << std::endl;
    std::cout << "tangens alfa= " << RAW_tg_alpha << std::endl;
    std::cout << "kat alfa= " << RAW_alpha_deg << " stopni" << std::endl;
    std::cout << "kat beta= " << RAW_beta_deg << " stopni" << std::endl;

    return 0;
}
