#include <iostream>
#include <memory>
#include "dog.h"

int main()
{

    // shared pointers to fundamental types
    {

        std::shared_ptr<int> int_ptr_1{new int{20}};

        std::cout << "The pointed to value is : " << *int_ptr_1 << std::endl;

        *int_ptr_1 = 40; // Use the pointer to assign

        std::cout << "The pointed to value is : " << *int_ptr_1 << std::endl;
        std::cout << "Use count : " << int_ptr_1.use_count() << std::endl; // 1

        std::cout << "----" << std::endl;

        // Copying

        std::shared_ptr<int> int_ptr_2 = int_ptr_1; // Use count : 2

        std::cout << "The pointed to value is (through int_ptr2)  : " << *int_ptr_2 << std::endl;
        std::cout << "The pointed to value is (through int_ptr1)  : " << *int_ptr_1 << std::endl;
        *int_ptr_2 = 70;
        std::cout << "The pointed to value is (through int_ptr2) : " << *int_ptr_2 << std::endl;
        std::cout << "The pointed to value is (through int_ptr1) : " << *int_ptr_1 << std::endl;

        std::cout << "Use count for int_ptr_1 : " << int_ptr_1.use_count() << std::endl;
        std::cout << "Use count for int_ptr_2 : " << int_ptr_2.use_count() << std::endl;
    }

    return 0;
}