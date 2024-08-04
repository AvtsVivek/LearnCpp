#include <iostream>

void trouble()
{
    throw 1;
}

void one()
{
    std::cout << "1 starting" << std::endl;
    trouble();
    std::cout << "1 ending" << std::endl;
}
void two()
{
    std::cout << "2 starting" << std::endl;
    one();
    std::cout << "2 ending" << std::endl;
}
void three()
{
    std::cout << "3 starting" << std::endl;
    two();
    std::cout << "3 ending" << std::endl;
}

void do_stuff()
{
    try
    {
        three();
    }
    catch (int ex)
    {
        std::cout << "Handling exception from trouble()" << std::endl;
    }
}

int main()
{
    do_stuff();
    return 0;
}