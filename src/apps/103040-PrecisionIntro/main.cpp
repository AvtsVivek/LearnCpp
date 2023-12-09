#include <iostream>
#include <iomanip>



int main(){

    //Declare and initialize the variables
    float floatNumber1 {1.12345678901234567890f}; // Precision : 7
    double doubleNumber2 {1.12345678901234567890}; // Precision : 15
    long double longDoubleNumber3  {1.12345678901234567890L};
    
    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;



    //Precision
    std::cout << std::setprecision(10); // Control the precision from std::cout.
    std::cout << "Precision set to 10----------------" << std::endl;
    std::cout << "floatNumber1 is : " << floatNumber1 << std::endl; //7 digits
    std::cout << "doubleNumber2 is : " << doubleNumber2 << std::endl; // 15'ish digits
    std::cout << "longDoubleNumber3 is : " << longDoubleNumber3 << std::endl; // 15+ digits

    //Precision
    std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "Precision set to 20----------------" << std::endl; 
    std::cout << "floatNumber1 is : " << floatNumber1 << std::endl; //7 digits
    std::cout << "doubleNumber2 is : " << doubleNumber2 << std::endl; // 15'ish digits
    std::cout << "longDoubleNumber3 is : " << longDoubleNumber3 << std::endl; // 15+ digits

    //Precision
    std::cout << std::setprecision(30); // Control the precision from std::cout.
    std::cout << "Precision set to 30----------------" << std::endl; 
    std::cout << "floatNumber1 is : " << floatNumber1 << std::endl; //7 digits
    std::cout << "doubleNumber2 is : " << doubleNumber2 << std::endl; // 15'ish digits
    std::cout << "longDoubleNumber3 is : " << longDoubleNumber3 << std::endl; // 15+ digits

}