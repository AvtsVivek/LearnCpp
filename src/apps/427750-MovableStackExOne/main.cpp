#include <iostream>
#include <list>
#include <algorithm>
#include "exercise.h"

int main()
{

    MovableStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << stack.pop() << std::endl;   // Prints 3
    std::cout << stack.pop() << std::endl;   // Prints 2
    std::cout << stack.pop() << std::endl;   // Prints 1
    std::cout << stack.empty() << std::endl; // Prints 1 (true)

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

    stack_two.top(); // Throws exception

    MovableStack stack_three;
    std::cout << stack_three.empty() << std::endl; // Prints 1 (true)

    stack_three.push(1);
    stack_three.pop();
    std::cout << stack_three.empty() << std::endl; // Prints 1 (true)

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