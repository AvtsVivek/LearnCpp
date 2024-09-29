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

    // Range adaptors
    // std::views::filter()

    std::cout << std::endl;
    std::cout << "std::views::filter : " << std::endl;
    auto evens1 = [](int i)
    {
        return (i % 2) == 0;
    };
    std::cout << "vi : ";
    print(vi);
    std::ranges::filter_view v_evens1 = std::views::filter(vi, evens1); // No computation
    std::cout << "vi evens : ";
    print(v_evens1); // Computation happens in the print function
    // Print evens on the fly
    std::cout << "vi evens : ";
    print(std::views::filter(vi, evens1));
    // Print odds on the fly
    std::cout << "vi odds : ";
    print(std::views::filter(vi, [](int i)
                             { return (i % 2) != 0; }));

    return 0;
}