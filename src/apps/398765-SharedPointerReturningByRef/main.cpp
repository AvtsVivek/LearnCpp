#include <iostream>
#include <memory>
#include "dog.h"

// RETURNING SHARED_PTR BY REF( CONST OR NON CONST) IS A RECIPE
// FOR DISASTER. DON'T DO IT.
// returning std::shared_ptr by reference doesn't properly increment the reference count,
//  which opens up the risk of deleting something at the wrong time. We'll get a crash
std::shared_ptr<Dog> &get_shared_ptr_v2()
{
	std::shared_ptr<Dog> dog_ptr = std::make_shared<Dog>("Internal Dog_v2");
	return dog_ptr;
}

int main()
{

	{

		// Returning by reference : not recommended.
		std::shared_ptr<Dog> shared_ptr_dog_5 = get_shared_ptr_v2();
		// std::shared_ptr<Dog> &shared_ptr_dog_5 = get_shared_ptr_v2();
		std::cout << "ref count : " << shared_ptr_dog_5.use_count() << std::endl;
	}
	std::cout << "Done " << std::endl;
	return 0;
}