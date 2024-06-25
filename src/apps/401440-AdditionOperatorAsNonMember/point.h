#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <sstream>

class Point
{
	friend Point operator+(const Point &left, const Point &right);

public:
	Point() = default;
	Point(double x, double y) : m_x(x), m_y(y)
	{
	}
	~Point() = default;

	void print_info()
	{
		std::cout << "Point [ x : " << m_x << ", y : " << m_y << "]" << std::endl;
	}

	std::string get_point_info()
	{
		buffer << "Point [ x : " << m_x << ", y : " << m_y << "]";
		return buffer.str();
	}

private:
	double length() const; // Function to calculate distance from the point(0,0)
	std::ostringstream buffer;

private:
	double m_x{};
	double m_y{};
};

// Free standing global function
inline Point operator+(const Point &left, const Point &right)
{
	return Point(left.m_x + right.m_x, left.m_y + right.m_y);
}

#endif // POINT_H
