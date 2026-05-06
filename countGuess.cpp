#include <iostream>

int main() {
    // Baustein 1
    int secret = 7;
    std::cout << "Geheimzahl wurde gesetzt\n";
    
    // Baustein 2
    int guess;
    std::cout << "Welche Zahl tippst du?" << std::endl;
    std::cin >> guess;
    std::cout << "Dein Tipp: " << guess << std::endl;

    // Baustein 3, 4 & 5
    while (guess != secret)
    {
        if (guess != secret) {
            std::cout << "Leider falsch!\n";
            if (guess < secret){
                std::cout << "Deine Zahl ist zu klein!\n";
            } else {
                std::cout << "Deine Zahl ist zu groß!\n";
            }
            std::cout << "Welche Zahl tippst du?" << std::endl;
            std::cin >> guess;
            std::cout << "Dein Tipp: " << guess << std::endl;
        }
    }
    std::cout << "Richtig!\n";
    
    return 0;
}

// 🚀 Saubere Lösung (didaktisch korrekt)
// #include <iostream>

// int main() {

//     int secret = 7;
//     std::cout << "Geheimzahl wurde gesetzt\n";

//     int guess;

//     std::cout << "Welche Zahl tippst du?" << std::endl;
//     std::cin >> guess;

//     while (guess != secret)
//     {
//         std::cout << "Leider falsch!\n";

//         if (guess < secret)
//         {
//             std::cout << "Deine Zahl ist zu klein!\n";
//         }
//         else
//         {
//             std::cout << "Deine Zahl ist zu groß!\n";
//         }

//         std::cout << "Welche Zahl tippst du?" << std::endl;
//         std::cin >> guess;
//     }

//     std::cout << "Richtig!\n";

//     return 0;
// }