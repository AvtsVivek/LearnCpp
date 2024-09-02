#include <iostream>
#include <forward_list>
#include <algorithm>

template <typename T>
void print_collection(const T &collection)
{

    auto it = collection.begin();

    std::cout << " Collection [";
    while (it != collection.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << "]" << std::endl;
}

int main()
{

    std::forward_list<int> numbers = {100, 2, 3, 4, 5};
    print_collection(numbers);

    // Code1 : Element access
    std::cout << " front element : " << numbers.front() << std::endl;

    // Modifiers

    std::cout << "---------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "modifiers : " << std::endl;

    // Clear
    std::cout << std::endl;
    std::cout << "clear :" << std::endl;
    print_collection(numbers);

    numbers.clear();

    print_collection(numbers);
    std::cout << std::boolalpha;

    // Insert after
    std::cout << std::endl;
    std::cout << "insert_after : " << std::endl;
    numbers = {11, 12, 13, 14, 15};

    print_collection(numbers);
    auto it_insert = numbers.before_begin();

    numbers.insert_after(it_insert, 333);

    print_collection(numbers);

    // Emplace after : create in place after an iterator
    std::cout << std::endl;
    std::cout << "emplace_after : " << std::endl;

    print_collection(numbers);

    it_insert = numbers.before_begin();

    numbers.emplace_after(it_insert, 444);

    print_collection(numbers);

    // Erase_after
    std::cout << std::endl;
    std::cout << "erase_after : " << std::endl;

    print_collection(numbers);

    auto it_erase = std::find(numbers.begin(), numbers.end(), 13);

    if (it_erase != numbers.end())
    {
        std::cout << " Found 13 !" << std::endl;
    }
    else
    {
        std::cout << " Couldn't find 13 !" << std::endl;
    }

    // Erase the 14
    numbers.erase_after(it_erase);

    print_collection(numbers);

    return 0;
}