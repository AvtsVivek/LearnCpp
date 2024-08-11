#include <iostream>

#include "multi_dim_point.h"

int main()
{

	Point<int, 3> point_3d;
	point_3d.set_value(0, 10);
	point_3d.set_value(1, 20);
	point_3d.set_value(2, 30);
	point_3d.print_info();

	std::cout << std::endl;

	Point<double, 2> point_2d;
	point_2d.set_value(0, 10.22);
	point_2d.set_value(1, 20.11);

	point_2d.print_info(); // print info
	std::cout << std::endl;
	std::cout << point_2d.get_value(0) << std::endl;
	std::cout << point_2d.get_value(1) << std::endl;
	return 0;
}
