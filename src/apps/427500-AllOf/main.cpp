#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

bool is_odd(int n)
{
    return n % 2 != 0;
}

// std::any_of ,functor as predicate
class DivisibleBy
{
private:
    const int d;

public:
    DivisibleBy(int n) : d(n) {}
    bool operator()(int n) const { return n % d == 0; }
};

int main()
{
    std::vector<int> collection_not_all_even{2, 6, 8, 49, 64, 71};
    std::set<int> collection_all_even{2, 6, 8, 40, 64, 80};
    // int collection[] {2,6,8,40,64,70};

    // std::all_of , lambda function predicate
    if (std::all_of(std::begin(collection_not_all_even), std::end(collection_not_all_even), [](int i)
                    { return i % 2 == 0; }))
    {
        std::cout << "(std::all_of) :  All numbers in collection are even" << std::endl;
    }
    else
    {
        std::cout << "(std::all_of) : Not all numbers in collection are even" << std::endl;
    }

    if (std::all_of(std::begin(collection_all_even), std::end(collection_all_even), [](int i)
                    { return i % 2 == 0; }))
    {
        std::cout << "(std::all_of) :  All numbers in collection are even" << std::endl;
    }
    else
    {
        std::cout << "(std::all_of) : Not all numbers in collection are even" << std::endl;
    }

    std::cout << "------" << std::endl;

    if (std::any_of(std::begin(collection_not_all_even), std::end(collection_not_all_even), DivisibleBy(7)))
    {
        std::cout << "(std::any_of) : At least one number is divisible by 7" << std::endl;
    }
    else
    {
        std::cout << "(std::any_of) : None of the numbers is divisible by 7" << std::endl;
    }

    if (std::any_of(std::begin(collection_all_even), std::end(collection_all_even), DivisibleBy(7)))
    {
        std::cout << "(std::any_of) : At least one number is divisible by 7" << std::endl;
    }
    else
    {
        std::cout << "(std::any_of) : None of the numbers is divisible by 7" << std::endl;
    }

    std::cout << "-------" << std::endl;

    // std::none_of , function pointer as predicate
    if (std::none_of(std::begin(collection_not_all_even), std::end(collection_not_all_even), is_odd))
    {
        std::cout << "(std::none_of) :  None of the numbers is odd" << std::endl;
    }
    else
    {
        std::cout << "(std::none_of) : At least one number is odd" << std::endl;
    }

    if (std::none_of(std::begin(collection_all_even), std::end(collection_all_even), is_odd))
    {
        std::cout << "(std::none_of) :  None of the numbers is odd" << std::endl;
    }
    else
    {
        std::cout << "(std::none_of) : At least one number is odd" << std::endl;
    }

    return 0;
}