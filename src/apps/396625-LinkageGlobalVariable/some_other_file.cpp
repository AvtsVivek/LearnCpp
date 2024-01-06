#include <iostream>

extern int item_count; // Declaration of some variable defined in some
                       // other translation unit


//Functions have external linkage by default
void print_item_count(){
    std::cout << "item_count(other_file) : " << item_count << " &item_count : "
        << &item_count << std::endl;
}

