#include <iostream>

int main()
{

    //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;
    
    double number10{ -5.6 };
    double number11{};//Initialized to 0
    double number12{};  //Initialized to 0

    //Infinity
    double result { number10 / number11 };
    
    std::cout << "double number10 is : " << number10 << std::endl; 
    std::cout << "double number11 is : " << number11 << std::endl;     
    std::cout << "double number12 is : " << number12 << std::endl; 

    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    
    //NaN
    result = number11 / number12;


    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    std::cout << "typeid(result) : " << typeid(result).name() << std::endl;

    std::cout << "typeid(number11/number12) : " << typeid(number11/number12).name() << std::endl;

}