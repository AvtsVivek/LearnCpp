#ifndef POINT_H
#define POINT_H
#include <iostream>

// Forward declare the friends
template <typename T, unsigned int size = 2>
class Point;
template <typename T, unsigned int size>
std::ostream &operator<<(std::ostream &, const Point<T, size> &);

template <typename T = int, unsigned int size>
class Point
{
	friend std::ostream &operator<< <>(std::ostream &, const Point<T, size> &);
	T m_components[size];

public:
	unsigned int get_size() const
	{
		return size;
	}
	void set_value(unsigned int index, T value)
	{
		m_components[index] = value;
	}
};

// THE REAL TRAP HERE IS TO BE ABLE TO HANDLE MULTIPLE TEMPLATE PARAMETERS!
template <typename T, unsigned int size>
inline std::ostream &operator<<(std::ostream &out, const Point<T, size> &operand)
{

	out << "Point : [ dimension :  " << size
		<< ", components : ";
	for (size_t i{0}; i < size; ++i)
	{
		out << operand.m_components[i] << " ";
	}
	out << "]";

	return out;
}
#endif // POINT_H