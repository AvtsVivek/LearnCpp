#include <iostream>
#include <memory>
#include "dog.h"

void do_something_with_dog_v1(std::unique_ptr<Dog> d)
{
	d->print_info();
}

int main()
{

	// Passing unique ptr to functions by value
	std::unique_ptr<Dog> p_dog_1 = std::make_unique<Dog>("Dog1");

	do_something_with_dog_v1(std::move(p_dog_1)); // Ownership will move to the body
												// of the function and memory will be
												// released when function returns.
												// Not what you typically want.

    std::cout << "p_dog_1 : " << p_dog_1.get() << std::endl; 
    std::cout << "Hitting back the main function" << std::endl;

	return 0;
}