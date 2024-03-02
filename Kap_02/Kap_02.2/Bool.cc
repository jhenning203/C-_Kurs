#include <iostream>

using namespace std;

int main ()
{
    int8_t number = 11;

    bool checkinput = ((number >= 0) && (number <= 10)); //Bedingung kann auch direkt initialisiert werden

    cout << "Check: " << boolalpha << checkinput << endl; // std::boolalpha gibt den Wert des bools als Wort aus
}
