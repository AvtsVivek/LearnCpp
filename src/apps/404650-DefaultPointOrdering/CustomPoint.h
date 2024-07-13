#include <iostream>

struct Point
{
    Point(double x, double y) : m_x(x), m_y(y)
    {
        std::cout << "ctor 2 is called : " << std::endl;
    }
    Point(double x) : Point(x, x)
    {
        std::cout << "ctor 1 is called : " << std::endl;
    }
    ~Point()
    {
    }
    /*
        . We default operator<=>
        . The compiler will use that to generate operators >,<,>=,<=
        . As a bonus, the compiler will give us a free operator==
        . And use that to generate operator!=
        . Hooraaay! With just one defaulted operator<=>, we can use all
            comparison operator with implicit conversions

    */
    auto operator<=>(const Point &other) const = default;
    double m_x{};
    double m_y{};
};
