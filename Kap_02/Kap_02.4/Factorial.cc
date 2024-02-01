// Fakultät berechnen

#include <iostream>

unsigned int faculty (unsigned int n)
{
    if(n > 1)
    {
        return n* faculty(n -1); /* rekursiver Funktionsaufruf um die Funktion zu berechnen. Hier sinnvoller als
        Schleife, da javorher nicht bekannt ist, wie oft die Schleife ausgeführt werden soll */
    }

    else if (n == 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }

}


int main()
{
    unsigned n = 5;
    unsigned int n_fac = faculty(5);

    std::cout << n << "! = " << n_fac << std::endl;

    return 0;
}
