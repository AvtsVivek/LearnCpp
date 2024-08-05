#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <string>

class DividebyZeroException
{
public:
    DividebyZeroException(int num, int den)
        : m_num(num), m_den(den)
    {
    }

    const std::string what() const
    {
        std::string msg = std::string("Error : Trying to divide ") + std::to_string(m_num) + std::string(" by ") + std::to_string(m_den);
        return msg;
    }

private:
    int m_num;
    int m_den;
};

int divide(int a, int b);
void trouble(int num);

#endif // _EXERCISE_H
