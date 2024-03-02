#include <iostream>
#include "exercise.h"

void mod_cross_sum(int I, int J)
{
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            bool is_even = false;
            int number = i + j;

            if (number % 2 == 0)
            {
                is_even = true;
            }

            if (is_even == true)
            {
                std::cout << "i: " << i << " , j: " << j << " := Even!" << '\n';
            }

            else
            {
                 std::cout << "i: " << i << " , j: " << j << " := Odd!" << '\n';
            }


        }

    }


}
