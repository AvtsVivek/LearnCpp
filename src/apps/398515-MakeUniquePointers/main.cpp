#include <iostream>
#include <memory>
#include "dog.h"

int main()
{

    std::unique_ptr<Dog> up_dog_7 = std::make_unique<Dog>("Dog7");
    up_dog_7->print_dog();

    std::unique_ptr<int> p_int3 = std::make_unique<int>(30);
    *p_int3 = 67;
    std::cout << "Value pointed to by p_int3 is :" << *p_int3 << std::endl;
    std::cout << "p_int pointing at address :" << p_int3.get() << std::endl;

    return 0;
}