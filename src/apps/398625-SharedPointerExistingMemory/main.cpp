#include <iostream>
#include <memory>
#include "dog.h"

int main()
{
    // shared pointers to fundamental types
    {
        // Use a shared pointer to manage an already existing piece of memory
        std::cout << "Use a shared pointer to manage an already existing piece of memory :" << std::endl;
        int *int_ptr_raw = new int(33);

        std::shared_ptr<int> int_ptr_6{int_ptr_raw};
        std::cout << "raw pointer int_ptr_raw before setting it to nullptr : " << int_ptr_raw << std::endl;
        int_ptr_raw = nullptr;
        std::cout << "The value pointed to by int_ptr_raw is (through int_ptr_6) : " << *int_ptr_6 << std::endl;
        std::cout << "Use count for int_ptr_6 is : " << int_ptr_6.use_count() << std::endl;
        std::cout << "raw pointer int_ptr_raw after setting it to nullptr : " << int_ptr_raw << std::endl;
        std::cout << "int_ptr_6.get() : " << int_ptr_6.get() << std::endl;
    }

    return 0;
}