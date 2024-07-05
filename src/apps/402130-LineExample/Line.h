#include <cmath>
#include "Point.h"

class Line
{
public:
    Line(const Point &start, const Point &end)
        : m_start(start), m_end(end) {}

    double operator()() const
    {
        return std::sqrt(std::pow(m_end.m_x - m_start.m_x, 2) + std::pow(m_end.m_y - m_start.m_y, 2) * 1.0);
    }

private:
    Point m_start;
    Point m_end;
};
