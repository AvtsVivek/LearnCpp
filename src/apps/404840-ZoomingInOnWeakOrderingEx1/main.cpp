#include "ComparableString.h"

int main()
{

    ComparableString cmp_str1("Fog");

    ComparableString cmp_str2("Dogy");

    std::cout << std::boolalpha;

    std::cout << "cmp_str1 > cmp_str2 : " << (cmp_str1 > cmp_str2) << std::endl;

    std::cout << "cmp_str1 < cmp_str2 : " << (cmp_str1 < cmp_str2) << std::endl;

    std::cout << "cmp_str1 == cmp_str2 : " << (cmp_str1 == cmp_str2) << std::endl;

    return 0;
}