#include <iostream>
#include <memory>
#include "dog.h"

// Passing by value
void use_dog_v1(std::shared_ptr<Dog> dog)
{
	std::cout << "shared_ptr passed by value , dog_name : " << dog->get_name() << std::endl;
	std::cout << "use count in use_dog_v1 : " << dog.use_count() << std::endl; // 2
}


int main()
{

	// Passing by value : A copy will be made, increment the ref count in function body
	{
		std::cout << std::endl;
		std::cout << "Passing shared_ptr by value : " << std::endl;

		std::shared_ptr<Dog> shared_ptr_dog_1 = std::make_shared<Dog>("Filld");
		std::cout << "shared_ptr_dog_1 use count(before) : "
				  << shared_ptr_dog_1.use_count() << std::endl; // 1

		use_dog_v1(shared_ptr_dog_1);

		std::cout << "shared_ptr_dog_1 use count(after) : "
				  << shared_ptr_dog_1.use_count() << std::endl; // 1
	}
	std::cout << "Done " << std::endl;
	return 0;
}