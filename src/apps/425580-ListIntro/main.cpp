#include <iostream>
#include <list>
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

    std::list<int> numbers = {11, 12, 13, 14, 15};

    // Code1 : Element access
    std::cout << "---------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "element access : " << std::endl;

    print_collection(numbers);

    std::cout << " front element : " << numbers.front() << std::endl;
    std::cout << " back element : " << numbers.back() << std::endl;

    // Code2 : Iterators : forward and back, and constant
    std::cout << std::endl;
    std::cout << "iterators : " << std::endl;

    auto it = numbers.begin();

    std::cout << " (iterators) list of numbers : [";
    while (it != numbers.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << "]" << std::endl;

    // Reverse iterators
    auto it_back = numbers.rbegin();

    std::cout << " (iterators) list of numbers (reverse) : [";
    while (it_back != numbers.rend())
    {
        std::cout << " " << *it_back;
        ++it_back;
    }
    std::cout << "]" << std::endl;

    // Code3 : Capacity
    std::cout << "---------------------" << std::endl;

    std::cout << std::endl;
    std::cout << "capacity : " << std::endl;
    std::cout << " list max_size : " << numbers.max_size() << std::endl;
    std::cout << " list is empty : " << numbers.empty() << std::endl;
    std::cout << " list size : " << numbers.size() << std::endl;

    // Code4 : Modifiers

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
    std::cout << " numbers is empty : " << numbers.empty() << std::endl;

    // Insert
    std::cout << std::endl;
    std::cout << "insert : " << std::endl;
    numbers = {11, 12, 13, 14, 15};

    print_collection(numbers);
    auto it_insert = std::find(numbers.begin(), numbers.end(), 13);

    if (it_insert != numbers.end())
        numbers.insert(it_insert, 333); // Inserts after it_insert

    print_collection(numbers);

    // Emplace
    std::cout << std::endl;
    std::cout << "emplace : " << std::endl;

    print_collection(numbers);

    it_insert = std::find(numbers.begin(), numbers.end(), 14); // Emplace in front of 14

    if (it_insert != numbers.end())
        numbers.emplace(it_insert, 444);

    print_collection(numbers);

    // Erase
    std::cout << std::endl;
    std::cout << "erase : " << std::endl;

    print_collection(numbers);

    auto it_erase = std::find(numbers.begin(), numbers.end(), 333);

    if (it_erase != numbers.end())
    {
        std::cout << "Found 333 !" << std::endl;
    }
    else
    {
        std::cout << "Couldn't find 333 !" << std::endl;
    }

    // Erase the 333
    if (it_erase != numbers.end())
        numbers.erase(it_erase);

    print_collection(numbers);

    // Pop_front and pop_back
    // pop_front
    std::cout << std::endl;
    std::cout << "pop_front : " << std::endl;

    print_collection(numbers);

    numbers.pop_front();

    print_collection(numbers);

    // pop_back
    std::cout << std::endl;
    std::cout << "pop_back : " << std::endl;

    print_collection(numbers);

    numbers.pop_back();

    print_collection(numbers);

    // Push front and push_back
    // push_front
    std::cout << std::endl;
    std::cout << "push_front : " << std::endl;

    print_collection(numbers);

    numbers.push_front(111);

    print_collection(numbers);

    // push_back
    std::cout << std::endl;
    std::cout << "push_back : " << std::endl;

    print_collection(numbers);

    numbers.push_back(222);

    print_collection(numbers);

    return 0;
}