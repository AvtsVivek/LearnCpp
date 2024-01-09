#include <iostream>
#include <memory>
#include "dog.h"

int main()
{

    // Can however move the pointer.

    std::unique_ptr<Dog> up_dog_11 = std::make_unique<Dog>("Dog11");
    {
        std::cout << "up_dog_11 before : " << up_dog_11.get() << std::endl;
        std::unique_ptr<Dog> up_dog_12 = std::move(up_dog_11); // Now up_dog_12 manages Dog11
                                                               // and up_dog_11 points to nothing(nullptr)
        up_dog_12->print_dog();
        std::cout << "Dog12 memory address : " << up_dog_12.get() << std::endl;

        std::cout << "up_dog_11 is now nullptr : " << up_dog_11.get() << std::endl;
        if (up_dog_11)
        {
            std::cout << "Pointer11 pointing to something valid" << std::endl;
        }
        else
        {
            std::cout << "Pointer11 point to nullpter" << std::endl;
        }
    }

    std::cout << "Hitting the outside scope" << std::endl;

    return 0;
}