#include <iostream>
#include <cstring>
#include "CustomString.h"

int main()
{
    CU::string out("Out"); // Assume out::m_data contains address : 0x123aaa
    std::cout << "out addr : " <<(void*) out.c_str() << std::endl;
 
    {
        CU::string in("In"); // Assuming in::m_data contains address : 0x123bbb
        std::cout << "In addr : " <<(void*) in.c_str() << std::endl;
        out = in;
    }
    std::cout << "out addr : " <<(void*) out.c_str() << std::endl;
 
    return 0;
}