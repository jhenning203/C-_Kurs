#include <iostream>

int main ()
{
    double x = 0.0F;

    std::cout << "Bitte Wert eingeben: ";
    std::cin >> x;

    double abs_x;

    if (x < 0)
    {
        abs_x = -1.0 * x;
    }
    else
    {
        abs_x = x;
    }

    std::cout << "|"<<x<< "| = " << abs_x;


    return 0;
}
