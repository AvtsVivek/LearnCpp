#include <iostream>

int item_count{6}; // External linkage

void print_item_count();

int main()
{
    std::cout << "item_count(main) : " << item_count << " &item_count : "
              << &item_count << std::endl;

    std::cout << "-----" << std::endl;
    print_item_count();

    return 0;
}

