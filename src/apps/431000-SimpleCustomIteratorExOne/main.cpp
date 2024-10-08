#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>

class Integers
{
public:
    struct Iterator
    {
        using iterator_category = std::forward_iterator_tag;
        using difference_type = std::ptrdiff_t;
        using value_type = int;
        using pointer = int *;   // or also value_type*
        using reference = int &; // or also value_type&

        Iterator(pointer ptr) : m_ptr(ptr)
        {
            std::cout << "Ctor.." << std::endl;
            std::cout << "Value of *m_ptr: " << *m_ptr << std::endl;
        }

        reference operator*() const { return *m_ptr; }
        pointer operator->() { return m_ptr; }

        // Prefix increment
        Iterator &operator++()
        {
            std::cout << "&operator++().." << std::endl;
            m_ptr++;
            return *this;
        }

        // Postfix increment
        Iterator operator++(int)
        {
            std::cout << "operator++(int).." << std::endl;
            Iterator tmp = *this;
            ++(*this);
            return tmp;
        }

    private:
        pointer m_ptr;
    };

    Iterator begin()
    {
        std::cout << "begin().." << std::endl;
        return Iterator(&m_data[0]);
    }
    // Iterator end() { return Iterator(&m_data[20]); } // 20 is out of bounds
private:
    int m_data[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
};

int main()
{
    Integers integers;

    auto it = integers.begin();

    std::cout << "---------------" << std::endl;

    std::cout << *it << std::endl;

    it++;

    std::cout << *it << std::endl;

    return 0;
}