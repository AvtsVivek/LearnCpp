#include <iostream>

double add(double a, double b)
{
    return a + b;
}

int main()
{

    // declaration and initialization by assignment of &add or add
    // double (*f_ptr) (double, double)  = &add;
    // double(*f_ptr) (double,double) = add;

    // Brace initialization
    // double(*f_ptr) (double,double) {&add};
    // double(*f_ptr) (double,double){add};

    // Auto type deduction
    // auto f_ptr = &add;
    // auto f_ptr = add;

    // This is also auto type deduction. 
    // auto *f_ptr = &add;
    // auto *f_ptr = add;

    // Initializing with null pointer. This is valid
    // But no method will be called when we do something like f_ptr(10, 30)
    double (*f_ptr)(double, double) = nullptr;

    std::cout << "add(10,30) : " << f_ptr(10, 30) << std::endl;

    return 0;
}