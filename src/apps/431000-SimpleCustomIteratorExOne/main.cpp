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

        Iterator operator+(const int &right_operand)
        {
            // std::cout << "right oprand: " << right_operand << std::endl;
            for (int i = 0; i < right_operand; i++)
            {
                m_ptr++;
            }
            return *this;
        }

        friend bool operator==(const Iterator &a, const Iterator &b) { return a.m_ptr == b.m_ptr; };
        friend bool operator!=(const Iterator &a, const Iterator &b) { return a.m_ptr != b.m_ptr; };

    private:
        pointer m_ptr;
    };

    // ...
    Iterator begin() { return Iterator(&m_data[0]); }
    Iterator end() { return Iterator(&m_data[20]); } // 20 is out of bounds
private:
    int m_data[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
};

int main()
{
    Integers integers;
    for (auto i : integers)
        std::cout << i << "\n";

    // The following is same as above. The following is just a syntactic sugar

    // for (auto it = integers.begin(), end = integers.end(); it != end; ++it)
    // {
    //     const auto i = *it;
    //     std::cout << i << "\n";
    // }

    // auto end = std::advance(integers.begin(), 5);

    // for (auto it = integers.begin(); it != end; ++it)
    // {
    //     const auto i = *it;
    //     std::cout << i << "\n";
    // }

    auto it = integers.begin();

    std::cout << "---------------" << std::endl;

    std::cout << *it << std::endl;

    it++;

    std::cout << *it << std::endl;

    it++;

    std::cout << *it << std::endl;

    it++;

    std::cout << *it << std::endl;

    it = it + 4;

    std::cout << *it << std::endl;

    std::cout << "---------------" << std::endl;

    std::fill(it, integers.end(), 3);

    for (auto i : integers)
        std::cout << i << "\n";

    return 0;
}