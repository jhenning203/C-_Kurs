#include <iostream>
#include <cstdint>

int main()
{
    std::int32_t sum = 0U;

    do /*Die Zeilen 10 bis 14 werden mindestens einmal ausgeführt, unabhängig, von der While-Bedingung. Erst danach wird
    die while-Bedingung überprüft bez. ausgeführt */
    {
        std::cout << "\nCurrent Sum: " << sum << " please enter next value: ";
        std::int32_t input = 0U;
        std::cin >> input;

        if(input < 0) // Wenn das Keyword 'break' auftaucht, wird die komplette Schleife beendet
        {
            std::cout << "Loop canceled";
            //break;
            continue;  //Continue beendet lediglich den aktuellen Schleifendurchlauf (hier nur das if)
        }

        if (input == 0)
        {
            break;
        }


        sum += input;
    } while (true); // Schleife wird immer ausgeführt. Abbruchkrit. (break) SOLLTE eingebaut werden!


    return 0;
}
