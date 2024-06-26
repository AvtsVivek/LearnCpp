#include "exercise.h"
#include <iostream>

int main()
{

    CU::Point_nD p1 {1.1, 2.2, 3.3};
    CU::Point_nD p2 {4.1, 5.2, 6.3};
    auto result = p1 + p2;
    result.print();

    std::cout << std::endl;

    CU::Point_nD p3 {1.1, 2.2, 3.3, 4.4};
    CU::Point_nD p4 {4.1, 5.2, 6.3, 5.5};
    result = p3 + p4;
    result.print();

    return 0;
}