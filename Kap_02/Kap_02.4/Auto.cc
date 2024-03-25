#include <iostream>

int main ()
{
    int a = 12;
    auto b = static_cast<float>(a); // auto steht immer links vom = . auto lässt den Complier entscheiden welcher Datentyp der optimale

    return 0;
}
