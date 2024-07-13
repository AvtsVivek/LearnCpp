#include <iostream>
#include "Item.h"


int main()
{
    Item i1{1, 2, 5};
    Item i2{1, 2, 4};

    std::cout << std::boolalpha;

    // auto result1 = (i1 > i2);
    auto result1 = ((i1 <=> i2) > 0); // A possible option for the compiler magic
    std::cout << " i1 > i2 : " << result1 << std::endl;

    // auto result2 = (i1 >= i2);
    auto result2 = ((i1 <=> i2) >= 0); // A possible option for the compiler magic
    std::cout << " i1 >= i2 : " << result2 << std::endl;

    auto result3 = (i1 == i2);
    std::cout << " i1 == i2 : " << result3 << std::endl;

    auto result4 = (i1 != i2);
    std::cout << " i1 != i2 : " << result4 << std::endl;

    // auto result5 = (i1 < i2);
    auto result5 = ((i1 <=> i2) < 0); // A possible option for the compiler magic
    std::cout << " i1 < i2 : " << result5 << std::endl;

    // auto result6 = (i1 <= i2);
    auto result6 = ((i1 <=> i2) <= 0); // A possible option for the compiler magic
    std::cout << " i1 <= i2 : " << result6 << std::endl;

    // Implicit conversions
    auto result7 = (i1 > 20);
    auto result8 = (20 < i1); // ( 20 <=> i1) < 0
    auto result9 = (i2 != 12);
    auto result10 = (12 != i2);

    return 0;
}