#include <iostream>

void trouble()
{
    throw 10/3;
}

void do_stuff()
{
    try
    {
        try
        {
            trouble();
        }
        catch (double ex)
        {
            std::cout << "Handling double exception" << std::endl;
        }
        catch (int ex)
        {
            std::cout << "Handling int exception inside" << std::endl;
        }
    }
    catch (int ex)
    {
        std::cout << "Handling int exception outside" << std::endl;
    }
}

int main()
{
    do_stuff();
    return 0;
}