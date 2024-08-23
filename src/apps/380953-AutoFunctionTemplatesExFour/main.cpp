#include <iostream>
#include "utilities.h"
 
int main()
{
    int x{33};
    double y{33.6};
    auto result = add(x,y);
    std::cout << "result : " << result << std::endl;
    return 0;
}