#include <iostream>
#include <cstdint>

int main()
{
    std::int32_t sum = 0U;

    while (sum < 10U) // Wird so lange ausgeefürt, bis das Kriterium nicht mehr erfüllt ist
    {
        std::cout << "\nCurrent Sum: " << sum << " please enter next value: ";
        std::int32_t input = 0U;
        std::cin >> input;

        sum += input;
    }


    return 0;
}
