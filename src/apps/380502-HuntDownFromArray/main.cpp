#include <iostream>
#include <string>
#include "huntdown.h"

int main()
{

    const std::string students[]{"Steve", "Karly", "Sally", "Salim"};
    std::string to_find{"Steve"};
    int return_index = hunt_down(to_find, students, 4);
    std::cout << return_index << std::endl;

    to_find = "Bart";
    return_index = hunt_down(to_find, students, 4);
    std::cout << return_index << std::endl;

    const unsigned int ids[]{1122, 4432, 7828, 9022, 3903, 3015, 2072};
    unsigned int id_to_find{2222};
    return_index = hunt_down(id_to_find, ids, 7);
    std::cout << return_index << std::endl;

    return 0;
}