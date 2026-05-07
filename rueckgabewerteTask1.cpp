// Aufgabe 1 (leicht)

// Schreibe eine Funktion:

// int verdoppeln(int zahl)

// Sie soll die Zahl *2 zurückgeben.

// Beispiel:

// verdoppeln(5)

// → 10

// In main():

// Ergebnis in Variable speichern
// ausgeben

#include <iostream>


int verdoppeln(int zahl) {
    return zahl*2;
}

int main() {
    int output = verdoppeln(5);
    std::cout << output << "\n";
    // was auch geht:
    std::cout << std::to_string(verdoppeln(5)) + "\n";

    return 0;
}