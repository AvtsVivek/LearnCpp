#include <iostream>
#include <memory>
#include "dog.h"
#include "person.h"

void do_something_with_dog_v1(std::unique_ptr<Dog> d)
{
	d->print_info();
}

int main()
{

	// Passing unique ptr to functions by value
	std::unique_ptr<Dog> p_dog_1 = std::make_unique<Dog>("Dog1");

    
    Person person1("John");
	// person1.adopt_dog(p_dog_1); // This will give compiler error as demoed in an earlier example. 
    person1.adopt_dog(std::move(p_dog_1)); // The same behavior even when function is part of the class
    std::cout << "Doing something , p_dog_1 points to :  " <<p_dog_1.get() <<  std::endl;
    

	//An implicit move is done when object is created in place as a temporary
	do_something_with_dog_v1(std::make_unique<Dog>("Temporary Dog"));

	return 0;
}