#include <iostream>
#include "ab.h"

int main()
{
    std::cout << "Here we go... " << std::endl;

    B b;
    b.set_values(10, 20, 30);
    b.print();

    return 0;
}
