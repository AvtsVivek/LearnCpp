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

    // std::views::drop_while_view : drops elements as long as the predicate is met

    std::cout << std::endl;
    std::cout << "std::ranges::drop_while_view : " << std::endl;
    std::ranges::drop_while_view v_drop_while = std::ranges::drop_while_view(vi, [](int i)
                                                                             { return (i % 2) != 0; });
    std::cout << "vi : ";
    print(vi);

    std::cout << "v_drop_while : ";
    print(v_drop_while);

    std::ranges::drop_while_view v_drop_while_one = std::ranges::drop_while_view(vi, [](int i)
                                                                                 { return i != 8; });

    std::cout << "v_drop_while_one : ";
    print(v_drop_while_one);

    return 0;
}