#include <iostream>

int main()
{
    // Addition
    int firstNumber{23};
    int secondNumber{71};

    int additionResult = firstNumber + secondNumber;
    std::cout << "additionResult : " << additionResult << std::endl;

    // Subtraction
    int subtractionResult1 = secondNumber - firstNumber;
    std::cout << "subtractionResult1 : " << subtractionResult1 << std::endl;

    int subtractionResult2 = firstNumber - secondNumber;
    std::cout << "subtractionResult2 : " << subtractionResult2 << std::endl;

    // Multiplication
    int multiplicationResult = firstNumber * secondNumber;
    std::cout << "multiplicationResult : " << multiplicationResult << std::endl;

    // Division
    auto divisionResult = secondNumber / firstNumber;
    std::cout << "divisionResult : " << divisionResult << std::endl;

    // Modulus
    auto modulusResult1 = secondNumber % firstNumber;                
    std::cout << "modulusResult1 : " << modulusResult1 << std::endl; 

    auto modulusResult2 = 58 % 10;
    std::cout << "modulusResult2 : " << modulusResult2 << std::endl; 

    return 0;
}