#include <iostream>

int main()
{

    // Exceptions allow us to recover from these errors and give
    // our program a chance to continue running.

    // Integer division

    const int a{45};
    const int b{0};
    int result;

    try
    {
        if (b == 0)
        {
            std::cout << "Throwing the exception 0 " << std::endl;
            throw 0;
        }
        result = a / b;
    }
    catch (std::string ex)
    {
        // Some processing
        std::cout << "Something went wrong : " << ex << std::endl;
    }

    catch (int ex)
    {
        std::cout << "Integer division detected, ex  : " << ex << std::endl;
    }

    std::cout << "END." << std::endl;

    return 0;
}