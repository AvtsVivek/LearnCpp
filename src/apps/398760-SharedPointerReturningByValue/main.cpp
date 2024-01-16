#include <iostream>
#include <memory>
#include "dog.h"

// Returning by value
//      Returning a shared_ptr by value goes through return value optimization and at the
//                 end no copy is made, we have a single shared ptr with a reference count of 1,
//                 just like when we create a shared directly with make_shared.
std::shared_ptr<Dog> get_shared_ptr_v1()
{
	std::shared_ptr<Dog> dog_ptr = std::make_shared<Dog>("Internal Dog_v1");
	std::cout << "Managed dog address(in) : " << dog_ptr.get() << std::endl;
	return dog_ptr;
}

int main()
{

	// Passing by value : A copy will be made, increment the ref count in function body

	// Returning by value
	//      Returning a shared_ptr by value goes through return value optimization and at the
	//                 end no copy is made, we have a single shared ptr with a reference count of 1, just
	//                 like when we create a shared directly with make_shared.
	{
		std::shared_ptr<Dog> shared_ptr_dog_4 = get_shared_ptr_v1();
		std::cout << "Managed dog address (out) : " << shared_ptr_dog_4.get() << std::endl;
		std::cout << "shared_ptr_dog_4 use count : " << shared_ptr_dog_4.use_count() << std::endl;

		// Returning by reference : not recommended.
		//  std::shared_ptr<Dog>& shared_ptr_dog_5 = get_shared_ptr_v2();
		//  std::cout << "ref count : " << shared_ptr_dog_5.use_count() << std::endl;
	}
	std::cout << "Done " << std::endl;
	return 0;
}