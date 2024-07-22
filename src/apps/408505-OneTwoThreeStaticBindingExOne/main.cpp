#include <iostream>
#include "onetwothree.h"

int main()
{
	One one(1);
	Two two(10, 20);
	Three three(100, 200, 300);

	one.print();
	std::cout << "\n";
	two.print();
	std::cout << "\n";
	three.print();

	return 0;
}