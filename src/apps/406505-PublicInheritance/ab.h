#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>

class A
{
private:
    int m_x;

public:
    // Setters
    void set_x(int x)
    {
        m_x = x;
    }

    // Getters
    int get_x() const
    {
        return m_x;
    }
};

class B : public A
{
public:
    int m_y;
    void set_values(int x, int y, int z)
    {
        // m_x = x;
        set_x(x);
        m_y = y;
        m_z = z;
    }
    void print() const
    {
        std::cout << "x : " << get_x() << ", y : " << m_y
                  << ", z : " << m_z;
    }

private:
    int m_z;
};

#endif // _EXERCISE_H