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
    std::cout << "std::ranges::drop_view : " << std::endl;
    std::ranges::drop_view v_drop = std::ranges::drop_view(vi, 5);
    std::cout << "vi : ";
    print(vi);
    std::cout << "vi_drop : ";
    print(v_drop);

    return 0;
}