#ifndef EXERCISE_H
#define EXERCISE_H

inline double sum(const double data[], unsigned int size)
{
	double sum{};
	for (unsigned int i{}; i < size; ++i)
	{
		sum += data[i];
	}
	return sum;
}

// YOUR CODE WILL GO BELOW THIS LINE
// DON'T MODIFY ANYTHING ABOVE THIS LINE

// THE static KEYWORD HERE IS TO MARK THE f_ptr VARIABLE FOR INTERNAL LINKAGE.

static double (*f_ptr)(const double data[], unsigned int size) = sum;

// YOUR CODE WILL GO ABOVE THIS LINE
// DON'T MODIFY ANYTHING ABOVE THIS LINE

#endif // _EXERCISE_H
