#include <iostream>
#include "point.h"
#include "car.h"

int main()
{

    Point p1(10, 10, 10);
    std::cout << "p1 before: " << p1 << std::endl;
    Car c1("red", 200.0);

    p1 = c1;

    std::cout << "p1 after: " << p1 << std::endl;

    return 0;
}