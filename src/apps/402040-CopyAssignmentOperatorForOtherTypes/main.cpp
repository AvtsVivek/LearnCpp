#include <iostream>
#include "point.h"
#include "car.h"

int main()
{

    Point p1(10, 10, 10);
    std::cout << "Point p1 before: " << p1 << std::endl;
    Car c1("red", 200.0);
    std::cout << "Car c1 before: " << c1 << std::endl;

    std::cout << "Now the assignment operator: p1 = c1; " << std::endl;
    p1 = c1;

    std::cout << "Point p1 after: " << p1 << std::endl;
    return 0;
}