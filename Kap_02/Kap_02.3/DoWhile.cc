#include <iostream>
#include <cstdint>

int main()
{
    std::int32_t sum = 0U;

    while (sum < 10U)
    {
        std::cout << "\nCurrent Sum: " << sum << " please enter next value: ";
        std::int32_t input = 0U;
        std::cin >> input;
    }


    return 0;
}
