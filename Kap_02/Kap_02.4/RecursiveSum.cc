#include <cstdint>
#include <iostream>

std::uint32_t sum (std::uint32_t n)
{
    if(n > 1)
        return n + sum(n-1);

    return n;


}

int main()
{
    std::uint32_t n = 0;

    std::cout << "Bitte Zahl eingeben: " << '\n';
    std::cin >> n;
    std::uint32_t s = sum(n);

    std::cout << s << '\n';

    return 0;
}
