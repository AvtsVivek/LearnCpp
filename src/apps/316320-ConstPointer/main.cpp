#include <iostream>

int main()
{
    
    //A raw variable that can be modified
    std::cout << std::endl;
    std::cout << "Raw variable that can be modified : " << std::endl;

    int number {5};// Not constant, can change number any way we want
    std::cout << "number : " << number << std::endl;
    std::cout << "&number : " << &number << std::endl;
    //Modify
    number = 12;
    number += 7;

    //Access - Print out
    std::cout << "number : " << number << std::endl;
    std::cout << "&number : " << &number << std::endl;
    std::cout << std::endl;
    

    // Pointer : Can modify the data and the pointer itself
    
    int *p_number1 {nullptr};
    int  number1{23};

    p_number1 = &number1;
    std::cout << "Pointer and value pointed to : both modifiable : " << std::endl;
    std::cout << "p_number1 :" << p_number1 << std::endl; // Address
    std::cout << "*p_number1 : " << *p_number1 << std::endl; // 23
    std::cout << "number1 : " << number1 << std::endl; // 23

    //Change the pointed to value through pointer
    std::cout << std::endl;
    std::cout << "Modifying the value pointed to p_number1 through the pointer : " << std::endl;
    *p_number1 = 432;
    std::cout << "p_number1 : " << p_number1 << std::endl;
    std::cout << "*p_number1  : " << *p_number1 << std::endl;
    std::cout << "number1 : " << number1 << std::endl;

    //Change the pointer itself to make it point somewhere else
    std::cout << std::endl;
    std::cout << "Changing the pointer itself to make it point somewhere else" << std::endl;
    int number2 {56};
    p_number1 = &number2;
    std::cout << "p_number1 :" << p_number1 << std::endl;
    std::cout << "*p_number1  : " << *p_number1 << std::endl;
    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << std::endl;
    

    return 0;
}