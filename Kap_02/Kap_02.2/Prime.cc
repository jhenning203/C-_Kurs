#include <iostream>

int main()
{
    bool prime = true;

    unsigned int  number = 0;
    std::cout << "Bitte Zahl eingeben: " ;
    std::cin >>  number;

    if (number == 0 || number == 1)
    {
        prime = false;
    }

    for (unsigned int i = 0; i < number; i++)
    {
        if (number % i == 0)
        {
            prime = false;
        }

    }
    std::cout << number << "Ist eine Primzahl? " << std::boolalpha <<prime << std::endl;


}
