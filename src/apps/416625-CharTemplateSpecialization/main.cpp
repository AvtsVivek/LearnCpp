#include <iostream>
#include "map.h"

int main()
{
    Map<int> m1(11, 22);
    Map<int> m2(11, 22);
    auto result = m1.compare_to(m2);
    std::cout << "result : " << std::boolalpha << result << std::endl;
    m1.print_info();

    std::cout << "" << std::endl;

    Map<const char *> m3("Daniel", "Gakwaya");
    std::string last_name{"Daniel"};
    std::string first_name{"Gakwaya"};
    Map<const char *> m4(last_name.c_str(), first_name.c_str());
    auto char_result = m3.compare_to(m4);
    std::cout << "result : " << std::boolalpha << char_result << std::endl;

    return 0;
}