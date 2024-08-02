
#include <iostream>

class Base
{
protected:
	int m_x{};

public:
	Base(int x) : m_x(x) { ++m_count; }
	static unsigned int m_count;

	virtual void print() const
	{
		std::cout << "data[ x : " << m_x
				  << "]";
	}
};

class Derived : public Base
{
private:
	int m_y{};

public:
	Derived(int x, int y) : Base(x), m_y(y) { ++m_count; }
	static unsigned int m_count;

	virtual void print() const override
	{
		std::cout << "data[ x: " << m_x
				  << " y:" << m_y
				  << "]";
	}
};

