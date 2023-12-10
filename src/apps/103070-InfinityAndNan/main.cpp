#include <iostream>

int main()
{

    double doubleNegativeNumber{ -31.6 };
    double doubleZero1{};//Initialized to 0
    double doubleZero2{};  //Initialized to 0

    //Infinity
    double devideByZero { doubleNegativeNumber / doubleZero1 };
    
    std::cout << "double doubleNegativeNumber is : " << doubleNegativeNumber << std::endl; 
    std::cout << "double doubleZero1 is : " << doubleZero1 << std::endl;     
    std::cout << "double doubleZero2 is : " << doubleZero2 << std::endl; 

    std::cout << doubleNegativeNumber << "/" << doubleZero1 << "  gives you " << devideByZero << std::endl;
    std::cout << devideByZero << " + " << doubleNegativeNumber << " gives " << devideByZero + doubleNegativeNumber << std::endl;
    
    //The following NaN
    double zeroByZero = doubleZero1 / doubleZero2;

    std::cout << doubleZero1 << "/" << doubleZero2 << " = " << zeroByZero << std::endl;

    std::cout << "typeid(zeroByZero) : " << typeid(zeroByZero).name() << std::endl;

    std::cout << "typeid(doubleZero1/doubleZero2) : " << typeid(doubleZero1/doubleZero2).name() << std::endl;

}