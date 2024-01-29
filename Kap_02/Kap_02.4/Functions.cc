#include <cstdint>
#include <iostream>

//Eine Funkt. sollte immer genau eine Aufgabe haben
std::int32_t user_input() /*std::int32_t ist der Return-Value der Fkt. user_input ist der Name der Funkt. In den
Klammern stehen die Input Params, hier sind sie leer */
{
   std::int32_t number = 0;
   std::cout << "please enter a number: ";
   std::cin >> number;

    return number; //Die Funkt. gibt number zurück (vom Typ std::int32_t)
}

int main ()
{
    std::int32_t n1 = user_input();
    std::cout << n1 << '\n';
    std::int32_t n2 = user_input();
    std::cout << n2 << '\n';
    std::int32_t n3 = user_input();
    std::cout << n3 << '\n';

}
