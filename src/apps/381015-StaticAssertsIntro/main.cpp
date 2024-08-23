#include <iostream>

int main()
{

    static_assert(true, "Here we go..");

    static_assert(false, "Here is the compilation error..");

    return 0;
}