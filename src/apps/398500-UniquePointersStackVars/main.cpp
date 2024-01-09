#include <iostream>
#include <memory>
#include "dog.h"

int main()
{

    // Stack variables
    {
        Dog dog1("Dog1");
        // Calling functions on stack objects
        dog1.print_dog();
    }
    std::cout << "Hitting outside scope" << std::endl;
    std::cout << "Done!" << std::endl;

    return 0;
}