#include <iostream>

class A
{
protected:
    int m_x;
};

class B : public A
{
public:
    int m_y;
    void set_values(int x, int y, int z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }
    void print() const
    {
        std::cout << "x : " << m_x << ", y : " << m_y
                  << ", z : " << m_z << std::endl;
    }

private:
    int m_z;
};