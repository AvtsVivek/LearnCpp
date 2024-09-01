#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <iterator>

int main()
{

    std::vector<int> v = {20, 3, 98, 34, 20, 11, 101, 201};
    std::sort(v.begin(), v.end());

    std::cout << "typeid(it_begin).name() : " << typeid(v.begin()).name() << std::endl;

    std::vector<int>::iterator low, up;

    low = std::lower_bound(v.begin(), v.end(), 20);
    up = std::upper_bound(v.begin(), v.end(), 20);

    ptrdiff_t vector_distance = std::distance(v.begin(), v.end());

    std::cout << "typeid(ptrdiff_t).name() " << typeid(ptrdiff_t).name() << std::endl;

    std::cout << "typeid(vector_distance).name() " << typeid(vector_distance).name() << std::endl;

    std::cout << "vector_distance " << vector_distance << std::endl;
    std::cout << "lower_bound at position " << (low - v.begin()) << std::endl;
    std::cout << "upper_bound at position " << (up - v.begin()) << std::endl;

    return 0;
}