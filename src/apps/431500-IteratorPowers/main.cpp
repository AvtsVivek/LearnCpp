#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>

template <typename T>
std::ostream &operator<<(std::ostream &out, const std::vector<T> &vec)
{
    out << " [ ";
    for (auto i : vec)
    {
        out << i << " ";
    }
    out << "]";
    return out;
}

int main()
{

    // Source collection
    std::vector<int> numbers{1, 9, 3, 7, 2, 5, 4, 6, 89};

    // Forward iteator : std::ranges::replace , std::ranges::fill

    std::cout << "-----------------(replace)---------------" << std::endl;

    std::cout << "numbers : " << numbers << std::endl;

    // replacing every instance of 7 with 345. The iterator needs an
    // operator++ to move forward. See possible implementation

    std::ranges::replace(numbers.begin(), numbers.end(), 7, 345);
    std::cout << "numbers : " << numbers << std::endl;

    // Bidirectional iterator

    std::cout << "---------------(bi-directional)-------------" << std::endl;

    std::cout << "numbers : " << numbers << std::endl;

    std::cout << "--------------(manual reversing)------------" << std::endl;

    auto it_first = numbers.begin();
    auto it_last = numbers.end();
    while (it_last-- != it_first)
    {
        std::cout << *it_last << " ";
    }

    std::cout << std::endl;

    std::cout << "-----------(using reverse function)---------" << std::endl;

    std::ranges::reverse(numbers.begin(), numbers.end());
    std::cout << "numbers : " << numbers << std::endl;

    // Random access iteator : std::ranges::sort
    // Contiguous iterator : C++ 20 don't have a concrete example for this
    
    std::cout << "----------------------(sort)----------------" << std::endl;
    std::cout << "numbers : " << numbers << std::endl;

    //Sorting the collection
    std::ranges::sort(numbers);
    std::cout << "numbers : " << numbers << std::endl;
    

    return 0;
}