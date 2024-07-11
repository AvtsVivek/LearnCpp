#include <iostream>
#include "point.h"

int main()
{
    // The lesson here is that if default memberwise comparison is working for you
    // you don't have to do operator== and operator!= separately. Just do operator== and default it,
    // and the compiler will generate operator!= for you.

    Point p1(1, 1);
    Point p2(2, 2);
    auto result1 = (p2 == p1);
    auto result2 = (p2 != p1);
    std::cout << std::boolalpha;
    std::cout << "result1 : " << result1 << std::endl;
    std::cout << "result2 : " << result2 << std::endl;
    return 0;
}
