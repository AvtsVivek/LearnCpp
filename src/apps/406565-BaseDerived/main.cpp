#include "BseDerived.h"

int main()
{
    Derived d;
    d.m_c = 10;
    d.m_z = 20;
    d.set_values(1, 2, 3, 4);
    d.print();

    return 0;
}