#include <iostream>
#include "boxcontainer.h"

int main()
{

	BoxContainer box1(15);
	box1.dummy_initialize();

	std::cout << "1 ... " << std::endl;

	std::cout << "box1 : " << box1 << std::endl;

	std::cout << "&box1 : " << &box1 << std::endl;
	std::cout << " " << std::endl;
	std::cout << "2 ... " << std::endl;
	BoxContainer box2(box1);
	std::cout << "box2 : " << box2 << std::endl;
	std::cout << "&box2 : " << &box2 << std::endl;

	return 0;
}