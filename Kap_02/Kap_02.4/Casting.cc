#include <iostream>

int main()
{
    int a = 12;
    float b = a; //Implizites Casting -> nicht erwünscht

    //Besser:
    float c = static_cast<float>(a); //In <> Steht der Typ, zu dem gecastet werden soll, in () die Ausgangsvariable

    double d = 12.3;
    float e = static_cast<float>(d);


    return 0;
}
