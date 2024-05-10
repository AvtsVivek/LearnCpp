#include <iostream>
#include "number.h"

int main()
{

    Number n1(10);
    Number n2(20);

    std::cout << "n1 " << n1 << std::endl;
    std::cout << "n2 " << n2 << std::endl;

    std::cout << std::boolalpha;
    std::cout << "n1 < n2 : " << (n1 < n2) << std::endl;
    std::cout << "15 < n2 : " << (15 < n2) << std::endl;
    std::cout << "n1 < 25 : " << (n1 < 25) << std::endl;

    return 0;
}