#include <iostream>

int main()
{
   //Addition
   int firstNumber{2};
   int secondNumber{7};

   int result = firstNumber + secondNumber;
   std::cout << "result : " << result << std::endl;

    //Subtraction
    result = secondNumber - firstNumber ;
   std::cout << "result : " << result << std::endl;

   result = firstNumber - secondNumber;
   std::cout << "result : " << result << std::endl;

   //Multiplication
   result = firstNumber * secondNumber;
   std::cout << "result : " << result << std::endl;


   //Division
   result = secondNumber / firstNumber;
   std::cout << "result : " << result << std::endl;


   //Modulus
   result = secondNumber % firstNumber; // 7 % 2
   std::cout << "result : " << result << std::endl; // 1

   result = 31 % 10;
   std::cout << "result : " << result << std::endl; // 1
    
    return 0;
}