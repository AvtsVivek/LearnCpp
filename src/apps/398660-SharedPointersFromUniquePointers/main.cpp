#include <iostream>
#include <memory>
#include "dog.h"


int main()
{

	{
		// Create shared pointers from unique_ptrs
		std::unique_ptr<int> unique_ptr_int_1 = std::make_unique<int>(22);	   // Heap object
		std::unique_ptr<Dog> unique_ptr_dog_1 = std::make_unique<Dog>("Halz"); // Heap object

		// Create shared pointers from unique_ptrs
		// Ownership moves from unique_ptrs to shared_ptrs from now on
		std::shared_ptr<int> shared_ptr_int_1 = std::move(unique_ptr_int_1);
		std::shared_ptr<Dog> shared_ptr_dog_1 = std::move(unique_ptr_dog_1);
		// std::shared_ptr<Dog> shared_ptr_dog_2 = unique_ptr_dog_1; // Direct assignment
		//  Doesn't work, you have to do
		//  an explicit std::move to move ownership

		std::cout << "shared_ptr_int_1 use count : " << shared_ptr_int_1.use_count() << std::endl;
		std::cout << "shared_ptr_dog_1 use count : " << shared_ptr_dog_1.use_count() << std::endl;

		std::cout << std::boolalpha;

		std::cout << "unique_ptr_int_1 : " << static_cast<bool>(unique_ptr_int_1) << std::endl;
		std::cout << "unique_ptr_dog_1 : " << static_cast<bool>(unique_ptr_dog_1) << std::endl;

		// std::cout << "unique_ptr_int_1 : " << unique_ptr_int_1 << std::endl; // Not working
		// std::cout << "unique_ptr_dog_1 : " << unique_ptr_dog_1 << std::endl;// Not working

		if (unique_ptr_int_1)
			std::cout << "unique_ptr_int_1 pointing to something valid" << std::endl;
		else
			std::cout << "unique_ptr_int_1 pointing to nullptr" << std::endl;

		if (unique_ptr_dog_1)
			std::cout << "unique_ptr_dog_1 pointing to something valid" << std::endl;
		else
			std::cout << "unique_ptr_dog_1 pointing to nullptr" << std::endl;

		// Can create copies because now we hold a shared ptr
		std::cout << std::endl;
		std::cout << "Making copies..." << std::endl;
		std::shared_ptr<int> shared_ptr_int_3{shared_ptr_int_1};
		std::shared_ptr<Dog> shared_ptr_dog_3{shared_ptr_dog_1};

		std::cout << "shared_ptr_int_1 use count : " << shared_ptr_int_1.use_count() << std::endl;
		std::cout << "shared_ptr_dog_1 use count : " << shared_ptr_dog_1.use_count() << std::endl;
		std::cout << "shared_ptr_int_3 use count : " << shared_ptr_int_3.use_count() << std::endl;
		std::cout << "shared_ptr_dog_3 use count : " << shared_ptr_dog_3.use_count() << std::endl;

		// Can't transform from std::shared_ptr to std::unique_ptr
		// The reason this transformation is disabled isn't hard to think of.
		//           At any given moment, there may be any number of shared pointers
		//           spread through your entire application working on the same object,
		//           If you were to instantly make one of those a unique ptr, what do
		//           you do with the remaining copies?? Unique ptr can't have copies
		//           anyway. So the compiler prevents you from doing this.
		// std::unique_ptr<int> unique_ptr_illegal_1 {shared_ptr_int_3}; // Compiler error
		// std::unique_ptr<int> unique_ptr_illegal_2 =shared_ptr_int_3; // Compiler error
		// std::unique_ptr<int> unique_ptr_illegal_3 =std::move(shared_ptr_int_3); // Compiler error

	}
	std::cout << "Done ..." << std::endl;
	return 0;
}