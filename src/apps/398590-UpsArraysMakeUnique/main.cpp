#include <iostream>
#include <memory>
#include "dog.h"

int main()
{

    // Array allocated on the heap with unique_ptr. Releases space for array automatically
    {

        auto arr_ptr = std::make_unique<Dog[]>(3); // Works. Can't initialize individual elements
        // auto arr_ptr = std::make_unique<Dog[]>(3) {Dog("Dog7"), Dog("Dog8") , Dog("Dog9")};//Compiler error
        // auto arr_ptr = std::make_unique<Dog[]>{Dog("Dog7"), Dog("Dog8") , Dog("Dog9")};//Compiler error

        for (size_t i{0}; i < 3; ++i)
        {
            arr_ptr[i].print_info();
        }
    }

    std::cout << "Done!" << std::endl;

    return 0;
}