#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>
#include "box.h"

int main()
{

    BoxContainer<int> vi;
    vi.add(5);
    vi.add(1);
    vi.add(7);
    vi.add(2);
    vi.add(5);
    vi.add(3);
    vi.add(7);
    vi.add(9);
    vi.add(6);

    // The following will give error.
    // This is because of the const keyword.
    // const BoxContainer<int> copy(vi);
    BoxContainer<int> copy(vi);

    std::cout << "data : ";
    for (auto it = copy.begin(); it != copy.end(); ++it)
    {
        std::cout << (*it) << " ";
    }
    std::cout << std::endl;

    return 0;
}