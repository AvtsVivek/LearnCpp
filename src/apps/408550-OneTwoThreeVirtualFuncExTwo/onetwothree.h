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
		std::cout << "data [one:" << m_1
				  << "]";
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

	void print() const
	{
		std::cout << "data [one:" << m_1
				  << " two:" << m_2
				  << "]";
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

	void print() const
	{
		std::cout << "data [one:" << m_1
				  << " two:" << m_2
				  << " three:" << m_3 << "]";
	}

protected:
	int m_3{};
};

inline void do_stuff()
{
	// YOU WILL PUT YOUR CODE BELOW THIS LINE
	// DON'T MODIFY ANYTHING ABOVE THIS LINE

	One one(1);
	Two two(10, 20);
	Three three(100, 200, 300);

	// Wrong
	/*
	One& base{one};
	one.print();
	std::cout << "\n";

	base = two;
	base.print();
	std::cout << "\n";

	base = three;
	base.print();
	*/

	// Right
	// THE TRICK HERE IS THAT A REFERENCE CAN'T BE CHANGED TO REFERENCE SOMETHING ELSE
	// IF YOU ASSIGN TO A REFERENCE WE WERE DOING IN THE COMMENTED OUT CODE ABOVE,YOU'LLBE
	// JUST CHANGING THE VALUE AT THE REFERENCED ADDRESS, NOT MAKING THE REFERENCE POINT SOMEWHERE ELSE.
	// base IS INITIALIZED TO POINT TO A One object AND IT HAS NO CONCEPT OF m_2 OR m_3. IF YOU ASSIGN A Two
	// OBJECT TO base, THE COMPILER WILL DO THE BEST IT CAN, AND THAT'S JUST GRABBING THE m_1 VALUE IN THE
	// two OBJECT AND ASSIGNING THAT TO THE m_1 VALUE IN THE OBJECT REFERENCED BY base.
	// IF WE WANT POLYMOLPHISM TO WORK HERE THROUGH REFERENCES, WE HAVE NO CHOICE BUT TO SET UP SEPARATE
	// REFERENCES FOR one, two and three. JUST LIKE WE'RE DOING BELOW
	One &base1 = one;
	base1.print();
	std::cout << "\n";

	One &base2 = two;
	base2.print();
	std::cout << "\n";

	One &base3 = three;
	base3.print();
	// YOU WILL PUT  YOUR CODE ABOVE THIS LINE
	// DON'T MODIFY ANYTHING BELOW THIS LINE
}

#endif // _EXERCISE_H
