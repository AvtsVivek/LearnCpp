#include <iostream>
#include "point.h"

int main()
{

    Point p1(10, 10);
    Point p2(20, 20);
    // Point p3{p1 + p2}; // opearator+(p1,p2);
    Point p3{operator+(p1, p2)};

    Point p4{p2 + Point(20, 20)};

    Point p5 = operator+(p1, Point(40, 40));

    Point p6 = Point(5, 25) + Point(55, 35);

    Point p7{p1 + p2 + Point(40, 40)};

    std::cout << "p3 : ";

    p3.print_info();

    std::cout << "p4 : " << p4.get_point_info() << std::endl;
    std::cout << "p5 : " << p5.get_point_info() << std::endl;
    std::cout << "p6 : " << p6.get_point_info() << std::endl;
    std::cout << "p7 : " << p7.get_point_info() << std::endl;

    return 0;
}