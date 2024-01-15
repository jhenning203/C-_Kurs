#include <iostream>
#include <cstdint>

int main()
{
    std::uint32_t i = 1; // Gibt immer einen Datentypen mit 32 Bit aus und passt sich somit dem jeweiligen Betriebssystem an
    uint32_t j =2; //Die beiden Schreibweisen sind äquivalent

    std::cout << i << "" << j << std::endl;

    return 0;
}
