// Bonus (zum Denken) 🔥

// Schreibe:

// bool istGerade(int zahl)

// Wenn Zahl gerade:

// true

// sonst:

// false

// In main():

// prüfen mit if.

// Beispiel:

// if (istGerade(8))
// {
//     std::cout << "Gerade";
// }
// else
// {
//     std::cout << "Ungerade";
// }

#include <iostream>

bool istGerade(int zahl) {
    bool statement = zahl % 2 == 0;

    return statement;
}

// Oder auch, damit es übersichtlicher in main() ist:

void ifIstGerade(int zahl) {
    if(istGerade(zahl)){
        std::cout << "Gerade" << std::endl;
    } else {
        std::cout << "Ungerade" << std::endl;
    }
}

int main() {
    if(istGerade(8)){
        std::cout << "Gerade" << std::endl;
    } else {
        std::cout << "Ungerade" << std::endl;
    }

    //hier die alternative:
    ifIstGerade(7);

    return 0;
}