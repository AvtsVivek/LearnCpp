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

        // Initializing
        std::cout << std::endl;
        std::cout << "Initializing..." << std::endl;
        std::shared_ptr<Dog> dog_ptr_3;
        dog_ptr_3 = dog_ptr_1; // Use count : 3

        std::shared_ptr<Dog> dog_ptr_4{nullptr};
        dog_ptr_4 = dog_ptr_1; // Use count : 4

        std::shared_ptr<Dog> dog_ptr_5{dog_ptr_1}; // Use count : 5

        std::cout << std::endl;
        std::cout << "Use count for dog_ptr_1 : " << dog_ptr_1.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_2 : " << dog_ptr_2.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_3 : " << dog_ptr_3.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_4 : " << dog_ptr_4.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_5 : " << dog_ptr_5.use_count() << std::endl;

        // Can also initialize from an already existing raw pointer

        std::cout << std::endl;
        std::cout << "Initializing from already existing raw pointer" << std::endl;

        Dog *dog_ptr_raw = new Dog("Ralso");
        std::shared_ptr<Dog> dog_ptr_6{dog_ptr_raw};
        dog_ptr_raw = nullptr;

        dog_ptr_6->print_info();
        std::cout << "Use count for dog_ptr_6 is : " << dog_ptr_6.use_count() << std::endl;
        std::cout << "dog_ptr_raw : " << dog_ptr_raw << std::endl;

        // Reset : decrements the use count and sets the pointer to nullptr
        std::cout << std::endl;
        std::cout << "Resetting" << std::endl;
        dog_ptr_5.reset(); // decrements reference count and sets int_ptr5 to nullptr
                           // after this if you show use count, for int_ptr5,you'll get 0
        std::cout << "Use count for dog_ptr_1 : " << dog_ptr_1.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_2 : " << dog_ptr_2.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_3 : " << dog_ptr_3.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_4 : " << dog_ptr_4.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_5 : " << dog_ptr_5.use_count() << std::endl;

        // Can get the raw pointer address and use the ptr in if statements
        std::cout << std::endl;
        std::cout << "Casting to bool and using in if statements..." << std::endl;
        std::cout << "dog_ptr_4 : " << dog_ptr_4 << std::endl;
        std::cout << "dog_ptr_4.get() : " << dog_ptr_4.get() << std::endl;
        std::cout << "dog_ptr_4->bool : " << static_cast<bool>(dog_ptr_4) << std::endl;
        std::cout << "dog_ptr_5->bool : " << static_cast<bool>(dog_ptr_5) << std::endl;

        if (dog_ptr_5)
            std::cout << "dog_ptr_5 pointing to something valid" << std::endl;
        
        else
            std::cout << "dog_ptr_5 pointing to nullptr" << std::endl;
        
    }
    std::cout << "Returning ... " << std::endl;
    return 0;
}