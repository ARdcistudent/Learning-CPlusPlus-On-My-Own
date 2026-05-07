// 🔥 Bonus (zum Denken)

// Schreibe Funktion:

// bool enthaeltZahl(...)

// Sie prüft:

// Ist Zahl X im Array?

// Beispiel:

// Array:

// 4 8 15 16 23 42

// Suche:

// 15

// → true

// Suche:

// 99

// → false

#include <iostream>

bool enthaeltZahl(int zahl, int array[], int arrayGroesse) {
    bool statement = false; 
    for (int i = 0; i < arrayGroesse; i++) 
    {
        if (array[i] == zahl) { 
            statement = true; 
            break;
        }  
    }
    
    if (statement) {
        std::cout << "True!";
    } else {
        std::cout << "False!";
    }
    
    return statement;
}

int main() {
    int zahlen[] = {4, 8, 15, 16, 23, 42};
    enthaeltZahl(15,zahlen,6);
    std::cout << std::endl;
    enthaeltZahl(99,zahlen,6);
    std::cout << std::endl;

    return 0;
}