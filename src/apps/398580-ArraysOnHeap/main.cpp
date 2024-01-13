#include <iostream>
#include <memory>
#include "dog.h"

int main()
{
    {
        Dog *p_dog_array_raw = new Dog[3]{Dog("Dog4"), Dog("Dog5"), Dog("Dog6")};

        for (size_t i{0}; i < 3; ++i)
        {
            p_dog_array_raw[i].print_info();
        }

        // If we don't delete explicitly like below. Have the line commented out, the memory
        // for the array won't be released and we won't see the destructors for Dogs 4~6 called.
        // If we delete explicitly, everything goes as expected and the destructors are called
        // when we exit this scope.

        delete[] p_dog_array_raw;
    }

    std::cout << "Done!" << std::endl;

    return 0;
}