#include <iostream>

int main()
{
    auto firstAutoVar{1234u}; // Declare and initialize with type deduction
    auto secondAutoVar{1234u}; // Declare and initialize with type deduction

    // Runtime errors
    firstAutoVar = -22; // Assign negative number. DANGER!

    std::cout << "firstAutoVar : " << firstAutoVar << std::endl;
    std::cout << "secondAutoVar : " << secondAutoVar << std::endl;
    return 0;
}