#include <iostream>
#include <memory>
#include "dog.h"

int main()
{

    // Copies not allowed
    std::unique_ptr<Dog> up_dog_8 = std::make_unique<Dog>("Dog8");
    up_dog_8->print_dog();
    // Can get the wrapped pointer address : useful for older raw pointer APIs
    std::cout << "Dog8 memory address: " << up_dog_8.get() << std::endl;

    // Copies and Assignments are not allowed with unique ptr
    std::unique_ptr<Dog> up_dog_9 = up_dog_8; // Error.This also does some kind of copy
    // More on this when we've learnt about operator overloading
    std::unique_ptr<Dog> up_dog_10{up_dog_8}; // Error :  Copy constructor deleted

    return 0;
}