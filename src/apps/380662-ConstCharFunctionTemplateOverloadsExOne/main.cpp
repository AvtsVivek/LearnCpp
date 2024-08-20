#include <iostream>
#include <cstring>
#include "exercise.h"

int main()
{
    const char * student_to_find {"Kumar"};
    const char* students[]{ "Mary", "Steve", "Kumar", "Ahmed" };
    int index{ hunt_down(student_to_find, students, 4) };
    std::cout << index << std::endl;
    return 0;
}
