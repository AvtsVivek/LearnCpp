#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

class One
{
public:
	One()
	{
		std::cout << "1";
	}
};

class Two : public One
{
public:
	Two()
	{
		std::cout << "2";
	}
};

class Three : public Two
{
public:
	Three()
	{
		std::cout << "3";
	}
};

inline void do_stuff()
{
	Three t;
}

#endif // _EXERCISE_H
