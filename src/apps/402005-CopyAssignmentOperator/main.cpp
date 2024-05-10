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

    p1 = p2 = p77;

    // p1.operator=(p2).operator=(p77);
    // p1.operator=(p2.operator=(p77));

    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;
    std::cout << "p77 : " << p77 << std::endl;

    // Change data
    p1.set_data(55);

    std::cout << "-----------" << std::endl;
    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;
    std::cout << "p77 : " << p77 << std::endl;

    //

    Point p3(30, 30, 30);

    std::cout << "Assigning p3 to p4 and p5." << std::endl;
    std::cout << "Point p4 = p3; and Point p5(p3);" << std::endl;

    Point p4 = p3;
    Point p5(p3);

    std::cout << "p3 : " << p3 << std::endl;
    std::cout << "p4 : " << p4 << std::endl;
    std::cout << "p5 : " << p5 << std::endl;

    std::cout << "Set data on P3. p3.set_data(77)" << std::endl;

    p3.set_data(999);

    std::cout << "p3 : " << p3 << std::endl;
    std::cout << "p4 : " << p4 << std::endl;
    std::cout << "p5 : " << p5 << std::endl;

    std::cout << "Done!" << std::endl;

    return 0;
}