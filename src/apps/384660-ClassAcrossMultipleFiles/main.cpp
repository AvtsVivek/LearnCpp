#include <iostream>
#include "cylinder.h"

int main()
{
    Cylinder cylinder1(10, 10);
    Cylinder cylinder2;
    std::cout << "volume : " << cylinder1.volume() << std::endl;
    std::cout << "volume : " << cylinder2.volume() << std::endl;

    return 0;
}