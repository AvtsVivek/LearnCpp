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

    std::cout << std::endl;

    std::cout << "-------- std sort --------" << std::endl;

    std::sort(integers.begin(), integers.end());

    for (auto i : integers)
        std::cout << i << " ";

    std::cout << std::endl;

    //////////////////////////////////////////////////////////////////////////////////////

    Integers<int> integers_ranges_sort;

    for (auto i : integers_ranges_sort)
        std::cout << i << " ";

    std::cout << std::endl;

    std::cout << "-------- ranges sort --------" << std::endl;

    std::ranges::sort(integers_ranges_sort);
    // The following also works.
    // std::ranges::sort(integers_ranges_sort.begin(), integers_ranges_sort.end());

    for (auto i : integers_ranges_sort)
        std::cout << i << " ";

    std::cout << std::endl;

    return 0;
}
