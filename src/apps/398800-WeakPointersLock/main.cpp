#include <iostream>
#include <memory>
#include "dog.h"

int main()
{

    {

        std::shared_ptr<Dog> shared_ptr_dog_1 = std::make_shared<Dog>("Dog1");
        std::shared_ptr<int> shared_ptr_int_1 = std::make_shared<int>(200);

        std::weak_ptr<Dog> weak_ptr_dog_1(shared_ptr_dog_1);
        std::weak_ptr<int> weak_ptr_int_1(shared_ptr_int_1);

        // To use a weak ptr you have to turn it into a shared_ptr with the lock method

        std::cout << std::endl;
        std::shared_ptr<Dog> weak_turned_shared = weak_ptr_dog_1.lock();
        std::cout << "weak_turned_shared use count : " << weak_turned_shared.use_count() << std::endl;
        std::cout << "Dog name : " << weak_turned_shared->get_name() << std::endl;
        std::cout << "Dog name : " << shared_ptr_dog_1->get_name() << std::endl;
    }
    std::cout << "Done " << std::endl;
    return 0;
}