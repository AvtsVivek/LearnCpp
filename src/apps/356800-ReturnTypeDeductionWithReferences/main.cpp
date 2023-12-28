#include <iostream>

auto &max(int &a, int &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b; // Will return a copy.
    }
}

int main()
{

    int x{10};
    int y{45};

    int &result = max(x, y); // Error : Can not treat return value as a reference
                             // It's jut a bare separate variable with a value inside.

    ++result;

    std::cout << "x :" << x << std::endl;            // 10
    std::cout << "y :" << y << std::endl;            // 46
    std::cout << "result : " << result << std::endl; // 46

    int result2 = max(x, y);                           // A copy of the max is returned
    std::cout << "result2 : " << result2 << std::endl; // 46. Why is this returning 46? Not sure.

    return 0;
}