#include <iostream>
#include "boxcontainer.h"

int main()
{

	BoxContainer<int, 5> int_box; // One instance

	int_box.add(11);
	int_box.add(12);
	int_box.add(13);
	int_box.add(14);
	int_box.add(15);
	int_box.add(16);

	return 0;
}