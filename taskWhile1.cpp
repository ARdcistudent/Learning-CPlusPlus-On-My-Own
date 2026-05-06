// 🟢 Aufgabe 1 (leicht)

// Schreibe ein Programm, das mit einer while-Schleife die Zahlen von 1 bis 5 ausgibt.

// Ausgabe:
// 1
// 2
// 3
// 4
// 5

// 👉 Bedingungen:

// benutze while
// keine for-Schleife
// du brauchst eine Variable int i

#include <iostream>

int main() {
    int i = 1;

    while (i <= 5)
    {
        std::cout << i << "\n";
        i++;
    }
    return 0;
}