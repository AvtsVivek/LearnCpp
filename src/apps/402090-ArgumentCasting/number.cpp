#include "number.h"
#include "point.h"

Number::Number(int value) : m_wrapped_int(value)
{
}

Number::operator Point() const
{
    std::cout << "Using type conversion from Number to Point" << std::endl;
    return Point(static_cast<double>(m_wrapped_int),
                 static_cast<double>(m_wrapped_int));
}

Number::~Number()
{
}
