// 🟢 Aufgabe 1 (leicht)

// Erstelle Array:

// int zahlen[5] = {1, 2, 3, 4, 5};

// Gib mit Schleife alle Zahlen aus.

#include <iostream>

int zahlen[5] = {1, 2, 3, 4, 5};

int main() {
    for (int i = 0; i < sizeof(zahlen) / sizeof(zahlen[0]); i++)
    {
        std::cout << zahlen[i] << "\n";
    }
    
    return 0;
}