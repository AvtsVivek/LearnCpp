#include <iostream>
extern const double distance; // Declaration

void print_distance()
{
    //++distance; // Error : can't modify a read only variable.
    std::cout << "distance(some_other_file) : " << distance << std::endl;
    std::cout << "&distance(some_other_file) : " << &distance << std::endl;
}

