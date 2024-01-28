#include <iostream>

int main()
{
    char letter_a = 'A'; // Buchstabe A (aus dem ASCII Alphabet)

    std::cout << letter_a << std::endl;
    std::cout << (int)letter_a << std::endl; // Gibt die Nummer aus der ASCII Tabelle des Buchstaben A

    /*Rechnen mit Buchstaben*/

    char letter_a2 = letter_a + 3;

    std::cout << letter_a2 << std::endl;
    std::cout << (int)letter_a2 << std::endl;
}
