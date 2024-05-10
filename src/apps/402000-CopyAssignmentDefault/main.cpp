#include <iostream>
#include "point.h"

int main()
{

    Point p1(10, 10, 10);
    Point p2(20, 20, 20);
    Point p77(3, 3, 3);

    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;
    std::cout << "p77 : " << p77 << std::endl;

    std::cout << "-----" << std::endl;

    // Assignment
    p1 = p2 = p77;

    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;
    std::cout << "p77 : " << p77 << std::endl;

    // Change data
    p1.set_data(55);

    std::cout << "-----------" << std::endl;
    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;
    std::cout << "p77 : " << p77 << std::endl;

    return 0;
}