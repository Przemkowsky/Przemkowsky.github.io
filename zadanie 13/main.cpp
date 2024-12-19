#include <iostream>     // standardowa biblioteka wejścia i wyjścia
#include <windows.h>    // do funkcji Sleep() i gotoxy()
#include <conio.h>      // do sygnału dźwiękowego
#include <cmath>        // do obliczeń matematycznych
#include <vector>       // do przechowywania danych
#include <string>       // do przechowywania nazw samochodów

using namespace std;

// Funkcja do przesuwania kursora na ekranie
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Funkcja sygnału dźwiękowego
void beepSound() {
    cout << "\a"; // Standardowy sygnał dźwiękowy
    Sleep(200);
}

// Funkcja do przeliczania prędkości
void przeliczPredkosc(float kmh, float &ms, float &mmin) {
    ms = kmh / 3.6;      // Przeliczenie na m/s
    mmin = ms * 60;      // Przeliczenie na m/min
}

int main() {
    const int MAX_PREDKOSC = 280; // Maksymalna prędkość samochodu
    vector<string> markiSamochodow;   // Przechowywanie marek samochodów
    vector<float> predkosciKmh;       // Przechowywanie prędkości w km/h
    vector<float> predkosciMs;        // Prędkości w m/s
    vector<float> predkosciMmin;      // Prędkości w m/min

    int liczbaSamochodow;
    cout << "Podaj liczbe samochodow: ";
    cin >> liczbaSamochodow;

    // Wprowadzanie danych
    for (int i = 0; i < liczbaSamochodow; ++i) {
        string marka;
        float predkoscKmh;

        cout << "\nPodaj marke samochodu: ";
        cin >> marka;
        beepSound(); // Sygnał dźwiękowy dla nazwy samochodu

        do {
            cout << "Podaj predkosc samochodu w km/h (maksymalnie " << MAX_PREDKOSC << " km/h): ";
            cin >> predkoscKmh;

            if (predkoscKmh > MAX_PREDKOSC) {
                cout << "Przekroczono maksymalna predkosc! Sprobuj ponownie.\n";
            }
        } while (predkoscKmh > MAX_PREDKOSC);

        float predkoscMs, predkoscMmin;
        przeliczPredkosc(predkoscKmh, predkoscMs, predkoscMmin);

        markiSamochodow.push_back(marka);
        predkosciKmh.push_back(predkoscKmh);
        predkosciMs.push_back(predkoscMs);
        predkosciMmin.push_back(predkoscMmin);
    }

    // Wyświetlanie wyników
    system("cls");
    cout << "PRZELICZONE PREDKOSCI SAMOCHODOW\n";
    cout << "------------------------------------\n";
    cout << "Marka \t Predkosc (km/h) \t m/s \t m/min\n";
    for (size_t i = 0; i < markiSamochodow.size(); ++i) {
        cout << markiSamochodow[i] << "\t\t" << predkosciKmh[i] << "\t\t" 
             << round(predkosciMs[i] * 100) / 100 << "\t" 
             << round(predkosciMmin[i] * 100) / 100 << endl;
        beepSound();
        Sleep(500); // Spowolnienie wyświetlania
    }

    // Wykres prędkości
    cout << "\nWYKRES PREDKOSCI SAMOCHODOW (w m/s):\n";
    gotoxy(0, 14);
    cout << "Oś OX: Prędkość w m/s (1 jednostka = 2 m/s)\n";

    for (size_t i = 0; i < markiSamochodow.size(); ++i) {
        cout << "\n" << markiSamochodow[i] << " | ";
        int dlugoscWykresu = round(predkosciMs[i] / 2); // Skala: 1 jednostka = 2 m/s
        for (int j = 0; j < dlugoscWykresu; ++j) {
            cout << "#";
        }
        cout << " (" << predkosciMs[i] << " m/s)";
        Sleep(300); // Spowolnienie rysowania wykresu
    }

    cout << "\n\nKoniec programu. Nacisnij dowolny klawisz, aby zakonczyc...";
    _getch(); // Czekanie na klawisz

    return 0;
}