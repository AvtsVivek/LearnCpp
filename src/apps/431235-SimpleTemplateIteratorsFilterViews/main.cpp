#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>
#include <array>

template <typename T>
class Integers
{
public:
    struct Iterator
    {
        using iterator_category = std::input_iterator_tag;
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

        friend bool operator==(const Iterator &a, const Iterator &b) { return a.m_ptr == b.m_ptr; };
        friend bool operator!=(const Iterator &a, const Iterator &b) { return a.m_ptr != b.m_ptr; };

    private:
        pointer_type m_ptr;
    };

    // ...
    Iterator begin()
    {
        return Iterator(&m_data[0]);
    }

    Iterator end()
    {
        return Iterator(&m_data[m_size]);
    }

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

int main()
{

    std::cout << "Integers asdf: " << std::endl;

    Integers<int> integers;

    int intArray[] = {5, 1, 4, 8, 5, 3, 7, 9, 6, 22, 45};

    std::cout << "intArray Size: " << std::size(intArray) << std::endl;

    integers.setData(intArray, std::size(intArray));

    for (auto i : integers)
        std::cout << i << " ";

    std::cout << std::endl;
    std::cout << "std::ranges::filter_view : " << std::endl;

    auto evens = [](int i)
    {
        return (i % 2) == 0;
    };

    std::cout << "vi : ";

    for (auto i : integers)
        std::cout << i << " ";

    std::cout << std::endl;

    std::ranges::filter_view v_evens = std::ranges::filter_view(integers, evens); // No computation
    std::cout << "vi evens : ";
    // print(v_evens); // Computation happens in the print function
    for (auto i : v_evens)
        std::cout << i << " ";

    std::cout << std::endl;

    // Print evens on the fly
    std::cout << "vi evens : ";
    // print(std::ranges::filter_view(integers, evens));
    for (auto i : std::ranges::filter_view(integers, evens))
        std::cout << i << " ";

    return 0;
}
