#include <iostream>
#include <memory>

int main()
{

    int a{10};
    int b{0};

    std::cout << "We are about to throw..." << std::endl;
    throw 110;

    a++; // Just using a and b in here, could use them to do anything.
    b++;

    std::cout << "Code that executes when things are fine" << std::endl;

    std::cout << "Done!" << std::endl;

    return 0;
}