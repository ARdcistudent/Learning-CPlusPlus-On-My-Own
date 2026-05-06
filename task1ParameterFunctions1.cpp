// 🧪 Aufgabe 1 (leicht)

// Schreibe eine Funktion:

// void begruessung(string name)

// Sie soll ausgeben:

// Hallo NAME!

// Und im main():

// 2 verschiedene Namen testen

#include <iostream>

void greet(std::string name) {
    std::cout << "Hallo " << name << "\n";
}

void greetSpecial() {
    std::string name;
    std::cout << "Und wie heißt du? \n";
    std::cin >> name;
    std::cout << "Hallo " << name << "\n";
}

int main() {
    greet("André");
    greet("ChatGPT");
    
    greetSpecial();
    return 0;
}