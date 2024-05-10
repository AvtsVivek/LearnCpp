#include <iostream>
#include "point.h"

int main()
{
    Point p1(1, 1, 1);
    Point p2(2, 2, 2);
    Point p77(77, 77, 77);

    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;
    std::cout << "p77 : " << p77 << std::endl;

    std::cout << "-----" << std::endl;

    // p1 = p2 = p77;
    p1.operator=(p2.operator=(p77));
    // p1.operator=(p2).operator=(p77); // This does not work.

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