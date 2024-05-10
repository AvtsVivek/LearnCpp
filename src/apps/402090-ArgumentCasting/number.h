#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
class Point;
class Number
{

public:
    Number() = default;
    Number(int value);

    // Type conversion operator from Number to Point
    operator Point() const;

    // getter
    int get_wrapped_int() const
    {
        return m_wrapped_int;
    }

    ~Number();

private:
    int m_wrapped_int{0};
};

#endif // NUMBER_H
