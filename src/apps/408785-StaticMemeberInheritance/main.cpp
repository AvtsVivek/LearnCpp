#include <iostream>
#include "base_derived.h"

int main()
{
	Base b1(10);
	Base b2(20);
	std::cout << "base count : " << Base::m_count << std::endl;
	Derived d1(30, 40);
	Derived d2(50, 60);
	std::cout << "base count : " << Base::m_count << std::endl;
	std::cout << "derived count : " << Derived::m_count << std::endl;

	// base count : 2 base count : 4 derived count : 2 as output.Furthermore,
	// 	your hierarchy will have a polymorphic print function that could be used like below

	Base b3(10);
	Base b4(20);
	Derived d3(30, 40);
	Derived d4(50, 60);

	Base *b_ptr3 = &b3;
	Base *b_ptr4 = &d4;

	b_ptr3->print();
	std::cout << "\n";
	b_ptr4->print();

	std::cout << std::endl << " ----------- "  << std::endl;

	return 0;
}