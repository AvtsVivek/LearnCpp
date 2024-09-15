#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>

void print(auto view)
{
    for (auto i : view)
    { // Computation happens here.
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{

    // std::ranges::keys_view and std::ranges_value_view
    // Compiler error which I don't understand the reason for yet.

    std::cout << std::endl;
    using pair = std::pair<int, std::string>;
    std::vector<pair> numbers{{1, "one"}, {2, "two"}, {3, "tree"}};

    // Compiler error when you build views explicitly. Don't understand why yet
    // auto k_view = std::ranges::keys_view(numbers);
    // auto v_view = std::ranges::values_view(numbers);

    auto k_view = std::views::keys(numbers);
    auto v_view = std::views::values(numbers);
    print(k_view);
    print(v_view);

    return 0;
}