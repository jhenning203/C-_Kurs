#include <iostream>

int main()
{
    int age1 = 28;
    int age2 = 56;

    int older_age1;

    //1.) Klassische Schreibweise
    if (age1 > age2)
        older_age1 = age1;
    else
        older_age1 = age2;

    //2.) Mit Ternary-Operator

    int older_age2 = age1 > age2 ? age1 : age2; // Bool Ausdruck ? (prüfen ob wahr) Enn true, dann... : wenn false, dann...

    std::cout << older_age1 << older_age2;
    return 0;
}
