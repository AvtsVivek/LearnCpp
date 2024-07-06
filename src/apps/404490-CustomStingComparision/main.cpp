#include <iostream>
#include "CustomString.h"

int main()
{
    CU::string a("Hello");
    CU::string b("World");

    std::cout << std::boolalpha;
    std::cout << "a > b : " << (a > "World") << std::endl;
    std::cout << "a > b : " << ("Hello" > b) << std::endl;

    std::cout << "a < b : " << (a < "World") << std::endl;
    std::cout << "a < b : " << ("Hello" < b) << std::endl;

    std::cout << "a >= b : " << (a >= "World") << std::endl;
    std::cout << "a >= b : " << ("Hello" >= b) << std::endl;

    std::cout << "a <= b : " << (a <= "World") << std::endl;
    std::cout << "a <= b : " << ("Hello" <= b) << std::endl;

    std::cout << "a == b : " << (a == "World") << std::endl;
    std::cout << "a == b : " << ("Hello" == b) << std::endl;

    std::cout << "a != b : " << (a != "World") << std::endl;
    std::cout << "a != b : " << ("Hello" != b) << std::endl;

    return 0;
}