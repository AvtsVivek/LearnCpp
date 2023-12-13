#include <iostream>



int main(){

    //Declare and initialize the variables
    float floatNumber1 {1.12345678901234567890f}; // Precision : 7
    double doubleNumber2 {1.12345678901234567890}; // Precision : 15
    long double longDoubleNumber3  {1.12345678901234567890L};
    
    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

	std::cout << "typeid(float).name() : " << typeid(float).name() << std::endl;
    std::cout << "typeid(floatNumber1).name() : " << typeid(floatNumber1).name() << std::endl;

	std::cout << "typeid(double).name() : " << typeid(double).name() << std::endl;
    std::cout << "typeid(doubleNumber2).name() : " << typeid(doubleNumber2).name() << std::endl;

	std::cout << "typeid(long double).name() : " << typeid(long double).name() << std::endl;
    std::cout << "typeid(longDoubleNumber3).name() : " << typeid(longDoubleNumber3).name() << std::endl;

}