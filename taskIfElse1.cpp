// 🟢 Aufgabe: Zahlenvergleich

// Schreibe ein Programm, das:

// Zwei Zahlen vom Benutzer einliest
// Prüft, welche Zahl größer ist
// Folgendes ausgibt:

// Beispiel:

// Zahl 1 ist größer

// oder

// Zahl 2 ist größer

#include <iostream>

int main() {
    int input1;
    int input2;

    std::cout << "Wie lautet deine erste Zahl?" << std::endl;
    std::cin >> input1;
    
    std::cout << "Wie lautet deine zweite Zahl?" << std::endl;
    std::cin >> input2;

    if (input1 != input2) {
        if (input1 > input2) {
            std::cout << "Zahl 1 (" << input1 << ") ist größer als Zahl 2 (" << input2 << ")." << std::endl;
        } else {
            std::cout << "Zahl 1 (" << input1 << ") ist kleiner als Zahl 2 (" << input2 << ")." << std::endl;
        }
    } else {
        std::cout << "Zahl 1 (" << input1 << ") und Zahl 2 (" << input2 << ") sind gleich!" << std::endl;
    }

    return 0;
}