#include <iostream>
#include "exercise.h"

int main()
{

	double scores[]{10.1, 20.3, 30.2, 40.3};
	auto result = f_ptr(scores, 4);
	std::cout << "sum : " << result << std::endl;

	return 0;
}