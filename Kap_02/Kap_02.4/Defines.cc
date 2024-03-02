#include <iostream>

#define NUM_PLAYERS 2
/*Defines sind ein Tool für Textersetzung. Überall, wo im Code NUM_PLAYERS vorkommt, wird dieser
Text durch den Wert ersetzt. */

/*Defines sollten in modernen C++ Codes nicht mehr verwendet werden.
Wo man sie aber noch verwenden kann ist zum Aktivieren/Deaktivieren von Codeteilen*/

//#define MODE_1

int main()
{
    int num_players = 2;
    #ifdef MODE_1
        std::cout << NUM_PLAYERS << std::endl;

    #else
        std::cout << NUM_PLAYERS << std::endl;
    #endif
}
