#include "number.h"

Number::Number(int value) : m_wrapped_int(value)
{
}

// Comparison operators
bool Number::operator<(const Number &right_operand)
{
    return this->m_wrapped_int < right_operand.m_wrapped_int;
}

bool Number::operator<(const int &right_operand)
{
    return this->m_wrapped_int < right_operand;
}

Number::~Number()
{
}
