#include <iostream>
#include <memory>
#include "dog.h"

void do_something_with_dog_v2(const std::unique_ptr<Dog> &d)
{
	d->set_dog_name("Rior");
	d->print_info();
	// d.reset(); // Compiler error
}

int main()
{

	std::unique_ptr p_dog_2 = std::make_unique<Dog>("Dog2");
	p_dog_2->print_info();

	do_something_with_dog_v2(p_dog_2);
	std::cout << "-----" << std::endl;
	p_dog_2->print_info();

	return 0;
}