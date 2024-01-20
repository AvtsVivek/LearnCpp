#include <iostream>
#include <memory>
#include "dog.h"
#include "person.h"

int main()
{

    {
        // Playing with basic use of weak_ptr
        std::shared_ptr<Dog> shared_ptr_dog_1 = std::make_shared<Dog>("Dog1");
        std::shared_ptr<int> shared_ptr_int_1 = std::make_shared<int>(200);

        std::weak_ptr<Dog> weak_ptr_dog_1(shared_ptr_dog_1);
        std::weak_ptr<int> weak_ptr_int_1(shared_ptr_int_1);
    }
    std::cout << "Done!!" << std::endl;
    return 0;
}