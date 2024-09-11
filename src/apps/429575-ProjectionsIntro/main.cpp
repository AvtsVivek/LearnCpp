#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void print_collection(const T &collection)
{
    int counter = 0;
    std::cout << " Collection [";
    for (const auto &elt : collection)
    {
        if (counter < collection.size() - 1)
        {
            std::cout << " " << elt << ", ";
        }
        else
        {
            std::cout << " " << elt;
        }
        counter++;
    }
    std::cout << " ]" << std::endl;
}

class Person
{
    friend std::ostream &operator<<(std::ostream &out, const Person &operand);

public:
    Person(std::string name, std::string address, int age, int height, int weight)
        : m_name(name), m_address(address), m_age(age), m_height(height), m_weight(weight)
    {
    }

public:
    std::string m_name;
    std::string m_address;
    int m_age;
    int m_height;
    int m_weight;
};

std::ostream &operator<<(std::ostream &out, const Person &operand)
{
    // out << "Person [" << operand.m_name << ", " << operand.m_address << ", " << operand.m_age << ", " << operand.m_height << "]";
    out << "Person [" << operand.m_name << ", " << operand.m_age << ", " << operand.m_height << "]";
    return out;
}

int main()
{

    // Sorting collections of custom items
    std::vector<Person> persons{
        Person("Vivek", "103, Bldg 7, Mira Road", 45, 65, 65),
        Person("Goel", "603, Bldg 5, Borivili, Pin 456789", 55, 45, 65),
        Person("Ranganathan", "512, Srusti Sec 2, Mira Road, Pin 401107", 52, 76, 65),
        Person("Shaym", "33, Shanti Park Sec 2, Mira Road, Pin 401107", 28, 56, 67),
        Person("Prasad", "330, Shanti Park Sec 1, Mira Road, Pin 401107", 31, 56, 67)};

    print_collection(persons);

    // std::ranges::sort(persons, [](auto &a, auto &b)
    //                   { return a.m_age < b.m_age; });

    // Assending.
    std::cout << "Asending" << std::endl;
    std::ranges::sort(persons, {}, &Person::m_age);
    // The above is same as below.
    std::ranges::sort(persons, std::ranges::less{}, &Person::m_age);

    print_collection(persons);

    std::cout << "Descending" << std::endl;

    std::ranges::sort(persons, std::ranges::greater{}, &Person::m_age);

    print_collection(persons);
    return 0;
}
