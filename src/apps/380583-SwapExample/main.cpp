#include <iostream>
#include "ex.h"

int main()
{
    std::string x{"Hello"};
    std::string y{"There"};
    swap_data(x, y);

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    return 0;
}
