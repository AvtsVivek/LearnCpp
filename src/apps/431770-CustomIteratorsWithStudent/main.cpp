#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>
#include "boxcontainer.h"

void print(auto view)
{
    for (auto i : view)
    { // Computation happens here.
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

struct Student
{
    friend std::ostream &operator<<(std::ostream &out, const Student &s)
    {
        out << "Student [ name : " << s.m_name << ", age : " << s.m_age << "]";
        return out;
    }
    auto operator<=>(const Student &s) const = default;
    std::string m_name;
    unsigned int m_age;
};

int main()
{

    // Students example
    std::cout << std::endl;
    std::cout << "students example : " << std::endl;

    BoxContainer<Student> class_room; //  {{"Mike",12},{"John",17},{"Drake",14},{"Mary",16}};
    class_room.add(Student("Mike", 12));
    class_room.add(Student("John", 17));
    class_room.add(Student("Drake", 14));
    class_room.add(Student("Mary", 16));

    std::cout << std::endl;
    std::cout << "classroom : " << std::endl;
    for (auto &s : class_room)
    {
        std::cout << "   " << s << std::endl;
    }

    std::ranges::sort(class_room, std::less<>{}, &Student::m_age);

    std::cout << std::endl;
    std::cout << "classroom (after sort) : " << std::endl;
    for (auto &s : class_room)
    {
        std::cout << "   " << s << std::endl;
    }

    std::cout << "students under 15 : ";
    print(std::views::take_while(class_room, [](const Student &s)
                                 { return (s.m_age < 15); }));

    std::cout << std::endl;                             
    
    auto less_than_15_v = class_room | std::views::take_while([](const Student& s){return (s.m_age <15);});

    print(less_than_15_v);
    
    std::cout << "End!" << std::endl;

    return 0;
}