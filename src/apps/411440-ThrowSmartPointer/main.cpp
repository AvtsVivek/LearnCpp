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
    // Potential memory leaks
    // The destructor for Item is never called when we're thrown out of the
    // try block, and memory is leaked.

    int d{0};
    try
    {
        std::shared_ptr<Item> item_ptr = std::make_shared<Item>();
        if (d == 0)
        {
            std::cout << "About to throw 0 ..." << std::endl;
            throw 0;
        }
        std::cout << "Keeping doing some other things..." << std::endl;
    }
    catch (int ex)
    {
        std::cout << "Something went wrong. Exception thrown : " << ex << std::endl;
    }

    std::cout << "END." << std::endl;

    return 0;
}