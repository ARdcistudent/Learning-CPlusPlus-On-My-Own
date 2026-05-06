#include <iostream>

#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    // Baustein 1
    int secret = rand() % 10 + 1;
    std::cout << "Geheimzahl wurde gesetzt\n" << secret;
    
    // Baustein 2
    int guess;
    std::cout << "Welche Zahl tippst du?" << std::endl;
    std::cin >> guess;
    std::cout << "Dein Tipp: " << guess << std::endl;

    // Baustein 3, 4 & 5
    int trys = 3;
        if (guess == secret) { // Ausgabe -> Ist falsch / nächster schritt tips (if else)
                    std::cout << "Wow, Richtig schon beim ERSTEN Versuch!!! Glückwunsch!!!\n"; //richtig geraten -> win
                   
                }
        while (guess != secret && trys >= 0) // Das spiel läuft nur weiter wenn der guess falsch war UND noch leben übrig sind!
            {
                 if(guess != secret) {
                     trys--; // ein leben abziehen
                     std::cout << "Leider falsch!\nDu hast noch " << trys << " Leben übrig!\n";
                    if (guess < secret){
                        std::cout << "Deine Zahl ist zu klein!\n";
                    } else {
                        std::cout << "Deine Zahl ist zu groß!\n";
                    }
                    if (trys <= 0) {
                        std::cout << "GAME OVER! \n Du hast alle deine Leben verbraucht! \n";
                        break;
                    }
                    std::cout << "Welche Zahl tippst du?" << std::endl; // erneuter versuch für player
                    std::cin >> guess;
                    std::cout << "Dein Tipp: " << guess << std::endl;
                }
            }
    std::cout << "Vielen Dank für's Spielen! \n \u00A9 André Rühmling | 2026 \n";
    return 0;
}