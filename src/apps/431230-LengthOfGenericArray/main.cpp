#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>
#include <array>

template <typename T>
class Integers
{

private:
    T *m_data;

public:
    T get_data() { return m_data; }

    void set_data(T *value)
    {
        m_data = value;
    }

    int get_size()
    {
        // How to determine the size of the array here?

        // Not working. Compiler errors.
        // std::cout << "std size: " << std::size(*m_data) << std::endl;
        // std::cout << "std size: " << std::size(m_data) << std::endl;

        // Not working. Compiler errro. end was not declared in this scope
        // int c;
        // for (auto i : *m_data)
        // {
        //     std::cout << i << " ";
        //     c++;
        // }

        // Not working. Compiler errro. end was not declared in this scope
        // int c;
        // for (auto i : m_data)
        // {
        //     std::cout << i << " ";
        //     c++;
        // }

        // Not working. Compiler error
        // std::end(m_data) - std::begin(m_data);
        // std::end(*m_data) - std::begin(*m_data);
        // std::end(&m_data) - std::begin(&m_data);

        // Not working.
        // auto sizeof_data = sizeof(m_data);
        // std::cout << "sizeof_value: " << sizeof_data << std::endl; // Giving me 8 instead of 11. Why?

        // auto sizeof_data_at_zero = sizeof(m_data[0]);
        // std::cout << "sizeof_data_at_zero: " << sizeof_data_at_zero << std::endl; // Giving me 4.

        // auto sizeof_data_pointer = sizeof(*m_data);
        // std::cout << "sizeof_data_pointer: " << sizeof_data_pointer << std::endl; // Gives me 4

        // Not working. Gives me a large -ve number.
        // int len_arr_length_using_pointer = *(&m_data + 1) - m_data;
        // std::cout << "len_arr_length_using_pointer: " << len_arr_length_using_pointer << std::endl;

        // Not working, giveing pointer values.
        // std::cout << "&m_data: " << &m_data << std::endl;
        // std::cout << "&m_data[0]: " << &m_data[0] << std::endl;

        // I am trying to reach the end of array. Not successifull.
        // Not working.
        std::cout << "m_data: " << m_data << std::endl;
        std::cout << "m_data[0]: " << m_data[0] << std::endl;

        std::cout << "*m_data: " << *m_data << std::endl;
        std::cout << "m_data[9]: " << m_data[9] << std::endl;
        std::cout << "m_data[10]: " << m_data[10] << std::endl;
        std::cout << "&m_data[10]: " << &m_data[10] << std::endl;
        std::cout << "m_data[11]: " << m_data[11] << std::endl;
        std::cout << "&m_data[11]: " << &m_data[11] << std::endl;
        std::cout << "m_data[12]: " << m_data[12] << std::endl; // Large -ve number. Why?
        std::cout << "&m_data[12]: " << &m_data[12] << std::endl;

        // Compiler error.
        // std::cout << "std::begin(m_data): " << std::begin(m_data) << std::endl;

        std::cout << "&m_data[sizeof(m_data)]: " << &m_data[sizeof(m_data)] << std::endl;

        // The following is printing only 8 numbers here. Why?
        for (int *it = &m_data[0]; it != &m_data[sizeof(m_data)]; ++it)
        {
            std::cout << *it << " ";
        }

        return 0;
    }
};

int main()
{
    std::cout << "Integers : " << std::endl;

    int intArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "intArray Size: " << std::size(intArray) << std::endl;

    Integers<int> integers;

    integers.set_data(intArray);

    auto size_of_array = integers.get_size();

    return 0;
}
