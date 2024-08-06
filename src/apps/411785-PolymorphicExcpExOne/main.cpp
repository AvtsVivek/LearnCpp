#include <iostream>
#include "exceptions.h"

int main()
{

    try
    {
        throw SmallError("He didn't shave the beard");
    }

    catch (const SomethingIsWrong ex)
    {
        std::cout << "SomethingIsWrong Exception cought : " << ex.what() << std::endl;
    }
    return 0;
}