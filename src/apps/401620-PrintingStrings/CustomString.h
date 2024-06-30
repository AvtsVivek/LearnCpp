#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <cstring>

namespace CU
{

	class CustomString
	{
		friend std::ostream &operator<<(std::ostream &out, const CU::CustomString &s);

	public:
		CustomString(const char *data, size_t size = 15)
		{
			m_data = new char[size];
			std::strcpy(m_data, data);
		}

		~CustomString()
		{
			delete[] m_data;
		}

	private:
		char *m_data{nullptr};
	};

	// YOUR CODE WILL GO BELOW THIS LINE
	// DON'T MODIFY ANYTHING ABOVE THIS LINE

	inline std::ostream &operator<<(std::ostream &out, const CU::CustomString &s)
	{
		out << s.m_data;
		return out;
	}

	// YOUR CODE WILL GO ABOVE THIS LINE
	// DON'T MODIFY ANYTHING BELOW THIS LINE
}

inline void use_cu_string(const CU::CustomString &s)
{
	std::cout << s;
}

#endif // _EXERCISE_H
