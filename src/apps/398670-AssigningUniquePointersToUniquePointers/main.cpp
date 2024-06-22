#include <iostream>
#include <memory>
#include "dog.h"

std::unique_ptr<Dog> get_unique_ptr()
{
	std::unique_ptr<Dog> dog_ptr_internal = std::make_unique<Dog>("Phil");
	return dog_ptr_internal;
}

int main()
{

	{

		// Returning unique_ptr to unique_ptr
		std::cout << std::endl;
		std::cout << "Returning unique_ptr from function to unique ptr" << std::endl;
		std::unique_ptr<Dog> unique_ptr_dog_2 = get_unique_ptr(); // This implicitly moves
																  // ownership to dog_ptr9_unique
		if (unique_ptr_dog_2)
			std::cout << "unique_ptr_dog_2 dog name : " << unique_ptr_dog_2->get_name() << std::endl;

		if (unique_ptr_dog_2)
		{
			std::cout << "unique_ptr_dog_2 name 	 : " << unique_ptr_dog_2->get_name() << std::endl;
			// std::cout << "unique_ptr_dog_2 use count : " << unique_ptr_dog_2.use_count() << std::endl;
		}
	}
	std::cout << "Done ..." << std::endl;
	return 0;
}