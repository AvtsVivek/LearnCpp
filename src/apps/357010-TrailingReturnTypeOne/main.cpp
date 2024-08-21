#include <iostream>

bool compare_two_items(int a, int b)
{
    std::cout << "compare_two_items a: " << a << " b: " << b << std::endl;
    return a > b;
}

auto compare_two_items_trailing_return_type(int a, int b) -> bool
{
    std::cout << "compare_two_items_trailing_return_type a: " << a << " b: " << b << std::endl;

    return a > b;
}

int main()
{
    // boolalpha output
    std::cout << std::boolalpha;

    bool bool_result_one = compare_two_items(5, 6);

    std::cout << "compare two items " << bool_result_one << std::endl;

    bool bool_result_two = compare_two_items_trailing_return_type(26, 15);

    std::cout << "compare two items " << bool_result_two << std::endl;

    return 0;
}