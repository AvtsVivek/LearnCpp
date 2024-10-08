#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <string>
#include <sstream>

class Point
{
public:
	Point() = default;
	Point(double x, double y) : m_x(x), m_y(y)
	{
	}
	~Point() = default;

	// Member
	/*
	Point operator+(const Point& right_operand){
		return Point(this->m_x + right_operand.m_x ,
					  this->m_y + right_operand.m_y );
	}
	*/

	// p1.operator+(p2)
	Point operator+(const Point &right_operand);

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

#endif // POINT_H
