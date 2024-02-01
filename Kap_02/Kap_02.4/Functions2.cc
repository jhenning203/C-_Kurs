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

void print_bool(bool value) // Funktionen vom Typ void geben keine return values zurück
{
    std::cout << std::boolalpha << value << '\n';

    return; //Dieses return beendet nur die Fkt. ohne etwas zurückzugeben.
}

bool is_even (std::int32_t number)// Übergabeparam ist hier ein int32_t mit Name number. Dieser kommt aus der main().
{
    if (number % 2 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }

    // alternativ kann mauch return number % 2 == 0; gibt auch true oder false aus

}

int main ()
{
    std::int32_t user_number = user_input();
    std::cout << user_number << '\n';

    bool result = is_even(user_number); //Übergeben von user_number an is_even

    std::cout << "Is even? " << std::boolalpha << result << '\n';

    print_bool (result);


    return 0;
}
