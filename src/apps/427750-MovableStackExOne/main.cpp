#include <iostream>
#include <list>
#include <algorithm>
#include "exercise.h"

int main()
{
    std::cout << std::boolalpha;

    MovableStack stack_one;
    stack_one.push(1);
    stack_one.push(2);
    stack_one.push(3);

    std::cout << "stack_one ..." << std::endl;

    std::cout << stack_one.pop() << std::endl;   // Prints 3
    std::cout << stack_one.pop() << std::endl;   // Prints 2
    std::cout << stack_one.pop() << std::endl;   // Prints 1
    std::cout << "Is stack_one now empty? " << stack_one.empty() << std::endl; // Prints 1 (true)

    std::cout << "stack_two ..." << std::endl;

    MovableStack stack_two;
    stack_two.push(1);
    stack_two.push(2);
    stack_two.push(3);

    std::cout << stack_two.top() << std::endl; // Prints 3
    stack_two.pop();

    std::cout << stack_two.top() << std::endl; // Prints 2
    stack_two.pop();

    std::cout << stack_two.top() << std::endl; // Prints 1
    stack_two.pop();

    // stack_two.top(); // Throws exception

    std::cout << "stack_three ..." << std::endl;

    MovableStack stack_three;
    std::cout << "Is stack_three now empty? " << stack_three.empty() << std::endl; // Prints 1 (true)

    stack_three.push(1);
    stack_three.pop();
    std::cout << "Is stack_three now empty? " << stack_three.empty() << std::endl; // Prints 1 (true)

    std::cout << "stack_four ..." << std::endl;

    MovableStack stack_four;
    std::cout << stack_four.getSize() << std::endl; // Prints 0

    stack_four.push(1);
    stack_four.push(2);
    stack_four.push(3);
    std::cout << stack_four.getSize() << std::endl; // Prints 3

    stack_four.pop();
    std::cout << stack_four.getSize() << std::endl; // Prints 2

    stack_four.pop();
    std::cout << stack_four.getSize() << std::endl; // Prints 1

    stack_four.pop();
    std::cout << stack_four.getSize() << std::endl; // Prints 0

    return 0;
}