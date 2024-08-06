#include <iostream>

class Item
{
public:
    Item()
    {
        std::cout << "From Item ctro..." << std::endl;
    }
    ~Item() noexcept(false)
    {
        // try
        // {
        //     throw 0;
        // }
        // catch (int ex)
        // {
        //     throw;
        // }
        std::cout << "From Item destructor ... about to throw .. " << std::endl;
        throw 0;
    }
};

int main()
{
    try
    {
        std::cout << "HEre we go..." << std::endl;
        Item item;
        std::cout << "About to exit the try block. " << std::endl;
    }
    catch (int ex)
    {
        std::cout << "main() : Catching int exception" << std::endl;
    }

    std::cout << "END." << std::endl;
    return 0;
}