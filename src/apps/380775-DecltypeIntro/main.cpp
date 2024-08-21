#include <iostream>

int foo();

int main()
{

    int n = 10;

    decltype(n) a = 20; // a is an "int"    [unparenthesized id-expression]

    std::cout << "typeid(a).name(): " << typeid(a).name() << std::endl;

    decltype((n)) b = a; // b is an "int &"  [(n) is an lvalue]

    std::cout << "typeid(b).name(): " << typeid(b).name() << std::endl;

    // decltype((std::move(n))) c = a; // c is an "int &&" [(std::move(n)) is an xvalue]
    decltype(foo()) d = foo(); // d is an "int"    [(foo()) is a prvalue]

    std::cout << "typeid(d).name(): " << typeid(d).name() << std::endl;

    decltype(foo()) &&r1 = foo(); // int &&

    std::cout << "typeid(r1).name(): " << typeid(r1).name() << std::endl;

    std::cout << "typeid(&r1).name(): " << typeid(&r1).name() << std::endl;

    decltype((n)) &&r2 = n; // int & [& && collapses to &]

    std::cout << "typeid(r2).name(): " << typeid(r2).name() << std::endl;

    std::cout << "typeid(&r2).name(): " << typeid(&r2).name() << std::endl;

    return 0;
}

int foo() { return 0; };
