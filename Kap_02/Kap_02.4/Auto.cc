#include <iostream>

int main ()
{
    int a = 12;
    float b = static_cast<float>(a); /* auto steht immer links vom = . auto lässt den Complier entscheiden welcher
    Datentyp der optimale ist*/

    int c = 25;
    auto d = static_cast<float>(c);

    return 0;
}
