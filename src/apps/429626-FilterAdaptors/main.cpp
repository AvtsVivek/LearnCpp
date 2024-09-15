#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>

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

    //////////////////////// Filter adaptors.

    std::vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // std::views::filter()
    std::cout << std::endl;
    std::cout << "std::views::filter : " << std::endl;
    auto evens1 = [](int i)
    {
        return (i % 2) == 0;
    };
    std::cout << "vi : ";
    print(vi);
    std::ranges::filter_view v_evens1 = std::views::filter(vi, evens1); // No computation
    std::cout << "vi evens : ";
    print(v_evens1); // Computation happens in the print function
    // Print evens on the fly
    std::cout << "vi evens : ";
    print(std::views::filter(vi, evens1));
    // Print odds on the fly
    std::cout << "vi odds : ";
    print(std::views::filter(vi, [](int i)
                             { return (i % 2) != 0; }));

    // Students example
    std::cout << std::endl;
    std::cout << "students example : " << std::endl;

    std::vector<Student> class_room{{"Mike", 12}, {"John", 17}, {"Drake", 14}, {"Mary", 16}};

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

    return 0;
}