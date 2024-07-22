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
