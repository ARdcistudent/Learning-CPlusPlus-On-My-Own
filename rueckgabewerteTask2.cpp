// Aufgabe 2 (mittel)

// Schreibe:

// int addiere(int a, int b)

// Sie gibt Summe zurück.

// Test:

// addiere(7, 3)

// → 10

// und noch einen zweiten Test.

#include <iostream>

int addiere(int a, int b) {
    int result =  a + b;
    
    return result;
}

void leerzeile() {
    std::cout << "\n";
}

int main() {
    std::cout << addiere(7,3);
    leerzeile();
    std::cout << addiere(-6663245,1378);
    leerzeile();

    return 0;
}