#include <cstdint>
#include <iostream>

std::int32_t user_input() /*std::int32_t ist der Return-Value der Fkt. user_input ist der Name der Funkt. In den
Klammern stehen die Input Params, hier sind sie leer*/
{
   std::int32_t number = 0;
   std::cout << "please enter a number: ";
   std::cin >> number;

    return number;
}

int main ()
{

}
