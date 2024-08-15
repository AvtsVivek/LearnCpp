#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

// YOUR CODE WILL GO BELOW THIS LINE
// DON'T MODIFY ANYTHING ABOVE THIS LINE

template <typename T = int, unsigned int size = 10>
class Point
{
	T m_components[size];

public:
	T get_value(unsigned int index) const
	{
		return m_components[index];
	}
	void set_value(unsigned int index, T value)
	{
		m_components[index] = value;
	}
	void print_info() const
	{
		std::cout << "point : [ ";
		for (unsigned int i{0}; i < size; ++i)
		{
			std::cout << m_components[i] << " ";
		}
		std::cout << "]";
	}
	unsigned int get_size() const
	{
		return size;
	}
};

// YOUR CODE WILL GO ABOVE THIS LINE
// DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H
