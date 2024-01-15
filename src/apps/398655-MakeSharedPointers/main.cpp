#include <iostream>
#include <memory>
#include "dog.h"

int main()
{

    // make_shared
    {
        std::shared_ptr<int> int_ptr_6 = std::make_shared<int>(55);
        std::cout << "The value pointed to by int_ptr_6 is : " << *int_ptr_6 << std::endl;

        std::shared_ptr<Dog> dog_ptr_6 = std::make_shared<Dog>("Salz");
        dog_ptr_6->print_info();

        std::cout << "int_ptr_6 use count : " << int_ptr_6.use_count() << std::endl; // 1
        std::cout << "dog_ptr_6 use count : " << dog_ptr_6.use_count() << std::endl; // 1

        // Share the object(data) with other shared_ptr's
        std::cout << std::endl;
        std::cout << "Share the object(data) with other shared_ptr's" << std::endl;
        std::shared_ptr<int> int_ptr_7{nullptr};
        int_ptr_7 = int_ptr_6;

        std::shared_ptr<Dog> dog_ptr_7{nullptr};
        dog_ptr_7 = dog_ptr_6;

        std::cout << "int_ptr6 use count : " << int_ptr_6.use_count() << std::endl;
        std::cout << "dog_ptr6 use count : " << dog_ptr_6.use_count() << std::endl;

        std::cout << std::endl;
        std::cout << "Reset ptr6's" << std::endl;
        int_ptr_6.reset(); // decrement reference count, and set int_ptr6 to nullptr
                           // if reference count is zero, release the managed memory
        dog_ptr_6.reset();
        std::cout << "int_ptr_6 use count : " << int_ptr_6.use_count() << std::endl;
        std::cout << "dog_ptr_6 use count : " << dog_ptr_6.use_count() << std::endl;
        std::cout << "int_ptr_7 use count : " << int_ptr_7.use_count() << std::endl;
        std::cout << "dog_ptr_7 use count : " << dog_ptr_7.use_count() << std::endl;
    }

    std::cout << "Returning ... " << std::endl;

    return 0;
}