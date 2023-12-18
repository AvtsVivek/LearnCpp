#include <iostream>
#include <bitset>

int main()
{

    // Overflow

    unsigned char data{250};

    std::cout << "data : " << data << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;
    std::cout << "data (bin) - std::bitset<8>(data)  : " << std::bitset<8>(data) << std::endl;
    std::cout << "data : " << data << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;
    std::cout << "data (bin) - std::bitset<8>(data)  : " << std::bitset<8>(data) << std::endl;
    std::cout << "data : " << data << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;
    std::cout << "data (bin) - std::bitset<8>(data)  : " << std::bitset<8>(data) << std::endl;
    std::cout << "data : " << data << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;
    std::cout << "data (bin) - std::bitset<8>(data)  : " << std::bitset<8>(data) << std::endl;
    std::cout << "data : " << data << std::endl;

    ++data;
    std::cout << "data : " << std::hex << static_cast<int>(data) << std::endl; // 255
    std::cout << "data (bin) - std::bitset<8>(data)  : " << std::bitset<8>(data) << std::endl;
    std::cout << "data : " << data << std::endl;

    ++data;
    std::cout << "Now overflow happens here. All ones are reset to 0 : "; // Overflow
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 256
    std::cout << "data (bin) - std::bitset<8>(data)  : " << std::bitset<8>(data) << std::endl;
    std::cout << "data : " << data << std::endl;

    std::cout << std::dec;

    data = 1;

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;
    std::cout << "data (bin) - std::bitset<8>(data)  : " << std::bitset<8>(data) << std::endl;
    std::cout << "data : " << data << std::endl;

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;
    std::cout << "data (bin) - std::bitset<8>(data)  : " << std::bitset<8>(data) << std::endl;
    std::cout << "data : " << data << std::endl;
    return 0;
}