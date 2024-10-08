#include <iostream>
#include "Item.h"


int main()
{

    Item i1{1, 2, 5};
    Item i2{1, 2, 4};

    std::cout << std::boolalpha;

    std::cout << " Default ordering with spaceship : " << std::endl;

    auto result1 = (i1 > i2);
    auto result1SpaceShip = ((i1 <=> i2) > 0); // A possible option for the compiler magic
    std::cout << " i1 > i2 : " << result1 << std::endl;
    std::cout << " i1 > i2 : using SpaceShip: " << result1SpaceShip << std::endl;
    std::cout << " " << std::endl;

    auto result2 = (i1 >= i2);
    auto result2SpaceShip = ((i1 <=> i2) >= 0); // A possible option for the compiler magic
    std::cout << " i1 >= i2 : " << result2 << std::endl;
    std::cout << " i1 >= i2 : using SpaceShip: " << result2SpaceShip << std::endl;
    std::cout << " " << std::endl;

    auto result3 = (i1 == i2);
    auto result3SpaceShip = ((i1 <=> i2) == 0);
    std::cout << " i1 == i2 : " << result3 << std::endl;
    std::cout << " i1 == i2 : using SpaceShip: " << result3SpaceShip << std::endl;
    std::cout << " " << std::endl;

    auto result4 = (i1 != i2);
    auto result4SpaceShip = ((i1 <=> i2) != 0);
    std::cout << " i1 != i2 : " << result4 << std::endl;
    std::cout << " i1 != i2 : SpaceShip: " << result4SpaceShip << std::endl;
    std::cout << " " << std::endl;

    auto result5 = (i1 < i2);
    auto result5SpaceShip = ((i1 <=> i2) < 0); // A possible option for the compiler magic
    std::cout << " i1 < i2 : " << result5 << std::endl;
    std::cout << " i1 < i2 : SpaceShip: " << result5SpaceShip << std::endl;
    std::cout << " " << std::endl;

    auto result6 = (i1 <= i2);
    auto result6SpaceShip = ((i1 <=> i2) <= 0); // A possible option for the compiler magic
    std::cout << " i1 <= i2 : " << result6 << std::endl;
    std::cout << " i1 <= i2 : SpaceShip: " << result6SpaceShip << std::endl;
    std::cout << " " << std::endl;

    // Implicit conversions

    auto result7 = (i1 > 20);
    auto result8 = (20 < i1); // ( 20 <=> i1) < 0
    auto result9 = (i2 != 12);
    auto result10 = (12 != i2);

    return 0;
}