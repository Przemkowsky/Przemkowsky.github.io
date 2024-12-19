#include <stdio.h>

int main() {
    int gal_x;  
    
    
    printf("Podaj liczbê x: ");
    scanf("%d", &gal_x);
    
   
    printf("wczytana liczba x=%d\n", gal_x);

    printf("liczba w formie szesnastkowej x=%x\n", gal_x);
    
    printf("liczba w formie ósemkowej x=%o\n", gal_x);
    
    return 0;
}

