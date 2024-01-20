#include <iostream>
#include <memory>
#include "person.h"

int main()
{

    {
        // Cycling dependency problem
        // Circular dependencies
        std::shared_ptr<Person> person_a = std::make_shared<Person>("Alison");
        std::shared_ptr<Person> person_b = std::make_shared<Person>("Beth");

        person_a->set_friend(person_b);
        person_b->set_friend(person_a);
    }

    std::cout << "Done " << std::endl;
    return 0;
}