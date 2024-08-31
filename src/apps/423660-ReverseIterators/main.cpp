#include <iostream>
#include <vector>

int main()
{

    std::vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Trying out reverse iterators
    // auto it = numbers.rbegin(); // A reverse iterator increments backwards from the end.

    // The following gives compiler error.
    // std::vector<int>::iterator it= numbers.rbegin();
    std::vector<int>::reverse_iterator r_it = numbers.rbegin();
    *r_it = 34;
    std::cout << "Numbers : [";
    while (r_it != numbers.rend())
    {
        std::cout << " " << *r_it;
        ++r_it;
    }
    std::cout << "] " << std::endl;

    std::cout << "--------" << std::endl;
    /*
    auto it_rev = numbers.rbegin();

    if( it_rev != numbers.end()){ // Compiler error.
        std::cout << "Do something..." << std::endl;
    }
    */

    std::cout << "typeid(std::vector<int>::iterator).name(): " << typeid(std::vector<int>::iterator).name() << std::endl;
    std::cout << "typeid(std::vector<int>::reverse_iterator).name(): " << typeid(std::vector<int>::reverse_iterator).name() << std::endl;

    return 0;
}