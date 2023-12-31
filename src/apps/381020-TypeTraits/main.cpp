#include <iostream>
#include <type_traits>

template <typename T>
void print_number(T n)
{
    static_assert(std::is_integral_v<T>, "print_number() can only be called with integral types");
    std::cout << "number : " << n << std::endl;
}

int main()
{

    std::cout << std::boolalpha;
    std::cout << "std::is_integral<int>::value : " << std::is_integral<int>::value << std::endl;
    std::cout << "std::is_floating_point<int>::value : " << std::is_floating_point<int>::value << std::endl;

    std::cout << "-------------" << std::endl;

    std::cout << "std::is_integral_v<int> : " << std::is_integral_v<int> << std::endl;
    std::cout << "std::is_floating_point_v<int> : " << std::is_floating_point_v<int> << std::endl;

    int a_int{45};

    print_number(a_int); // Since a is int, this will give no error.

    double a{7};

    // print_number(a); // Since a is double, this is going to give compile time error.

    auto func = []<typename T>(T a, T b)
    {
        static_assert(std::is_integral_v<T>, "func can only be called with integral types");
        return a + b;
    };

    double x{7};
    double y{6};
    // func(x, y); // This will give compile time error. This is because x is double.

    int x_int{7};
    int y_int{6};
    func(x_int, y_int); // This will compile correctly.

    return 0;
}