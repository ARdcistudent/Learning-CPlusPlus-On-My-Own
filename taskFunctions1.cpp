// 🟢 Aufgabe 1 (leicht)

// Schreibe eine Funktion:

// void willkommen()

// Sie soll ausgeben:

// Willkommen auf dem C++ Planeten!

// und rufe sie in main() zweimal auf.

#include <iostream>

void willkommen() {
    std::cout << "Willkommen auf dem C++ Planeten!\n";
}

int main() {
    willkommen();  
    willkommen();
    
    return 0;
}