#include <iostream>
#include <memory>
#include "dog.h"

// Passing by non const reference
void use_dog_v2(std::shared_ptr<Dog> &dog)
{
	// Since no copy is made, we won't see the reference count increment here
	dog->set_dog_name("Riol");
	dog.reset(new Dog()); // Passed by non const ref
	std::cout << "shared_ptr passed by non const reference (dog name changed in function) , dog_name : " << dog->get_name() << std::endl;
	std::cout << "use count in use_dog_v2 : " << dog.use_count() << std::endl;
}

int main()
{

	// Passing by non const reference
	//		No copy is made, reference count doesn't increment in function body
	{
		std::cout << std::endl;
		std::cout << "Passing by non const reference : " << std::endl;
		std::shared_ptr<Dog> shared_ptr_dog_2 = std::make_shared<Dog>("Flizy");

		std::cout << "shared_ptr_dog_2 use count(before) : " << shared_ptr_dog_2.use_count() << std::endl;
		use_dog_v2(shared_ptr_dog_2);

		std::cout << "shared_ptr_dog_2 use count(after) : " << shared_ptr_dog_2.use_count() << std::endl;
	}

	std::cout << "Done " << std::endl;

	return 0;
}