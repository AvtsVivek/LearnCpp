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
    std::cout << "numbers : " << numbers << std::endl;

    // Iterators returned by begin() are input iterators. The requirement is that we are
    // able to read through them. That's al std::ranges::find needs.
    // Show possible implementations at cppreference.

    if (std::ranges::find(numbers.cbegin(), numbers.cend(), 8) != numbers.cend())
    {
        std::cout << "numbers contains: " << 8 << '\n';
    }
    else
    {
        std::cout << "numbers does not contain: " << 8 << '\n';
    }

    // Output iterator : std::ranges::copy
    // Iterator through which we can write

    std::cout << "---------------(copy)-----------" << std::endl;

    std::vector<int> dest(numbers.size()); // A new destination container of type vector
    // std::vector<int> dest; //  BAD! Probably a crash
    std::cout << "numbers : " << numbers << std::endl;
    std::cout << "dest : " << dest << std::endl;

    // dest.begin() has to be an output iterator, have to be able to write though it
    std::ranges::copy(numbers.cbegin(), numbers.cend(), dest.begin()); // Compiler Error dest.cbegin()
                                                                       // is not an output iterator
    std::cout << "numbers   : " << numbers << std::endl;
    std::cout << "dest      : " << dest << std::endl;

    return 0;
}
