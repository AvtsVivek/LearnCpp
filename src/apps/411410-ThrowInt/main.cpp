#include <iostream>
#include <memory>

class Item
{
public:
    Item()
    {
        std::cout << "Item constructor called" << std::endl;
    }

    ~Item()
    {
        std::cout << "Item destructor called" << std::endl;
    }
};

int main()
{

    // Showing that that automatic local variables are destroyed when
    // we are thrown out of a try block

    int a{10};
    int b{0};

    try
    {
        Item item; // When exception is thrown, control immediately exits the try block
                   // an automatic local variables are released
                   // But pointers may leak memory.

        if (b == 0)
        {
            std::cout << "We are about to throw..." << std::endl;
            throw 110;
        }

        a++; // Just using a and b in here, could use them to do anything.
        b++;

        std::cout << "Code that executes when things are fine" << std::endl;
    }
    catch (int ex)
    {
        std::cout << "Something went wrong. Exception thrown : " << ex << std::endl;
    }

    std::cout << "Done!" << std::endl;

    return 0;
}