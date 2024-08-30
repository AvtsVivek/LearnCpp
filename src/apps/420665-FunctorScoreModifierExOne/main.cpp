#include <iostream>
#include "exercise.h"

int main()
{

    double scores[]{10.1, 20.3, 30.2, 40.3};

    Multiply_by_2 multiply_by_2;
    Add_1 add1;

    modify(scores, multiply_by_2, 4);

    std::cout << "data [";
    for (unsigned int i{}; i < std::size(scores); ++i)
    {
        std::cout << scores[i] << " ";
    }
    std::cout << "]" << std::endl;

    modify(scores, add1, 4);

    std::cout << "data [";
    for (unsigned int i{}; i < std::size(scores); ++i)
    {
        std::cout << scores[i] << " ";
    }
    std::cout << "]" << std::endl;

    return 0;
}