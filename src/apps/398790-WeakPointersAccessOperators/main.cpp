#include <iostream>
#include <memory>
#include "dog.h"
#include "person.h"

int main()
{

    std::shared_ptr<Dog> shared_ptr_dog_1 = std::make_shared<Dog>("Dog1");
    std::shared_ptr<int> shared_ptr_int_1 = std::make_shared<int>(200);

    std::weak_ptr<Dog> weak_ptr_dog_1(shared_ptr_dog_1);
    std::weak_ptr<int> weak_ptr_int_1(shared_ptr_int_1);
    // No * , or -> operators you would expect from regular pointers
    std::cout << "weak_ptr_dog_1 use count : " << weak_ptr_dog_1.use_count() << std::endl;

    std::cout << "Dog name : " << weak_ptr_dog_1->get_name() << std::endl;     // Compiler error : No -> operator
    std::cout << "Pointed to value : " << *weak_ptr_int_1 << std::endl;        // Compiler error : No * operator
    std::cout << "Pointed to address : " << weak_ptr_dog_1.get() << std::endl; // No get method

    return 0;
}