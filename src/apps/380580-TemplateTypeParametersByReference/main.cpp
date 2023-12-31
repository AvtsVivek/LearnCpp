#include <iostream>

template <typename T> const T &maximum_by_ref(const T &a, const T &b); // Declaration
template <typename T> T maximum_by_val(T a, T b); // Declaration

int main()
{

    double a{23.5};
    double b{51.2};


    std::cout << "Out - &a: " << &a << std::endl; // 0x111abc
    auto result_by_ref = maximum_by_ref(a, b);

    std::cout << "Out - &a: " << &a << std::endl; // 0x111abc
    auto result_by_val = maximum_by_val(a, b);

    std::cout << "result_by_ref: " << result_by_ref << std::endl;
    std::cout << "typeid(result_by_ref).name(): " << typeid(result_by_ref).name() << std::endl;

    std::cout << "result_by_val: " << result_by_val << std::endl;
    std::cout << "typeid(result_by_val).name(): " << typeid(result_by_val).name() << std::endl;

    return 0;
}

// Definition
template <typename T> const T &maximum_by_ref(const T &a, const T &b)
{
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    return (a > b) ? a : b;
}

// Definition
template <typename T> T maximum_by_val(T a, T b){
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    return (a > b) ? a : b ;
}

