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
    Integers<int> integers;

    int intArray[] = {5, 1, 4, 8, 5, 3, 7, 9, 6, 22, 45};

    std::cout << "intArray Size: " << std::size(intArray) << std::endl;

    integers.setData(intArray, std::size(intArray));

    std::cout << std::endl;
    std::cout << "std::views::take_while : " << std::endl;
    std::ranges::take_while_view v_taken_while = std::ranges::take_while_view(integers, [](int i)
                                                                              { return (i % 2) != 0; });
    std::cout << "integers : ";
    print(integers);
    std::cout << "vi taken_while : ";
    print(v_taken_while);

    return 0;
}
