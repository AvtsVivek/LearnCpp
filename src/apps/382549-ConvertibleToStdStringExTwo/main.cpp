#include <iostream>
#include <concepts>

template <typename T>
concept ConvertibleToStdString = requires(T n) {
    std::to_string(n);
};

auto concatenate(const ConvertibleToStdString auto n1, const ConvertibleToStdString auto n2)
{
    return std::to_string(n1) + std::to_string(n2);
}

int main()
{
    return 0;
}