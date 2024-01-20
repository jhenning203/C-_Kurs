#include <cstdint>
#include <iostream>

int main ()
{
    char LEFT = 'a'; //CAPS: Feste Variablen
    char RIGHT = 'd';

    char input; // Konsoleninput von Tastatur

    std::cin >> input;

    if (RIGHT == input)
    {
        std::cout << "You moved to the right";
    }
    else if (LEFT == input)
    {
        std::cout << "You moved to the left";
    }

    else
    {
        std::cout << "Invalid Input (Only 'a' & 'd' allowed)!";
    }



    return 0;
}
