#include <iostream>
#include <string>
#include "Line.h"

int main()
{
    Point p1 = Point(1, 1);
    Point p2 = Point(2, 2);
    Line l(Point(1, 1), Point(2, 2));
    std::cout << "length of l : " << l() << std::endl;
    Line l2(Point(5, 5), Point(10, 10));
    std::cout << "length of l2: " << l2() << std::endl;
    return 0;
}