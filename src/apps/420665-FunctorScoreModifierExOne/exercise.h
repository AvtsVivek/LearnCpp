#ifndef EXERCISE_H
#define EXERCISE_H

// YOUR CODE WILL GO BELOW THIS LINE
// DON'T MODIFY ANYTHING ABOVE THIS LINE

template <typename Modifier>
void modify(double data[], Modifier modifier, unsigned int size)
{
	for (unsigned int i{}; i < size; ++i)
	{
		data[i] = modifier(data[i]);
	}
}

struct Multiply_by_2
{
	double operator()(double value) const
	{
		return value * 2;
	}
};
struct Add_1
{
	double operator()(double value) const
	{
		return value + 1;
	}
};

// YOUR CODE WILL GO ABOVE THIS LINE
// DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H
