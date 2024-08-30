#include <iostream>
#include "exercise.h"

int main()
{
    double scores[]{11.2, 22.1, 33.4, 44.3};
    // Functor
    Multiply_by_2 multiply_by_2;
    modify(scores, multiply_by_2, 4);

    std::cout << "data [ ";
    for (unsigned int i{}; i < 4; ++i)
    {
        std::cout << scores[i] << " ";
    }
    std::cout << "]";

    std::cout << " " << std::endl;

    double scores_2[]{11.2, 22.1, 33.4, 44.3};
    // Function pointer
    modify(scores_2, add_1, 4);

    std::cout << "data [ ";
    for (unsigned int i{}; i < 4; ++i)
    {
        std::cout << scores_2[i] << " ";
    }
    std::cout << "]";

    return 0;
}