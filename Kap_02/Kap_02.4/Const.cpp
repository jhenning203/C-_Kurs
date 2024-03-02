#include <cstdint>
#include <iostream>

constexpr static float pi = 3.141592654; /*Mit dem Zusatz "static" zwingen wir den Compiler dazu, die Variable in den
Static-Speicher zu schreiben*/


int func (const int val) //const beschreibt eine Variable, deren Wert nicht mehr verändert wird (währemd der Laufzeit)
{
    static int counter = 0; /*Diese Variable wird einmal zur Compilezeit angelegt und behält ihren Wert, unabhängig von
    den Aufrufen Die Variable hat sozusagen ein unveränderbares Gedächtnis
    */
    counter ++;

    if (counter <= 3)
    {
        const int temp = val * 2; // Wert wird erst angelegt, wenn die Funktion aufgerufen wird, also der Code läuft
        return temp / 3;
    }
    else
        return 0;


}

int main ()
{
    constexpr int a = 2 * 3 * 5; /*Das Ergebnis dieser Multiplikastion (=30) wird dank des constexpr Keywords schon
    während der Compilezeit berechnet. Das funktioniert nur, wenn alle Infos schon zur Kompilezeit vorliegen!*/

    std::cout << func(2) << '\n';
    std::cout << func(2) << '\n';
    std::cout << func(2) << '\n';
    std::cout << func(2) << '\n';
    return 0;
}
