#include <iostream>

#include "exercise.h"

int main()
{
    int I;
    int J;

    std::cout << "Bitte Zählervariablen I und j eingeben: " << '\n';
    std::cin >>I;
    std::cin >> J;

    mod_cross_sum(I, J);

    return 0;
}
