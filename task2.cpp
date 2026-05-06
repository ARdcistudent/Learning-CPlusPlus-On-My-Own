// Aufgabe 2 (leicht)

// Schreibe ein Programm, das:

// zwei Zahlen vom Benutzer einliest
// diese addiert
// das Ergebnis ausgibt

#include <iostream>

int main() {
    int firstNumber;
    int secondNumber;
    int solution;

    std::cout << "Nenn mir deine erste Zahl zum addieren!" << std::endl;
    std::cin >> firstNumber;
    std::cout << "Nenn mir nun deine zweite Zahl zum addieren!" << std::endl;
    std::cin >> secondNumber;

    solution = firstNumber+secondNumber;

    std::cout << firstNumber << " + " << secondNumber << " = " << solution << std::endl;

    return 0;

}