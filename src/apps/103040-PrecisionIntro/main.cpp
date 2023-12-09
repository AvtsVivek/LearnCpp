#include <iostream>
#include <iomanip>

int main()
{

    // Declare and initialize the variables
    float floatNumber1{1.12345678901234567890f};  // Precision : 7
    double doubleNumber2{1.12345678901234567890}; // Precision : 15
    long double longDoubleNumber3{1.12345678901234567890L};

    // Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    // Precision
    std::cout << std::setprecision(10); // Control the precision from std::cout.
    std::cout << "Precision set to 10----------------" << std::endl;
    std::cout << "floatNumber1 is : " << floatNumber1 << std::endl;           // 7 digits
    std::cout << "doubleNumber2 is : " << doubleNumber2 << std::endl;         // 15'ish digits
    std::cout << "longDoubleNumber3 is : " << longDoubleNumber3 << std::endl; // 15+ digits

    // Precision
    std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "Precision set to 20----------------" << std::endl;
    std::cout << "floatNumber1 is : " << floatNumber1 << std::endl;           // 7 digits
    std::cout << "doubleNumber2 is : " << doubleNumber2 << std::endl;         // 15'ish digits
    std::cout << "longDoubleNumber3 is : " << longDoubleNumber3 << std::endl; // 15+ digits

    // Precision
    std::cout << std::setprecision(30); // Control the precision from std::cout.
    std::cout << "Precision set to 30----------------" << std::endl;
    std::cout << "floatNumber1 is : " << floatNumber1 << std::endl;           // 7 digits
    std::cout << "doubleNumber2 is : " << doubleNumber2 << std::endl;         // 15'ish digits
    std::cout << "longDoubleNumber3 is : " << longDoubleNumber3 << std::endl; // 15+ digits

    // Float problems : The precision is usually too limited
    // for a lot of applications
    float floatNumber4 = 192400023.0f; // Error : narrowing conversion
    double doubleNumber5 = 192400023.0;
    long double longDoubleNumber5 = 192400023.0L;

    std::cout << "Note the following. The number is float, so it will be only 7 digits. The rest is garbage " << std::endl;
    std::cout << "floatNumber4 : " << floatNumber4 << std::endl;
    std::cout << "doubleNumber5 : " << doubleNumber5 << std::endl;
    std::cout << "longDoubleNumber5 : " << longDoubleNumber5 << std::endl;

    // Float problems : The precision is usually too limited
    // for a lot of applications
    float floatNumber6 = 1234567890123456789.0f; // Error : narrowing conversion
    double doubleNumber7 = 1234567890123456789.0;
    long double longDoubleNumber7 = 1234567890123456789.0L;

    std::cout << "Now a longer number " << std::endl;
    std::cout << "floatNumber6 : " << floatNumber6 << std::endl;
    std::cout << "doubleNumber7 : " << doubleNumber7 << std::endl;
    std::cout << "longDoubleNumber7 : " << longDoubleNumber7 << std::endl;

    // Float problems : The precision is usually too limited
    // for a lot of applications
    float floatNumber8 = 123456789012345678901234567890.0f; // Error : narrowing conversion
    double doubleNumber9 = 123456789012345678901234567890.0;
    long double longDoubleNumber9 = 123456789012345678901234567890.0L;

    std::cout << "Still longer " << std::endl;
    std::cout << "floatNumber8 : " << floatNumber8 << std::endl;
    std::cout << "doubleNumber9 : " << longDoubleNumber9 << std::endl;
}