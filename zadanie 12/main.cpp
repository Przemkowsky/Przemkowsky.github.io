#include <iostream>
#include <iomanip> 

int main(int argc, char** argv) {
	
	system("chcp 1250");
	system("cls");
	float jabka,gruszki,cenajab,cenagru;
	printf("Podaj wag� jab�ek w gramach: \n");
	scanf("\n%f",&jabka);
    printf("Podaj wag� gruszek w tonach: \n");
	scanf("\n%f",&gruszki);
	
	jabka = jabka / 1000;
	gruszki = gruszki * 1000;
	
	printf("\nPodaj cen� jab�ek w kilogramach: \n");
	scanf("%f",&cenajab);
	printf("\nPodaj cen� gruszek w kilogramach: \n");
	scanf("%f",&cenagru);
	
	printf("\nWarto�� jab�ek = \t%.2f kg * %.2f \tz�\t=\t%.2f",jabka,cenajab,jabka*cenajab);	
	printf("\nWarto�� gruszek = \t%.2f kg * %.2f \tz�\t=\t%.2f",gruszki,cenagru,gruszki*cenagru);	
	printf("\n\t\t\t\tSuma\t\t=\t%.2f\n",jabka*cenajab+gruszki*cenagru);
	system("pause");	
    return 0;
}
