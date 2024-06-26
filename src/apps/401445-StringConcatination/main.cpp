#include "exercise.h"
#include <iostream>

int main()
{

    CU::string full_name("Vivek ");
    CU::string first_name{"Koppula"};
    auto result = full_name + first_name;
    std::cout << result.c_str() << std::endl;

    return 0;
}