#include "Integer.h"

class Item
{
public:
    Item() = default;
    Item(int n) : Item(n, n, n) {}
    Item(int a_param, int b_param, int c_param) : a(a_param), b(b_param), c(c_param)
    {
    }

    // Ordering : compiler generates >, < , >=, <= and also puts in the == operator
    // auto operator<=>(const Item &right_operand) const = default;

    std::strong_ordering operator<=>(const Item &right_operand) const = default;

private:
    int a{1};
    int b{2};
    int c{3};
    Integer d;
};
