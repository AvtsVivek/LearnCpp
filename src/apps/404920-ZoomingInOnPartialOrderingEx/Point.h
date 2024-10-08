
#include <iostream>
#include <cmath>

// Valid comparable points are within the [100,100] bounds
class Point
{
public:
    Point(int x, int y) : m_x{x}, m_y{y}
    {
    }
    bool operator==(const Point &right) const
    {
        return length() == right.length();
    }
    std::partial_ordering operator<=>(const Point &right) const
    {
        if (is_within_bounds(*this) && is_within_bounds(right))
        {
            if (length() > right.length())
                return std::partial_ordering::greater;
            else if (length() < right.length())
                return std::partial_ordering::less;
            else
                return std::partial_ordering::equivalent;
        }
        return std::partial_ordering::unordered;
    }

private:
    bool is_within_bounds(const Point &p) const
    {
        if ((std::abs(p.m_x) < 100) && (std::abs(p.m_y) < 100))
            return true;
        return false;
    }
    double length() const
    {
        return sqrt(pow(m_x - 0, 2) + pow(m_y - 0, 2) * 1.0);
    }
    int m_x{};
    int m_y{};
};
