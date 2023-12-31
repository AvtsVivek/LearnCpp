#include <iostream>
#include "dog.h"

int main()
{

    Dog dog1("Fluffy", "Shepherd", 2);

    // const std::string &str_ref = dog1.compile_dog_info();
    // std::cout << " info : " << str_ref << std::endl; // This will crash the program because of dangling ref

    unsigned int *int_ptr = dog1.jumps_per_minute();
    std::cout << "jumps_per_minute : " << *int_ptr << std::endl; // This will crash the program because of dangling pointer

    std::cout << "Done!" << std::endl;
    return 0;
}