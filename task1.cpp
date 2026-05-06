// Aufgabe 1 (sehr leicht)

// Schreibe ein Programm, das:

// den Benutzer nach seinem Alter fragt
// das Alter in einer Variable speichert
// anschließend ausgibt:

#include <iostream>

int main() {
    std::string age;
    
    std::cout << "Wie alt bist du?" << std::endl;
    std::cin >> age;

    std::cout << "Du bist " << age << " Jahre alt" << std::endl;

    return 0;
}