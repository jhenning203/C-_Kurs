#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    uint8_t max_attemps = 3;
    uint8_t current_attemps = 0;

    for (; current_attemps < max_attemps; current_attemps++) // Zählervariale außerhalb der Schleife initialisiert
    {
        int number;
    cout << "Bitte Tipp abgeben: ";
    cin >> number;

    if (number >= 0 && number <= 10)
    {
        if (number == 4)    //Immer nur ein If pro Fall!
        {
            cout << "Du hast gewonnen!!!" << endl;
        }

        else if (number ==2 ) //Beliebig viele Elsif pro Fall
        {
            cout << "Knapp daneben ist auch vorbei, du kriegst aber ein Fleiß-Bienchen" << endl;
        }


        else // immer nur ein Else pro Fall!
        {
            cout << "Satz mit X, das war wohl nix - Heul leise Chantal!"  << endl;
        }
    }

    else
    {
        cout << "Ungültige Nummer angegeben (0 <= x <= 10; x€Z)! " << endl;
    }
    }



    return 0;
}
