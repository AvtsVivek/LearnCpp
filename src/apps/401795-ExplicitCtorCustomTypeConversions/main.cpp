#include <iostream>
#include "number.h"

int main()
{

    Number n1(22);
    std::cout << "n1 : " << n1 << std::endl;
    std::cout << "n1 + 2  : " << (n1 + 2) << std::endl; // The second operator is implicitly converted to a non number. 


    return 0;
}