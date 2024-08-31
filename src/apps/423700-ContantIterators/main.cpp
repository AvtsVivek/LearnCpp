#include <iostream>
#include <vector>

template <typename T>
void print_collection(const T &collection)
{

    auto it = collection.begin();

    std::cout << " [";
    while (it != collection.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << "]" << std::endl;
}

int main()
{

    std::vector<int> numbers{11, 22, 33, 44, 55, 66, 77};

    std::cout << "numbers : ";
    print_collection(numbers);

    std::vector<int>::iterator it = numbers.begin();
    while (it != numbers.end())
    {
        *it = 100;
        ++it;
    }

    std::vector<int> numbers_second_set{111, 222, 333, 444, 555, 666, 777};

    std::cout << "numbers : ";
    print_collection(numbers_second_set);

    std::cout << "-------" << std::endl;

    // You can use either of the following.
    // std::vector<int>::const_iterator c_it = numbers.cbegin();
    // above OR below
    auto c_it = numbers_second_set.cbegin();
    while (c_it != numbers_second_set.end())
    {
        // *c_it = 100; // This will give compiler error.
        std::cout << *c_it << " ";
        ++c_it;
    }

    std::cout << std::endl;

    // Constant reverse iterators
    auto crit = numbers_second_set.crbegin();
    // std::vector<int>::const_reverse_iterator it1= numbers.crbegin();

    while (crit != numbers_second_set.crend())
    {
        //*it1 = 600; // Compiler error, it1 is a const iterator, we can't modify
        // container data through it.
        std::cout << *crit << " ";
        ++crit;
    }

    return 0;
}