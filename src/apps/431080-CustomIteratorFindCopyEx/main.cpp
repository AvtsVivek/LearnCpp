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
    int m_data[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
};

int main()
{
    Integers integers;

    std::cout << "Find algo trial. " << '\n';

    if (std::find(integers.begin(), integers.end(), 8) != integers.end())
    {
        std::cout << "numbers contains: " << 8 << '\n';
    }
    else
    {
        std::cout << "numbers does not contain: " << 8 << '\n';
    }

    Integers integers_dest;

    auto it_dest = integers_dest.begin();

    std::cout << "---------------" << std::endl;

    std::fill(it_dest, integers_dest.end(), 0);

    for (auto i : integers_dest)
        std::cout << i << " ";

    // dest.begin() has to be an output iterator, have to be able to write though it
    std::copy(integers.begin(), integers.end(), integers_dest.begin()); // Compiler Error dest.cbegin()
                                                                        // is not an output iterator

    std::cout << std::endl;

    for (auto i : integers_dest)
        std::cout << i << " ";

    return 0;
}
