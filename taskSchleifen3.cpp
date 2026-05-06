#include <iostream>

int main() {
    for (int i = 1; i <= 10; i++)
    {
        if (i%2)
        {
           
        } else {
             std::cout << i << "\n";
        }
        
    }
    return 0;
}

// Bessere/andere Lösung:

// for(int i = 2; i <= 10; i += 2)
// {
//     std::cout << i << "\n";
// }