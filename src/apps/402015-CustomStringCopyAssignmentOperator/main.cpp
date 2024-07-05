#include <iostream>
#include <cstring>
#include "CustomString.h"

int main()
{

    CU::string a("dog");
    CU::string b("cat");
    std::cout << "The string objects are as follows." << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    a = b;
    std::cout << "Now after the assignment 'a = b;'." << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    return 0;
}