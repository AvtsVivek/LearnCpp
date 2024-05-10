#include "person.h"

Person::~Person()
{
    std::cout << "destructor called ..." << std::endl;
    delete age; // Make sure that you are not leaking memory
}

Person::Person()
{
    std::cout << "constructor default called ..." << std::endl;
}

Person::Person(const std::string &last_name)
    : Person(last_name, "")
{
    std::cout << "constructor 1 called ..." << std::endl;
}

Person::Person(const std::string &last_name_param, const std::string &first_name_param)
    : Person(last_name_param, first_name_param, 0)
{
    std::cout << "constructor 2 called ..." << std::endl;
}

Person::Person(const std::string &last_name_param, const std::string &first_name_param, int age_param)
    : last_name(last_name_param),
      first_name(first_name_param),
      age(new int(age_param))
{
    std::cout << "constructor with three params called ..." << std::endl;
}

/*
Person::Person(const Person source_p)  // BAAAAD!
    : last_name(source_p.get_last_name()),
        first_name(source_p.get_last_name()),
        age(source_p.get_age())

{

}
*/

// Memberwise copy : BAD
/*
Person::Person(const Person& source_p)
    : last_name(source_p.get_last_name()),
        first_name(source_p.get_first_name()),
        age(source_p.get_age())

{
    std::cout << "Copy constructor called" << std::endl;

}
*/

// Don't blindly copy pointer member variables
/*
Person::Person(const Person& source_p)
    : last_name(source_p.get_last_name()),
        first_name(source_p.get_first_name()),
        age(new int(*(source_p.get_age())))

{
    std::cout << "Copy constructor called" << std::endl;

}
*/

// Delegate from the copy constructor
//  Person::Person(const Person& source_p)
//      : Person(source_p.get_last_name(),source_p.get_first_name(),*(source_p.get_age()))
//  {
//      std::cout << "Copy constructor called" << std::endl;

// }
