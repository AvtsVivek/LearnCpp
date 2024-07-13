
#include <iostream>

struct Integer
{

    Integer() = default;
    Integer(int n) : m_wraped_int{n}
    {
    }
    int get() const
    {
        return m_wraped_int;
    }

    bool operator==(const Integer &right) const
    {
        return (m_wraped_int == right.m_wraped_int);
    }

    bool operator<(const Integer &right) const
    {
        return (m_wraped_int < right.m_wraped_int);
    }

private:
    int m_wraped_int{};
};
