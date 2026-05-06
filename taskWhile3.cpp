// 🔵 Bonusaufgabe (zum Denken 🧠)

// Schreibe ein Programm, das:

// eine Variable int i = 10 hat
// solange läuft, bis i unter 1 fällt
// jede Zahl ausgibt

// UND danach ausgibt:

// Start!
// Beispielausgabe:
// 10
// 9
// 8
// 7
// 6
// 5
// 4
// 3
// 2
// 1
// Start!

#include <iostream>

int main() {
    int i = 10;
    
    while (i >=1 )
    {
        std::cout << i << "\n";
        i--;
    }
    std::cout << "Start!\n";

    return 0;
}