#include <iostream>

// The right way : return type deduction

auto process_number(int value){
    if(value < 10){
        return 22; // returning int literal
    }else{
        return 55; // returning int literal
    }
}



auto process_number_static_cast(int value)
{
    if (value < 10)
    {
        return static_cast<double>(22); // returning int literal
    }
    else
    {
        return 33.1; // returning double literal
    }
}


int main()
{

    auto result = process_number(17);
    std::cout << "result : " << result << std::endl;
    std::cout << "sizeof(result)  : " << sizeof(result) << std::endl;
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;

    std::cout << "typeid(result) : " << typeid(result).name() << std::endl;
    std::cout << "typeid(result) : " << typeid(result).name() << std::endl;    

    auto result2 = process_number_static_cast(1);
    auto result3 = process_number_static_cast(17);

    std::cout << "result2 : " << result2 << std::endl;
    std::cout << "sizeof(result2)  : " << sizeof(result2) << std::endl;
    std::cout << "typeid(result2) : " << typeid(result2).name() << std::endl;
    std::cout << "typeid(result2) : " << typeid(result2).name() << std::endl;

    std::cout << "result3 : " << result3 << std::endl;

    std::cout << "sizeof(result3)  : " << sizeof(result3) << std::endl;
    std::cout << "typeid(result3) : " << typeid(result3).name() << std::endl;
    std::cout << "typeid(result3) : " << typeid(result3).name() << std::endl;

    return 0;
}