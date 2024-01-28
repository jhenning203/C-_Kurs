#include <iostream>
#include <cstdint>

using namespace std;

int main()
{

    bool has_won = false;
    uint8_t max_attemps = 3;
    uint8_t current_attemps = 0;

    while(!has_won)
    {
        int number;
    cout << "Bitte Tipp abgeben: ";
    cin >> number;

    if (number >= 0 && number <= 10)
    {
        if (number == 4)    //Immer nur ein If pro Fall!
        {
            cout << "Du hast gewonnen!!!" << endl;
            has_won = true;
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

    std::cout << "Das Spiel wurde beendet, da du gewonnen hast";

    return 0;
}
