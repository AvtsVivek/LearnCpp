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

        Iterator operator+(const int &right_operand)
        {
            std::cout << "right oprand: +" << right_operand << std::endl;
            for (int i = 0; i < right_operand; i++)
            {
                m_ptr++;
            }
            return *this;
        }

        Iterator operator-(const int &right_operand)
        {
            std::cout << "right oprand: -" << right_operand << std::endl;
            for (int i = 0; i < right_operand; i++)
            {
                m_ptr--;
            }
            return *this;
        }

        // Prefix decrement
        Iterator &operator--()
        {
            m_ptr--;
            return *this;
        }

        // Postfix decrement
        Iterator operator--(int)
        {
            Iterator tmp = *this;
            --(*this);
            return tmp;
        }

        friend bool operator==(const Iterator &a, const Iterator &b) { return a.m_ptr == b.m_ptr; };
        friend bool operator!=(const Iterator &a, const Iterator &b) { return a.m_ptr != b.m_ptr; };

    private:
        pointer_type m_ptr;
    };

    // ...
    Iterator begin() { return Iterator(&m_data[0]); }
    Iterator end() { return Iterator(&m_data[20]); } // 20 is out of bounds
private:
    T m_data[20] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
};

int main()
{
    Integers<int> integers;

    for (auto i : integers)
        std::cout << i << " ";

    auto it = integers.begin();

    std::cout << std::endl;

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

    it = it + 2;

    std::cout << *it << std::endl;

    it = it - 2;

    std::cout << *it << std::endl;

    it--;

    std::cout << *it << std::endl;

    std::cout << "-------Fill--------" << std::endl;

    std::fill(it, integers.end(), 3);

    for (auto i : integers)
        std::cout << i << " ";

    std::cout << std::endl << "------Ranges-Fill--------" << std::endl;

    std::ranges::fill(it, integers.end(), 7);

    for (auto i : integers)
        std::cout << i << " ";

    return 0;
}
