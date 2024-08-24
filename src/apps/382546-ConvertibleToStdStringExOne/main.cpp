#include <iostream>
#include <concepts>

template <typename T>
concept ConvertibleToStdString = requires(T n) {
    std::to_string(n);
};

template <ConvertibleToStdString T>
auto concatenate(const T n1, const T n2)
{
    return std::to_string(n1) + std::to_string(n2);
}

int main()
{
    return 0;
}