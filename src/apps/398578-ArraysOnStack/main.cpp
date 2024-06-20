#include <iostream>
#include <memory>
#include "dog.h"

int main()
{
    // Array allocated on the stack
    //{
        std::cout << "Working with dog array on the stack" << std::endl;

        // Dog dog_array[7]{Dog("Dog1"), Dog("Dog2"), Dog("Dog3"), Dog("Dog4"), Dog("Dog5"), Dog("Dog6"), Dog("Dog7")};

        Dog dog_array[3]{Dog("Dog1"), Dog("Dog2"), Dog("Dog3")};

        for (size_t i{0}; i < std::size(dog_array); ++i)
            dog_array[i].print_info();
    //}

    std::cout << "Done!" << std::endl;

    return 0;
}