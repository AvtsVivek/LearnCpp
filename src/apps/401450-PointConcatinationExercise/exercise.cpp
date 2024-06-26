#include "exercise.h"

// YOUR CODE MAY ALSO BELOW THIS LINE
// DON'T MODIFY ANYTHING ABOVE THIS LINE

namespace CU
{
	Point_nD operator+(const Point_nD &left_operand, const Point_nD &right_operand)
	{
		Point_nD tmp(left_operand);
		for (unsigned int i{}; i < left_operand.size(); ++i)
		{
			tmp.set(i, tmp.at(i) + right_operand.at(i));
		}
		return tmp;
	}
}

// YOUR CODE MAY ALSO GO ABOVE THIS LINE
// DON'T MODIFY ANYTHING BELOW THIS LINE
