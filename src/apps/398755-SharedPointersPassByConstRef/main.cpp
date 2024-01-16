#include <iostream>
#include <memory>
#include "dog.h"

void use_dog_v3(const std::shared_ptr<Dog> &dog)
{
	// Since no copy is made, we won't see the reference count increment here
	dog->set_dog_name("Simy"); // We can change the dog object even though
							   // shared_ptr is passed by ref. The const protects the shared_ptr
							   //  object itself, not the pointed to object.
	// dog.reset(new Dog()); // Passed by const ref
	std::cout << "shared_ptr passed by const reference (dog name changed in function) , dog_name : " << dog->get_name() << std::endl;
	std::cout << "use count in use_dog_v3 : " << dog.use_count() << std::endl;
}

int main()
{

	{

		std::cout << "Passing by const reference : " << std::endl;

		std::shared_ptr<Dog> shared_ptr_dog_3 = std::make_shared<Dog>("Kitzo");

		std::cout << "shared_ptr_dog_3 use count(before) : "
				  << shared_ptr_dog_3.use_count() << std::endl; // 1
		use_dog_v3(shared_ptr_dog_3);

		std::cout << "shared_ptr_dog_3 use count(after) : "
				  << shared_ptr_dog_3.use_count() << std::endl; // 1
	}
	std::cout << "Done " << std::endl;
	return 0;
}