#include <iostream>

int main()
{

    // int division by 0 : CRASH

    const int a{45};
    const int b{0};
    std::cout << "Here we go...!" << std::endl;
    int result = a / b;
    std::cout << "Done!" << std::endl;

    return 0;
}