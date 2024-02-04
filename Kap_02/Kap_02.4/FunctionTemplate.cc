#include <iostream>
#include <cstdint>

/*Eine Template-Funktion ist so etwas wie die Vorlage/Schablone einer Funktion. Hier idt das Ziel die Funktion je nach
gebrauch entweder als double oder als int zu verwenden. Mit welchem identifier die Fkt. letutenendes initialisiert wird,
hängt davon ab, welcher Typ in derr main() übergeben wird*/

template <typename T> // Definieren des Templates T
T max (T a, T b) // Definieren und deklarierern der Funktion max als Template T
{
    return a > b ? a : b;
}

int main ()
{
    double da = 3;
    double db = 1;

    std::int32_t ia = 1;
    std::int32_t ib = 5;

    std::cout << max(ia, ib) << '\n'; // max() wird als int initialisiert
    std::cout << max(da, db) << '\n'; // max() wird als double initialisiert
}
