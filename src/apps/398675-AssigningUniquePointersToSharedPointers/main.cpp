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
		// Returning unique_ptr to shared_ptr
		std::cout << std::endl;
		std::cout << "Returning unique_ptr from function to shared ptr" << std::endl;
		std::shared_ptr<Dog> shared_ptr_dog_4 = get_unique_ptr(); // This implicitly moves
																  // ownership to shared_ptr_dog_4. Implicitly does something
																  // like this :
																  // std::shared_ptr<Dog> shared_ptr_dog_4 = std::move(dog_ptr_internal);
																  // moving ownership to a shared pointer whose reference count becomes 1.
		if (shared_ptr_dog_4)
		{
			std::cout << "shared_ptr_dog_4 name 	 : " << shared_ptr_dog_4->get_name() << std::endl;
			std::cout << "shared_ptr_dog_4 use count : " << shared_ptr_dog_4.use_count() << std::endl;
		}
	}
	std::cout << "Done ..." << std::endl;
	return 0;
}