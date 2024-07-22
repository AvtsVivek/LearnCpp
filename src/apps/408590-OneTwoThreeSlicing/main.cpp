#include <iostream>
#include "onetwothree.h"

int main()
{
	One one(1);
	Two two(10, 20);
	Three three(100, 200, 300);

	One base = one;
	base.print();
	std::cout << "\n";

	base = two;
	base.print();
	std::cout << "\n";

	base = three;
	base.print();

	return 0;
}