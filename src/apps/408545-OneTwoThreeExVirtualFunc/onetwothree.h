#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>
class One
{
public:
	One(int one) : m_1(one)
	{
	}

	virtual void print() const
	{
		std::cout << "data [one:" << m_1 << "]";
	}

protected:
	int m_1{};
};

class Two : public One
{
public:
	Two(int one, int two) : One(one), m_2(two)
	{
	}

protected:
	int m_2{};
};

class Three : public Two
{
public:
	Three(int one, int two, int three) : Two(one, two), m_3(three)
	{
	}

protected:
	int m_3{};
};

#endif // _EXERCISE_H
