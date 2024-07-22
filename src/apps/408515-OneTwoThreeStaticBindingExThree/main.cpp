#include <iostream>
#include "onetwothree.h"

int main()
{

	One one(1);
	Two two(10, 20);
	Three three(100, 200, 300);

	One &base1 = one;
	base1.print();
	std::cout << "\n";

	One &base2 = two;
	base2.print();
	std::cout << "\n";

	One &base3 = three;
	base3.print();

	return 0;
}