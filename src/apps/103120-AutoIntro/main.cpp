#include <iostream>

int main()
{

	auto intVar1 {12};
    auto doubleVar2 {13.0};
    auto floatVar3 {14.0f};
    auto longDoubleVar4 {15.0l};
    auto charVar5 {'e'};
    
    //int modifier suffixes
    auto unsignedIntVar6 { 123u}; // unsigned
    auto unsignedLongVar7 { 123ul}; //unsigned long
    auto longLongVar8 { 123ll}; // long long

    std::cout << "sizeof(intVar1) : " << sizeof(intVar1) << " bytes" << std::endl;
    std::cout << "typeid(intVar1).name() : " << typeid(intVar1).name()  << std::endl;

    std::cout << "sizeof(doubleVar2) : " << sizeof(doubleVar2) << " bytes" << std::endl;
    std::cout << "typeid(doubleVar2).name() : " << typeid(doubleVar2).name()  << std::endl;

    std::cout << "sizeof(floatVar3) : " << sizeof(floatVar3) << " bytes" << std::endl;
    std::cout << "typeid(floatVar3).name() : " << typeid(floatVar3).name()  << std::endl;

    std::cout << "sizeof(longDoubleVar4) : " << sizeof(longDoubleVar4) << " bytes" << std::endl;
    std::cout << "typeid(longDoubleVar4).name() : " << typeid(longDoubleVar4).name()  << std::endl;
            
    std::cout << "sizeof(charVar5) : " << sizeof(charVar5) << " bytes" << std::endl;
    std::cout << "typeid(charVar5).name() : " << typeid(charVar5).name()  << std::endl;

    std::cout << "sizeof(unsignedIntVar6) : " << sizeof(unsignedIntVar6) << " bytes" << std::endl;
    std::cout << "typeid(unsignedIntVar6).name() : " << typeid(unsignedIntVar6).name()  << std::endl;

    std::cout << "sizeof(unsignedLongVar7) : " << sizeof(unsignedLongVar7) << " bytes" << std::endl;
    std::cout << "typeid(unsignedLongVar7).name() : " << typeid(unsignedLongVar7).name()  << std::endl;

    std::cout << "sizeof(longLongVar8) : " << sizeof(longLongVar8) << " bytes" << std::endl;
    std::cout << "typeid(longLongVar8).name() : " << typeid(longLongVar8).name()  << std::endl;

    return 0;

}