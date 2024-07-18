#include <iostream>
#include "BaseDerived.h"

int main()
{

    Derived_1 d1;

    d1.m_z = 100;
    d1.m_c = 200;
    d1.m_3 = 300;
    d1.set_values(1, 2, 3, 4);
    d1.print();

    return 0;
}