#include <iostream>

int main()
{

    double doubleNumber5{987654321};
    double doubleNumber6{9.87654321e8};
    double doubleNumber7{9.876e8}; // Note Here 54321 is ommitted.

    double electronMass8{9.108e-31}; // Electron mass 9.108×10−31 kg
    double electronMass9{0.0000000000000000000000000000009108}; // 9.108×10−31 kg

    std::cout << "doubleNumber5 is : " << doubleNumber5 << std::endl;
    std::cout << "doubleNumber6 is : " << doubleNumber6 << std::endl;
    std::cout << "doubleNumber7 is : " << doubleNumber7 << std::endl;

    std::cout << "electronMass8 is : " << electronMass8 << std::endl;
    std::cout << "electronMass9 is : " << electronMass9 << std::endl;
}