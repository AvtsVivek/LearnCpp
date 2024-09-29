#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>
#include "boxcontainer.h"

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
    BoxContainer<int> vi;
    vi.add(5);
    vi.add(1);
    vi.add(4);
    vi.add(8);
    vi.add(5);
    vi.add(3);
    vi.add(7);
    vi.add(9);
    vi.add(6);

    // std::ranges::filter_view

    std::cout << std::endl;
    std::cout << "std::ranges::filter_view : " << std::endl;
    auto evens = [](int i)
    {
        return (i % 2) == 0;
    };
    std::cout << "vi : ";
    print(vi);

    std::ranges::filter_view v_evens = std::ranges::filter_view(vi, evens); // No computation
    std::cout << "vi evens : ";
    print(v_evens); // Computation happens in the print function

    // Print evens on the fly
    std::cout << "vi evens : ";
    print(std::ranges::filter_view(vi, evens));

    return 0;
}
