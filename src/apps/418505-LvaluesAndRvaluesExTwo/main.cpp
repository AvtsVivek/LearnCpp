#include <iostream>
struct Point
{
    double m_x;
    double m_y;
    Point() = delete;
    Point(double x, double y)
        : m_x(x), m_y(y) {}
};
Point operator+(const Point &left, const Point &right)
{
    Point tmp(left.m_x + right.m_x, left.m_y + right.m_y);
    return tmp;
}

int main()
{
    Point p1(10, 20);
    Point p2(100, 200);
    Point result = p1 + p2;
    std::cout << "&result : " << &(p1 + p2) << std::endl;

    return 0;
}