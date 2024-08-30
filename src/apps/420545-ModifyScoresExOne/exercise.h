#ifndef EXERCISE_H
#define EXERCISE_H

// YOUR CODE WILL GO BELOW THIS LINE
// DON'T MODIFY ANYTHING ABOVE THIS LINE
inline void modify(double data[], double (*modifier)(double value), unsigned int size)
{
	for (unsigned int i{}; i < size; ++i)
	{
		data[i] = modifier(data[i]);
	}
}

inline double multiply_by_2(double value)
{
	return value * 2;
}

inline double add_1(double value)
{
	return value + 1;
}

// YOUR CODE WILL GO ABOVE THIS LINE
// DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H
