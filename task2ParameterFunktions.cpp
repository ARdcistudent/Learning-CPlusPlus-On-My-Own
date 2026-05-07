// 🧪 Aufgabe 2 (mittel)

// Schreibe eine Funktion:

// void rechteck(int breite)

// Sie soll so etwas ausgeben:

// Wenn breite = 5:

// *****

// Tipp: Schleife + "*"

#include <iostream>

void rechteck(int breite) {
    for (int i = 0; i < breite; i++)
    {
        std::cout << "*";
    }
    std::cout << "\n";
}

int main() {
    rechteck(5);

    return 0;
}