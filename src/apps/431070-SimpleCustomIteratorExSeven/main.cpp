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

    struct ConstIterator
    {
        using iterator_category = std::forward_iterator_tag;
        using difference_type = std::ptrdiff_t;
        using value_type = int;
        using pointer = int *;   // or also value_type*
        using reference = int &; // or also value_type&

        ConstIterator(pointer ptr) : m_ptr(ptr) {}

        reference operator*() const { return *m_ptr; }
        pointer operator->() { return m_ptr; }

        // Prefix increment
        ConstIterator &operator++()
        {
            m_ptr++;
            return *this;
        }

        // Postfix increment
        ConstIterator operator++(int)
        {
            ConstIterator tmp = *this;
            ++(*this);
            return tmp;
        }

        ConstIterator operator+(const int &right_operand)
        {
            // std::cout << "right oprand: " << right_operand << std::endl;
            for (int i = 0; i < right_operand; i++)
            {
                m_ptr++;
            }
            return *this;
        }

        friend bool operator==(const ConstIterator &a, const ConstIterator &b) { return a.m_ptr == b.m_ptr; };
        friend bool operator!=(const ConstIterator &a, const ConstIterator &b) { return a.m_ptr != b.m_ptr; };

    private:
        pointer m_ptr;
    };

    // ...
    Iterator begin() { return Iterator(&m_data[0]); }
    Iterator end() { return Iterator(&m_data[20]); } // 20 is out of bounds
    ConstIterator cbegin() { return ConstIterator(&m_data[0]); }
    ConstIterator cend() { return ConstIterator(&m_data[20]); } // 20 is out of bounds
private:
    int m_data[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
};

int main()
{
    Integers integers;

    if (std::find(integers.cbegin(), integers.cend(), 8) != integers.cend())
    {
        std::cout << "numbers contains: " << 8 << '\n';
    }
    else
    {
        std::cout << "numbers does not contain: " << 8 << '\n';
    }

    if (std::find(integers.begin(), integers.end(), 8) != integers.end())
    {
        std::cout << "numbers contains: " << 8 << '\n';
    }
    else
    {
        std::cout << "numbers does not contain: " << 8 << '\n';
    }

    return 0;
}