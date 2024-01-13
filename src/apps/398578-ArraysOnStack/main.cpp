#include <iostream>
#include <memory>
#include "dog.h"

int main()
{
    // Array allocated on the stack
    {
        std::cout << "Working with dog array on the stack" << std::endl;
        Dog dog_array[3]{Dog("Dog1"), Dog("Dog2"), Dog("Dog3")};

        for (size_t i{0}; i < 3; ++i)
        
            dog_array[i].print_info();
        
    }

    std::cout << "Done!" << std::endl;

    return 0;
}