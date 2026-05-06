// 🟡 Aufgabe 2 (mittel)

// Schreibe ein Programm, das alle geraden Zahlen von 2 bis 20 ausgibt.

// Ausgabe:
// 2
// 4
// 6
// 8
// 10
// 12
// 14
// 16
// 18
// 20

// 👉 Bedingungen:

// while verwenden
// keine if-„Leertricks“ 😄
// überlege, wie du die Zahl direkt richtig erhöhst

#include <iostream>

int main() {
    int i = 1;

    while (i <= 20)
    {
        if (i%2 == 0)
        {
            std::cout << i << "\n";
        }
        i++;
        // um i um 2 schritte zu erweitern geht i = i + 2 || i += 2 
    }
    return 0;
}