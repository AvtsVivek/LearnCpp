#include <iostream>

int main()
{

	char charLowerCaseA {'a'};

    auto someTextVar = "Some Text";
    
    std::cout << charLowerCaseA << std::endl;

    //One byte in memory : 2^8 = 256 different values (0 ~ 255)
    std::cout << "Size of a char - sizeof(charLowerCaseA) " << sizeof(charLowerCaseA) << std::endl;
    std::cout << "Size of a char - sizeof(char) " << sizeof(char) << std::endl;
    
    char value = 65 ; // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl; // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl; 


    std::cout << "typeid(charLowerCaseA) : " << typeid(charLowerCaseA).name() << std::endl;

    std::cout << "typeid(\"SomeText\") : " << typeid("SomeText").name() << std::endl;

    std::cout << "typeid(someTextVar) : " << typeid(someTextVar).name() << std::endl;

    return 0;

}