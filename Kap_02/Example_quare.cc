#include <iostream>

int main()
{
    float kanten_laenge; //Kantenlänge
    float umfang;
    float flaeche;

    std::cout << "Bitte geben Sie die Kantenlaenge an: " << std::endl;
    std::cin >> kanten_laenge; //Kantenlänge Input

    //Berechnungen
    umfang = 4*kanten_laenge;
    flaeche = kanten_laenge*kanten_laenge;

    //Output
    std::cout << "Umfang: " << umfang << std::endl;
    std::cout << "Fläche: " << flaeche << std::endl;

}
