#include <iostream>

void printstuff(int a, double b);

int main()
{
    int a{10};

    double b{5.5};

    printstuff(a, b);

    b = 13.5;

    printstuff(a, b);

    decltype((a > b) ? a : b) c{67};

    std::cout << "c: " << c << std::endl;

    std::cout << "sizeof(decltype(c)): " << sizeof(decltype(c)) << std::endl;

    std::cout << "typeid(decltype(c)).name(): " << typeid(decltype(c)).name() << std::endl;

    return 0;
}

void printstuff(int a, double b)
{
    std::cout << "typeid(decltype((a > b)? a: b)).name(): " << typeid(decltype((a > b) ? a : b)).name() << std::endl;

    std::cout << "sizeof(decltype((a > b)? a: b)).name(): " << sizeof(decltype((a > b) ? a : b)) << std::endl;

    return;
};
