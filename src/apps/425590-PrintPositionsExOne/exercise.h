#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <list>

template <typename T, typename P>
void print_positions(const std::list<T> &data_list, const std::list<P> &positions_list)
{
    // Iterate over P
    for (auto it = positions_list.begin(); it != positions_list.end(); ++it)
    {
        unsigned int position{0}; // Position initialized to 0
        // Iterate over L, only printing at a position specified by P.
        for (auto &i : data_list)
        {
            if (position == (*it))
            {
                std::cout << "[" << position << "]:" << i << std::endl;
            }
            ++position;
        }
    }
}

#endif // _EXERCISE_H
