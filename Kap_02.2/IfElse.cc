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
        if (number == 4)
        {
            cout << "Du hast gewonnen!!!" << endl;
        }

        else
        {
            cout << "Satz mit X, das war wohl nichts!"  << endl;
        }
    }

    else
    {
        cout << "Ungültige Nummer angegeben (0 <= x <= 10; x€Z)! " << endl;
    }

    return 0;
}
