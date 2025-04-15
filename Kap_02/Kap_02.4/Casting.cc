/**
 * @file Casting.cc
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
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
