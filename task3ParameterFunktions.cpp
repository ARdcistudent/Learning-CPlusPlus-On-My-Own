// 🔥 Bonus (zum Denken)

// Schreibe eine Funktion:

// void box(int breite)

// Ausgabe z. B. bei breite = 5:

// *****
// *****
// *****

// 👉 also mehrere Reihen

#include <iostream>

void customBox(int breite) {
    for (int i = 0; i < breite/2; i++)
    {
        std::cout << "\n";
        for (size_t i = 0; i < breite; i++)
        {
            std::cout << "*";
        }
    }
    std::cout << "\n";
}

int main() {
    customBox(6);

    return 0;
}