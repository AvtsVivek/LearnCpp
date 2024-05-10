#ifndef POINT_H
#define POINT_H
#include <iostream>

class Car; // Forward declaration

class Point
{
	friend std::ostream &operator<<(std::ostream &os, const Point &p);

public:
	Point() = default;
	Point(double x, double y, int data) : m_x(x), m_y(y), p_data(new int(data))
	{
	}
	Point(const Point &p); // Copy constructor

	void operator=(const Car &c);

	~Point() = default;

private:
	double m_x{};
	double m_y{};
	int *p_data;
};

inline std::ostream &operator<<(std::ostream &os, const Point &p)
{
	os << "Point [ x : " << p.m_x << ", y : " << p.m_y
	   << " data : " << *(p.p_data) << "]";
	return os;
}

#endif // POINT_H
