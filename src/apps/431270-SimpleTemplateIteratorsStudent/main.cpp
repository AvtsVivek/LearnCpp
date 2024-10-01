#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>

template <typename T>
class Integers
{
public:
    struct Iterator
    {
        using iterator_category = std::random_access_iterator_tag;
        using difference_type = std::ptrdiff_t;
        using value_type = T;
        using pointer_type = T *;
        using reference_type = T &;

        Iterator() = default;

        Iterator(pointer_type ptr) : m_ptr(ptr) {}

        reference_type operator*() const { return *m_ptr; }

        pointer_type operator->() { return m_ptr; }

        // Prefix increment
        Iterator &operator++()
        {
            m_ptr++;
            return *this;
        }

        // Postfix increment
        Iterator operator++(int)
        {
            Iterator tmp = *this;
            ++(*this);
            return tmp;
        }

        Iterator &operator--()
        {
            m_ptr--;
            return *this;
        }
        Iterator operator--(int)
        {
            Iterator tmp = *this;
            --(*this);
            return tmp;
        }

        // Random access
        Iterator &operator+=(const difference_type offset)
        {
            m_ptr += offset;
            return *this;
        }

        Iterator operator+(const difference_type offset) const
        {
            Iterator tmp = *this;
            return tmp += offset;
        }

        Iterator &operator-=(const difference_type offset)
        {
            return *this += -offset;
        }

        Iterator operator-(const difference_type offset) const
        {
            Iterator tmp = *this;
            return tmp -= offset;
        }

        difference_type operator-(const Iterator &right) const
        {
            return m_ptr - right.m_ptr;
        }

        reference_type operator[](const difference_type offset) const
        {
            return *(*this + offset);
        }

        bool operator<(const Iterator &right) const
        {
            return m_ptr < right.m_ptr;
        }

        bool operator>(const Iterator &right) const
        {
            return right < *this;
        }

        bool operator<=(const Iterator &right) const
        {
            return !(right < *this);
        }

        bool operator>=(const Iterator &right) const
        {
            return !(*this < right);
        }

        friend Iterator operator+(const difference_type offset, const Iterator &it)
        {
            Iterator tmp = it;
            return tmp += offset;
        }
        // Random access - End

        friend bool operator==(const Iterator &a, const Iterator &b) { return a.m_ptr == b.m_ptr; };
        friend bool operator!=(const Iterator &a, const Iterator &b) { return a.m_ptr != b.m_ptr; };

    private:
        pointer_type m_ptr;
    };

    // ...
    // ...
    Iterator begin() { return Iterator(&m_data[0]); }
    Iterator end() { return Iterator(&m_data[m_size]); }

private:
    T *m_data;
    size_t m_size;

public:
    T getData() { return m_data; }

    void setData(T *value, size_t size)
    {
        m_data = value;
        m_size = size;
    }
};

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

void print(auto view)
{
    for (auto i : view)
    {
        // Computation happens here.
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // Integers<int> integers;

    // int intArray[] = {5, 1, 4, 8, 5, 3, 7, 9, 6, 22, 45};

    // std::cout << "intArray Size: " << std::size(intArray) << std::endl;

    // integers.setData(intArray, std::size(intArray));

    // std::views::drop_while_view : drops elements as long as the predicate is met

    // std::cout << std::endl;

    Integers<Student> students;

    // Students example
    std::cout << std::endl;
    std::cout << "students example : " << std::endl;

    // BoxContainer<Student> class_room; //  {{"Mike",12},{"John",17},{"Drake",14},{"Mary",16}};
    Student studentArray[] = {{"Mike",12},{"John",17},{"Drake",14},{"Mary",16}};

    students.setData(studentArray, std::size(studentArray));

    std::cout << std::endl;
    std::cout << "classroom : " << std::endl;
    for (auto &s : students)
    {
        std::cout << "   " << s << std::endl;
    }

    std::ranges::sort(students, std::less<>{}, &Student::m_age);

    std::cout << std::endl;
    std::cout << "classroom (after sort) : " << std::endl;
    for (auto &s : students)
    {
        std::cout << "   " << s << std::endl;
    }

    std::cout << "students under 15 : ";
    print(std::views::take_while(students, [](const Student &s)
                                 { return (s.m_age < 15); }));

    std::cout << std::endl;

    auto less_than_15_v = students | std::views::take_while([](const Student &s)
                                                              { return (s.m_age < 15); });
    print(less_than_15_v);

    std::cout << "End!" << std::endl;

    return 0;
}
