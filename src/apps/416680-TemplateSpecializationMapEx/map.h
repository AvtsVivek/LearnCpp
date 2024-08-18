#include <iostream>
#include <cstring>

template <typename T>
struct Map
{
	T m_key;
	T m_value;
	Map(T key, T value)
		: m_key(key), m_value(value)
	{
	}
	bool compare_to(const Map &other) const;

	void print_info() const
	{
		std::cout << "map [";
		std::cout << m_key << "," << m_value;
		std::cout << "]";
	}
};
template <typename T>
bool Map<T>::compare_to(const Map &other) const
{
	return (m_key == other.m_key) && (m_value == other.m_value);
}

// Select function specialization
template <>
bool Map<const char *>::compare_to(const Map &other) const;
