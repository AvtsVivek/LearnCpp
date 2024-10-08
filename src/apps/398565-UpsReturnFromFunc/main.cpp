#include <iostream>
#include <memory>
#include "dog.h"

std::unique_ptr<Dog> get_unique_ptr()
{
	std::cout << "Inside of the get_unique_ptr start ..." << std::endl;
	std::unique_ptr<Dog> p_dog = std::make_unique<Dog>("Function Local");
	std::cout << "unique_ptr address(in) : " << &p_dog << std::endl;
	return p_dog;
}

int main()
{

	std::cout << "Here we go ..." << std::endl;
	std::unique_ptr<Dog> p_dog_3 = get_unique_ptr();
	std::cout << "delimiter" << std::endl;
	std::cout << "unique_ptr address(out) : " << &p_dog_3 << std::endl;

	p_dog_3->print_info();

	std::cout << "  " << std::endl;
	std::cout << "  " << std::endl;
	get_unique_ptr()->print_info();

	return 0;
}