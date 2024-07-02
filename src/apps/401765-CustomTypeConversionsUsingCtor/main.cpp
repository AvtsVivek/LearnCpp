#include <iostream>
#include "point.h"
#include "number.h"

double sum(double a, double b)
{
    return a + b;
}
void use_point(const Point &p)
{
    std::cout << "Printing the point from use_point func : " << p << std::endl;
}

int main()
{

    Number n1(22);

    std::cout << n1 << std::endl;

    std::cout << (n1 + Number(23)) << std::endl;

    std::cout << "Casting: double d1 = double(n1); " << std::endl;

    double d1 = double(n1);

    std::cout << "d1 : " << d1 << std::endl;

    Number n2(10);

    double result = sum(static_cast<double>(n1), static_cast<double>(n2));

    std::cout << "result : " << result << std::endl;

    result = sum(double(n1), double(n2));

    std::cout << "result again : " << result << std::endl;

    // result = sum(n1, n2); // this does not work. This works only when you remove 'explicit' key word from the operator.

    std::cout << "result once again : " << result << std::endl;

    // Point p1 = Point(30); this does not work.

    use_point(static_cast<Point>(n1));

    use_point(Point(n2));

    return 0;
}
