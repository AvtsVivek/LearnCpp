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

    std::cout << std::endl;
    std::cout << "std::views::take_while : " << std::endl;
    std::ranges::take_while_view v_taken_while = std::ranges::take_while_view(vi, [](int i)
                                                                              { return (i % 2) != 0; });
    std::cout << "vi : ";
    print(vi);
    std::cout << "vi taken_while : ";
    print(v_taken_while);

    return 0;
}