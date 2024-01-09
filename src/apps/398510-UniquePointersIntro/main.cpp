#include <iostream>
#include <memory>
#include "dog.h"

int main()
{
    //----------------------------------------------------------------------------------
    // Using unique_ptr : managed memory is owned by a single pointer at any moment.

    Dog *p_dog_3 = new Dog("Dog3");
    std::unique_ptr<Dog> up_dog_4{p_dog_3}; // Can also manage a previously allocated
                                            // space managed by a raw pointer. You shouldn't
                                            // try to use the raw pointer from this point on
    std::unique_ptr<Dog> up_dog_5{new Dog("Dog5")};
    std::unique_ptr<int> up_int2{new int(200)};
    std::unique_ptr<Dog> up_dog_6{nullptr}; // Can also initialize with nullptr
                                            // and give it memory to manage later, we'll see how to
                                            // do that with std::move later in the lecture. Just know
                                            // that you can initialize a unique ptr with nullptr for now.

    std::cout << "typeid(std::unique_ptr<Dog>).name() : " << typeid(std::unique_ptr<Dog>).name() << std::endl;

    std::cout << "typeid(up_dog_6).name() : " << typeid(up_dog_6).name() << std::endl;

    // Can use unique pointer just like we use a raw pointer.
    up_dog_5->print_dog(); // Calling function with -> operator
    // Assign to fundamental type
    *up_int2 = 500;
    std::cout << "Integer is : " << *up_int2 << std::endl; // dereferencing
    std::cout << "Integer lives at address : " << up_int2.get() << std::endl;

    std::cout << "Hitting the outside scope" << std::endl;
    return 0;
}