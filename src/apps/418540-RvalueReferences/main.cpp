#include <iostream>

double add(double a, double b)
{
    return a + b;
}

int main()
{

    int x{5};
    int y{10};

    int &&result_one = x + y;

    int result_two = x + y;

    double &&outcome = add(10.1, 20.2);

    //

    std::cout << "result : " << result_one << std::endl;
    std::cout << "result : " << result_two << std::endl;

    std::cout << "outcome : " << outcome << std::endl;

    return 0;
}