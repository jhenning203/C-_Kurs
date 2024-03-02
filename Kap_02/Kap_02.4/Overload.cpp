#include <iostream>


double max (double a, double b)
{
    return a > b ? a : b;
}

std::int32_t max (std::int32_t a, std::int32_t b)
{
    return a > b ? a : b;
}

/*Funktionsüberladungen: Es ist möglich, Funktionen zu überlade. Das heißt es eexistieren zwei oder mehr Funktionen mit
dem selben Namen. Diese müssen sich aber mindestens um einen Parameter (int, double etc.) unterscheiden.*/


int main()
{
    return 0;
}
