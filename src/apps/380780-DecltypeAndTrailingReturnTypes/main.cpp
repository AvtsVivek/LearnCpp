#include <iostream>

// Declaration
template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a > b) ? a : b);

int main()
{

    // declytpe
    int a{9};
    double b{15.8};

    auto result1 = (a > b)? a : b;
    
    std::cout << "size : " << sizeof(decltype((a > b)? a : b)) << std::endl;//8
    std::cout << "typeid(decltype((a > b)? a : b)).name() : " << typeid(decltype((a > b)? a : b)).name() << std::endl;
    std::cout << "result1 : " << result1 << std::endl;
    std::cout << "typeid(result1).name() : " << typeid(result1).name() << std::endl;


    a = 20;

    auto result2 = (a > b)? a : b;

    std::cout << "size : " << sizeof(decltype((a > b)? a : b)) << std::endl;//4
    std::cout << "typeid(decltype((a > b)? a : b)).name() : " << typeid(decltype((a > b)? a : b)).name() << std::endl;
    std::cout << "result2 : " << result2 << std::endl;
    std::cout << "typeid(result2).name() : " << typeid(result2).name() << std::endl;



    decltype((a > b)? a : b) c {7}; // Declaring other variables through declytype
    std::cout << "c : " << c << std::endl;
    std::cout << "sizeof(c) : " << sizeof(c) << std::endl; // 4
    

    auto result = maximum(a, b);
    std::cout << "result : " << result << std::endl;
    std::cout << "sizeof(result) :" << sizeof(result) << std::endl;
    std::cout << "typeid(result).name() :" << typeid(result).name() << std::endl;

    return 0;
}

// Definition
template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a > b) ? a : b)
{
    return (a > b) ? a : b;
}