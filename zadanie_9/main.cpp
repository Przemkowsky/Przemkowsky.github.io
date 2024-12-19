#include <stdio.h>

int main() {

    int gal_x;
    

    printf("Wpisz liczba naturalna: ");
    scanf("%d", &gal_x);
    
 
    printf("wczytana liczba x=%d\n", gal_x);
    

    printf("kwadrat liczby x=%d %d^2=%d\n", gal_x, gal_x, gal_x * gal_x);
    

    printf("szeœcian liczby x=%d %d^3=%d\n", gal_x, gal_x, gal_x * gal_x * gal_x);
    
    return 0;
}

