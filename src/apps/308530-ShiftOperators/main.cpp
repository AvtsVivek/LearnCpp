#include <iostream>
#include <bitset>

int main()
{

    // unsigned short int value{0xff0u};
    unsigned short int value{2};

    std::cout << "Size of short int " << sizeof(short int) << std::endl; //  16 bits

    std::cout << "value : " << std::bitset<16>(value)
              << ", dec : " << std::dec << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value - << 1 - : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value - << 1 - : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value - << 1 - : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value - << 1 - : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value - << 1 - : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift right by one bit
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value - >> 1 - : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift by multiple bits in one go
    // Shift right by four bits
    value = static_cast<unsigned short int>(value >> 4);
    std::cout << "value - >> 4 - : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    //
    std::cout << "value - >> 1 - : " << (value >> 1) << std::endl;

    return 0;
}