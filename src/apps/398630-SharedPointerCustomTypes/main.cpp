#include <iostream>
#include <memory>
#include "dog.h"

int main()
{
    // shared pointers to fundamental types
    {
        std::shared_ptr<Dog> dog_ptr_1{new Dog("Dog1")};
        dog_ptr_1->print_info();

        std::cout << "Use count : " << dog_ptr_1.use_count() << std::endl;

        std::shared_ptr<Dog> dog_ptr_2 = dog_ptr_1; // Use count : 2

        std::cout << "Use count for dog_ptr_1 : " << dog_ptr_1.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_2 : " << dog_ptr_2.use_count() << std::endl;
        std::cout << "" << std::endl;

        std::cout << "Reseting, dog_ptr_2.reset()" << std::endl;
        dog_ptr_2.reset();

        std::cout << "" << std::endl;
        std::cout << "After reset" << std::endl;
        std::cout << "Use count for dog_ptr_1 : " << dog_ptr_1.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_2 : " << dog_ptr_2.use_count() << std::endl;

   }
    std::cout << "Returning ... " << std::endl;
    return 0;
}