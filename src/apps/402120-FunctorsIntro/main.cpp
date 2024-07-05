#include <iostream>
#include <string>
#include "Print.h"

int main()
{

    Print print;
    print("Vivek");
    do_something(print);
    std::cout << print("Vivek", "Koppula") << std::endl;

    return 0;
}