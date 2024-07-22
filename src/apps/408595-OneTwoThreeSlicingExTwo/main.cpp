#include <iostream>
#include "onetwothree.h"

int main()
{
	One one(1);
	Two two(10, 20);
	Three three(100, 200, 300);

	One base = three; // Slicing off Three info

	One *base_ptr{&base};
	base_ptr->print();

	// Pointers
	/*
	One* base{};

	base = &one;
	base->print();
	std::cout << "\n";

	base = &two;
	base->print();
	std::cout << "\n";

	base = &three;
	base->print();
	*/

	// References
	/*
	One& base1 = one;
	base1.print();
	std::cout << "\n";

	One& base2 = two;
	base2.print();
	std::cout << "\n";

	One& base3 = three;
	base3.print();
	*/

	return 0;
}