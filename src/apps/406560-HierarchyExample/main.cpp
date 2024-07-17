#include "ab.h"

int main()
{
    B b;
    b.set_values(10, 20, 30);
    apply_changes(b);
    b.print();

    return 0;
}