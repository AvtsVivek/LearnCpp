#include <iostream>
#include "person.h"

int main()
{
    Person p1("John", "Snow", 25);
    p1.print_info();

    // Create a person copy

    std::cout << "" << std::endl;
    std::cout << "Creating person 2 object - Person p2(p1);" << std::endl;

    Person p2(p1);
    p2.print_info();

    std::cout << "-------" << std::endl;

    p1.set_age(30);
    p1.print_info();
    p2.print_info();

    return 0;
}