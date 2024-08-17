// map.h

#include <iostream>
#include <cstring>

template <>
struct Map<const char *>
{
	const char *m_key;
	const char *m_value;
	Map(const char *key, const char *value)
		: m_key(key), m_value(value)
	{
	}

	bool compare_to(const Map &other) const
	{
		return (std::strcmp(m_key, other.m_key) == 0) && (std::strcmp(m_value, other.m_value) == 0);
	}
	void print_info() const
	{
		std::cout << "map [";
		std::cout << m_key << "," << m_value;
		std::cout << "]";
	}
};
