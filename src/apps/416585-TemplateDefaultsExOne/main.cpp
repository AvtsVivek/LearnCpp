#include <iostream>
#include "point.h"

int main()
{

	Point point_2d;
	point_2d.set_value(0, 10);
	point_2d.set_value(1, 20);
	point_2d.print_info();

	std::cout << "" << std::endl;

	Point<double, 3> point_3d;
	point_3d.set_value(0, 10.1);
	point_3d.set_value(1, 20.2);
	point_3d.set_value(2, 30.3);
	point_3d.print_info();

	return 0;
}