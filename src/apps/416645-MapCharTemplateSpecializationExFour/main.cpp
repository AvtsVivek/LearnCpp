
// main.cpp

#include <iostream>
#include "map.h"

int main()
{
    Map<int> m1(11, 22);
    Map<int> m2(11, 22);
    auto result = m1.compare_to(m2);
    std::cout << "result : " << std::boolalpha << result << std::endl;
    m1.print_info();

    return 0;
}