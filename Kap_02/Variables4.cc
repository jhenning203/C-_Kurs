#include <iostream>

int main()
{
   int value1 = 10;
   int value2 = 3;


   int res = value1 / value2; // Hier sollte 3,33333 rauskommen. Das kann aber nicht in einem int abgespeichert werden!
   std::cout << "division: " << res << std::endl;

}
