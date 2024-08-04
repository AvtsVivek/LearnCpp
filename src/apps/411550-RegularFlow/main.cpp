#include <iostream>

// Declarations
void f1();
void f2();
void f3();

int main()
{

    f1();

    std::cout << "END." << std::endl;

    return 0;
}

// Definitions
// Regular flow

void f1()
{
    std::cout << "Starting f1()" << std::endl;
    f2();
    std::cout << "Ending f1()" << std::endl;
}

void f2()
{
    std::cout << "Starting f2()" << std::endl;
    f3();
    std::cout << "Ending f2()" << std::endl;
}

void f3()
{
    std::cout << "Starting f3()" << std::endl;
    std::cout << "Ending f3()" << std::endl;
}
