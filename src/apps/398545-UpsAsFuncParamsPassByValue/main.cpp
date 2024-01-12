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

	// Can't pass unique_ptr by value to a function : copies not allowed
	do_something_with_dog_v1(p_dog_1); // copy detected,

	return 0;
}