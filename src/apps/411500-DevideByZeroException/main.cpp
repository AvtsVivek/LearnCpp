
#include <iostream>
int divide_impl(int num, int den)
{

    if (den == 0)
        throw -1;
    return num / den;
}

void divide(int a, int b)
{
    // YOUR CODE WILL BO GELOW THIS LINE
    // DON'T MODIFY ANYTHING ABOVE THIS LINE

    try
    {
        auto result = divide_impl(a, b);
        std::cout << "result : " << result << std::endl;
    }
    catch (int ex)
    {
        std::cout << "handling thrown exception : " << ex << std::endl;

        if (ex == -1)
            std::cout << "Denominator is zero: " << std::endl;
    }

    // YOUR CODE WILL GO ABOVE THIS LINE
    // DON'T MODIFY ANYTHING BELOW THIS LINE
}

int main()
{
    divide(10, 5);
    divide(10, 0);
    return 0;
}