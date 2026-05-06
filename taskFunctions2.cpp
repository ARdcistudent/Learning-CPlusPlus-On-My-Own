// 🟡 Aufgabe 2 (mittel)

// Schreibe zwei Funktionen:

// void hallo()
// void tschues()

// Ausgabe:

// Hallo!
// Tschüss!

// Rufe sie in main() in richtiger Reihenfolge auf.

#include <iostream>
using namespace std;

void hallo() {
    cout << "Hallo!\n";
}

void tschues() {
    cout << "Tschüss!\n";
}

int main() {
    hallo();
    tschues();

    return 0;
}