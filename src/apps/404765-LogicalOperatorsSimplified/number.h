#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
class Number
{

    friend std::ostream &operator<<(std::ostream &out, const Number &number);

    // Comparison operators

public:
    Number() = delete;
    explicit Number(int value);

    // getter
    int get_wrapped_int() const
    {
        return m_wrapped_int;
    }

    auto operator<=>(const Number &right) const = default;
    auto operator<=>(int n) const
    {
        return m_wrapped_int <=> n;
    }
    bool operator==(const Number &right) const
    {
        return m_wrapped_int == right.m_wrapped_int;
    }
    bool operator==(int n)
    {
        return m_wrapped_int == n;
    }

    ~Number();

private:
    int m_wrapped_int{0};
};

#endif // NUMBER_H
