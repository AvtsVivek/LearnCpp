#include <iostream>
#include <memory>

int main()
{
    // Showing that that automatic local variables are destroyed when
    // we are thrown out of a try block

    //.Throwing a pointer : recipe for disaster
    // Throwing pointers is a recipe for disaster, as by the time
    // the catch block executes, the memory allocated and used in try
    // block is pointing to invalid data. The program may seem to work
    // sometimes but there are no guarantees you'll always get valid stuff
    // if you dereference pointers allocated in the try block.

    int c{0};

    try
    {
        int var{55};
        int *int_ptr = &var;

        if (c == 0)
        {
            std::cout << "We are about to throw a pointer ..." << std::endl;
            throw int_ptr;
        }
        std::cout << "Keeping doing some other things..." << std::endl;
    }
    catch (int *ex)
    {
        std::cout << "Something went wrong. Exception thrown : " << *ex << std::endl;
    }

    std::cout << "END." << std::endl;

    return 0;
}