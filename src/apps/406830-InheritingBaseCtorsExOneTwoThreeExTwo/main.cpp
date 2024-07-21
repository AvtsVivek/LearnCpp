#include <iostream>
#include "onetwothree.h"

int main()
{
	Three t1(11, 2);
	Three t2(1, 1);
	t2 = t1;
	t2.print();

	return 0;
}