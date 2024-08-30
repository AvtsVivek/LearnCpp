#include <iostream>
#include "exercise.h"

int main()
{

    Printer red_printer("red");
    auto red_result = red_printer("Hello");
    std::cout << red_result << std::endl;

    Printer green_printer("green");
    auto green_result = green_printer("The sky is blue my friend!");
    std::cout << green_result << std::endl;

    return 0;
}