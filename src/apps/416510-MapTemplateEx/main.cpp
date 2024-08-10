#include <iostream>
#include "map.h"

int main()
{
	Map map1(111222, std::string{"Vivek Koppula"});

	std::cout << "key : " << map1.m_key << std::endl;

	std::cout << "value : " << map1.m_value << std::endl;

	std::cout << "END." << std::endl;

	return 0;
}