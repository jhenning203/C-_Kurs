#include <iostream>
#include <cstdint>

using namespace std;

int main()
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

        else if (number % 2 == 0 ) //Das Prozentzeichen repräsentiert den Modulooperator. Hier überprüfen wir also, ob eine gerade Zahl vorliegt (mod2 == 0)
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

    return 0;
}
