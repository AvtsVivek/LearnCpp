#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{

    Engineer eng1;

    CivilEngineer ce1;

    std::cout << "eng1:" << eng1 << std::endl;

    std::cout << "ce1:" << ce1 << std::endl;

    std::cout << "Done" << std::endl;

    return 0;
}