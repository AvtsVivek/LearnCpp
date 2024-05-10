#include <cmath>
#include "point.h"
#include "car.h"

void Point::operator=(const Car &c)
{
    m_x = m_y = c.get_speed();
    *p_data = c.get_speed();
}
