#include <cstdint>
#include <iostream>

using namespace std;

int main ()
{
    uint8_t LENG_x = 10U; // Länge des Spielfelds
    uint8_t START = 0U; // Startpunkt
    uint8_t GOAL = 9U; // Ziel

    uint8_t player = START;

    char LEFT = 'a'; //CAPS: Feste Variablen
    char RIGHT = 'd';

    char input; // Konsoleninput von Tastatur


    while (true )
    {

        if (player == GOAL)
        {
            std::cout << "Ziel erreicht! ";
            break;
        }

        for (uint8_t i = START; i < LENG_x; i++)
        {
            if (i == player)
            {
                std::cout << 'P';
            }

            else if (i == GOAL ||i == START)
            {
                std::cout << '|';
            }

            else
            {
                std::cout << '.';
            }


        }

        std::cin >> input;

        if (RIGHT == input && player < (LENG_x -1))
        {
            std::cout << "You moved to the right";
            player ++;
        }
        else if (LEFT == input && player > 0)
        {
            std::cout << "You moved to the left";
            player --;
        }

        else
        {
            std::cout << "Invalid Input (Only 'a' & 'd' allowed)!";
        }




    }





    return 0;
}
