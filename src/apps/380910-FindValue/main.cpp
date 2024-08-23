#include <iostream>
#include "exercise.h"

int main()
{
    unsigned int ids[]{222333, 44556, 123555, 917666};
    auto index = find_value<4, unsigned int>(ids, 4455622);
    std::cout << "index : " << index << std::endl;

    unsigned int ids_two[]{222333, 44556, 123555, 917666};
    auto index_two = find_value<4, unsigned int>(ids_two, 44556);
    std::cout << "index_two : " << index_two << std::endl;
}
