#include <iostream>

int main()
{

    // Capture lists

    double a{10};
    double b{20};

    auto func = [a, b]()
    {
        std::cout << "a + b : " << a + b << std::endl;
    };
    func();

    // Capturing by value

    std::cout << "" << std::endl;
    std::cout << "Capture by Value : " << std::endl;
    std::cout << "" << std::endl;

    int c{42};

    auto func_capture_by_value = [c]()
    {
        std::cout << "Inner value : " << c << " &inner : " << &c << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
        func_capture_by_value();
        ++c;
    }

    // Capture by reference

    std::cout << "" << std::endl;
    std::cout << "Capture by reference : " << std::endl;
    std::cout << "" << std::endl;

    int c1{42};

    auto func_capture_by_ref = [&c1]()
    {
        std::cout << "Inner value : " << c1 << " &inner : " << &c1 << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "Outer value : " << c1 << " &outer : " << &c1 << std::endl;
        func_capture_by_ref();
        ++c1;
    }

    return 0;
}