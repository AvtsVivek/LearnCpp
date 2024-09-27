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
        // using iterator_category = std::forward_iterator_tag; // This is giving a compiler error.
        using iterator_category = std::random_access_iterator_tag;
        using difference_type = std::ptrdiff_t;
        // using value_type = int;
        // using pointer = int *;   // or also value_type*
        // using reference = int &; // or also value_type&
        using value_type = T;
        using pointer_type = T *;
        using reference_type = T &;

        Iterator() = default;

        // Iterator(pointer ptr) : m_ptr(ptr) {}
        Iterator(pointer_type ptr) : m_ptr(ptr) {}

        // reference operator*() const { return *m_ptr; }
        // pointer operator->() { return m_ptr; }
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

        // // Prefix decrement
        // Iterator &operator--()
        // {
        //     m_ptr--;
        //     return *this;
        // }

        // // Postfix decrement
        // Iterator operator--(int)
        // {
        //     Iterator tmp = *this;
        //     --(*this);
        //     return tmp;
        // }

        friend bool operator==(const Iterator &a, const Iterator &b) { return a.m_ptr == b.m_ptr; };
        friend bool operator!=(const Iterator &a, const Iterator &b) { return a.m_ptr != b.m_ptr; };

    private:
        // pointer m_ptr;
        pointer_type m_ptr;
    };

    // ...
    Iterator begin() { return Iterator(&m_data[0]); }
    Iterator end() { return Iterator(&m_data[20]); } // 20 is out of bounds
private:
    // int m_data[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    T m_data[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
};

int main()
{
    Integers<int> integers;

    for (auto i : integers)
        std::cout << i << " ";

    std::cout << std::endl;

    std::cout << "---------------" << std::endl;

    auto it = integers.begin();

    std::cout << *it << std::endl;

    it++;

    std::cout << *it << std::endl;

    it++;

    std::cout << *it << std::endl;

    it++;

    std::cout << *it << std::endl;

    return 0;
}
