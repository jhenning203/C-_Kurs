#include <iostream>
#include <cstdint>

int main()
{
    std::int32_t sum = 10U;

    do /*Die Zeilen 10 bis 14 werden mindestens einmal ausgeführt, unabhängig, von der While-Bedingung. Erst danach wird
    die while-Bedingung überprüft bez. ausgeführt */
    {
        std::cout << "\nCurrent Sum: " << sum << " please enter next value: ";
        std::int32_t input = 0U;
        std::cin >> input;

        sum += input;
    } while (sum < 10U);


    return 0;
}
