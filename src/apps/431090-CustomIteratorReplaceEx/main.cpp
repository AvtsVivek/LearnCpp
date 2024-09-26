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

        Iterator(pointer ptr) : m_ptr(ptr) {}

        reference operator*() const { return *m_ptr; }
        pointer operator->() { return m_ptr; }

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

        friend bool operator==(const Iterator &a, const Iterator &b) { return a.m_ptr == b.m_ptr; };
        // friend bool operator!=(const Iterator &a, const Iterator &b) { return a.m_ptr != b.m_ptr; };

    private:
        pointer m_ptr;
    };

    // ...
    Iterator begin() { return Iterator(&m_data[0]); }
    Iterator end() { return Iterator(&m_data[20]); } // 20 is out of bounds
private:
    int m_data[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 7, 15};
};

int main()
{
    Integers integers;

    std::cout << "-----------------(replace)---------------" << std::endl;

    std::cout << "numbers: " << std::endl;

    // replacing every instance of 7 with 345. The iterator needs an
    // operator++ to move forward. See possible implementation

    std::replace(integers.begin(), integers.end(), 7, 345);

    std::cout << "After Replace: " << std::endl;

    for (auto i : integers)
        std::cout << i << " ";

    return 0;
}
