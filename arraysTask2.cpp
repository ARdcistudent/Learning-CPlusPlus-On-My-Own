// 🟡 Aufgabe 2 (mittel)

// Erstelle:

// int zahlen[5] = {5, 10, 15, 20, 25};

// Schreibe Funktion:

// int summeArray(...)

// die alle Zahlen addiert und Summe zurückgibt.

// Ausgabe:

// 75

// (Hinweis: Hier musst du überlegen, wie man ein Array an Funktionen übergibt. Kleiner Denkstein 🪨😄)

#include <iostream>
template<size_t N>

int additionArray(int (&array)[N]){
    int summe = 0;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        summe += array[i];
    }
    return summe;
}

int main() {
    int zahlen[5] = {5, 10, 15, 20, 25};
    std::cout << additionArray(zahlen) << std::endl;

    return 0;
}