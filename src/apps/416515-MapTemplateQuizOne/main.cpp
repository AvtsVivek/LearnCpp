#include <iostream>

template <typename T, typename P>
struct Map
{
	T m_key;
	P m_value;
	Map(T key, P value)
		: m_key(key), m_value(value)
	{
	}
	void print_info() const
	{
		std::cout << "key: " << m_key << " , value : " << m_value << std::endl;
	}
	~Map() {}
};

int main()
{
	Map map1(111222, std::string{"Steve Murphy"});
	std::cout << "key : " << map1.m_key << std::endl;
	std::cout << "value : " << map1.m_value << std::endl;

	return 0;
}