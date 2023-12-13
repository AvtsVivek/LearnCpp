#include <iostream>

int main()
{

    // Braced initializers

    // Variable may contain random garbage value . WARNING
    int elephant_count;

    int lion_count{}; // Initializes to zero

    int dog_count{10}; // Initializes to 10

    int cat_count{15}; // Initializes to 15

    // Can use expression as initializer
    int domesticated_animals{dog_count + cat_count};

    //
    // int new_number{doesnt_exist};

    // int narrowing_conversion {2.9};//Compiler error

    std::cout << "The following Elephant count is a garbage value, because its uninitialized. " << std::endl;
    std::cout << "Elephant count : " << elephant_count << std::endl;
    std::cout << "Lion count : " << lion_count << std::endl;
    std::cout << "Dog count : " << dog_count << std::endl;
    std::cout << "Cat count : " << cat_count << std::endl;
    std::cout << "Domesticated animal count : " << domesticated_animals << std::endl;

    std::cout << " --------------------------------------------- " << std::endl;
    std::cout << "The type id - typeid(int).name() " << typeid(int).name() << std::endl;
    std::cout << "The type id - typeid(0).name() " << typeid(0).name() << std::endl;
    std::cout << "The type id - typeid(elephant_count).name() " << typeid(elephant_count).name() << std::endl;

    if (typeid(elephant_count) == typeid(int))
    {
        std::cout << "elephant_count is an int" << std::endl;
    }
    else
    {
        std::cout << "elephant_count is NOT an int" << std::endl;
    }

    if (typeid(0) == typeid(int))
        std::cout << "The number constant 0 is an int" << std::endl;    
    else
        std::cout << "The number constant 0 is NOT an int" << std::endl;
   

    return 0;
}