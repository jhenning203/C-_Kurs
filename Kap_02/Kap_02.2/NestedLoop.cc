#include <iostream>
#include <cstdint>

int main ()
{
    for(int i = 0; i < 5; i++) // Gesamtanzahl der Iterationen: Aüßerer Zählindex (hier i) * innerer Zählindex (hier j)
    {
        for(int j = 0; j < 5; j++)
        {
        std::cout << i * j << std::endl;
        }
    }
}
