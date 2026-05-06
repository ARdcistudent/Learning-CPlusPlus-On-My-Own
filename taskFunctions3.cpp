// 🔥 Bonus (zum Denken)

// Schreibe eine Funktion:

// void linie()

// Ausgabe:

// --------------------

// Rufe sie so auf, dass entsteht:

// --------------------
// Hallo
// --------------------
// Tschüss
// --------------------

#include <iostream>

void linie() {
    printf("\n--------------------\n");
}

int main() {
    linie();
    std::cout << "Hallo";
    linie();
    std::cout << "Tschüss";
    linie();

    return 0;
}