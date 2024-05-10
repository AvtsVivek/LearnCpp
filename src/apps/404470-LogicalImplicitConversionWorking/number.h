#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
class Number
{
    // Comparison operators
    friend std::ostream &operator<<(std::ostream &out, const Number &number);

public:
    Number() = default;
    explicit Number(int value);

    // getter
    int get_wrapped_int() const
    {
        return m_wrapped_int;
    }

    // Comparison operators
    bool operator<(const Number &right_operand);

    ~Number();

private:
    int m_wrapped_int{0};
};

inline std::ostream &operator<<(std::ostream &os, const Number &number)
{
    os << "Number : " << number.m_wrapped_int << "";
    return os;
}

#endif // NUMBER_H
