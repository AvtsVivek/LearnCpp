#include <iostream>
#include <memory>
#include "dog.h"

int main()
{

    // Can reset unique_ptr : releases memory and sets the pointer to nullptr
    // If you comment out the reset line, the destructor is called after the doing
    // something print out, if it's not commented out, we reset the pointer and the
    // destructor is called before the line : std::cout << "Doing something" << std::endl; SHOW THIS.

    std::unique_ptr<Dog> up_dog_13 = std::make_unique<Dog>("Dog13");
    std::cout << "About to call reset up_dog_13.reset(): " << std::endl;
    up_dog_13.reset(); // releases memory and sets pointer to nullptr
    std::cout << "reset done " << std::endl;
    // Can use unique pointer in if statement to see if it points somewhere valid
    if (up_dog_13)
    {
        std::cout << "up_dog_13 points somewhere valid : " << up_dog_13.get() << std::endl;
    }
    else
    {
        std::cout << "up_dog_13 points is null : " << up_dog_13.get() << std::endl;
    }

    return 0;
}