#include <iostream>
#include <string>

using namespace std;

int main() {
    string imie, nazwisko; // Variables for first name and last name
    
    // Prompt for user input
    cout << "Podaj swoje imie: ";
    cin >> imie;
    
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;

    // Output the full name
    cout << "\nNazywasz sie " << imie << " " << nazwisko << endl;

    // Calculate the length of each part and the total length
    int dlugosc_imie = imie.length();
    int dlugosc_nazwisko = nazwisko.length();
    int suma_liter = dlugosc_imie + dlugosc_nazwisko;

    cout << "\nTwoje imie ma " << dlugosc_imie << " liter, a nazwisko " 
         << dlugosc_nazwisko << " liter" << endl;

    cout << "Lacznie Twoje dane maja " << suma_liter << " liter" << endl;

    // Output the initials
    cout << "\nTwoje inicjaly to " << imie[0] << nazwisko[0] << endl;

    // Wait for user to press a key
    cout << "\nAby kontynuowac, nacisnij dowolny klawisz . . .";
    cin.ignore();
    cin.get();

    return 0;
}
