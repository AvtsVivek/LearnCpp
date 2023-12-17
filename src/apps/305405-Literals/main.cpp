#include <iostream>
#include <bitset>

int main()
{

    // Literal types : u and l combinations for unsigned and long.
    unsigned char unsigned_char{53u}; // 555U would fail because of narrowing

    // 2 Bytes
    short short_var{-32768};                 //  No special literal type for short)
    short int short_int{455};                //  No special literal type for short
    signed short signed_short{122};          // No special literal type for short
    signed short int signed_short_int{-456}; // No special literal type for short
    unsigned short int unsigned_short_int{5678U};

    // 4 Bytes
    const int int_var{55};           //
    signed signed_var{66};           //
    signed int signed_int{77};       //
    unsigned int unsigned_int{555U}; //

    // 4 or 8 Bytes
    long long_var{88L}; // 4 OR 8 Bytes
    long int long_int{33L};
    signed long signed_long{44l};
    signed long int signed_long_int{44l};
    unsigned long int unsigned_long_int{555ul};

    long long long_long{888ll}; // 8 Bytes
    long long int long_long_int{999ll};
    signed long long signed_long_long{444ll};
    signed long long int signed_long_long_int{1234ll};

    // Grouping Numbers : C++14 and onwards
    unsigned int prize{1'500'00'0u};
    std::cout << "The prize is : " << prize << std::endl;

    std::cout << " signed_long_long_int : " << signed_long_long_int << std::endl;

    // Narrowing errors
    // Possible narrowing errors are cought by the braced initializer method.
    // Assignment and functional don't catch that.
    // unsigned char distance {555u}; //Error [0~255]
    // unsigned int game_score {-20}; //Error

    // std::cout << "game_score : " << game_score << std::endl;

    // With number systems - Hex : prefix with 0x
    unsigned int hex_number{0x22BU}; // Dec 555
    int hex_number2{0x400};          // Dec 1024
    std::cout << std::hex << "The hex number - hex_number{0x22BU} in hex format is : " << hex_number << std::endl;
    std::cout << std::dec << "The hex number - hex_number{0x22BU} in dec format is : " << hex_number << std::endl;
    std::cout << std::hex << "The hex number - hex_number2{0x400} in hex format is is : " << hex_number2 << std::endl;
    std::cout << std::dec << "The hex number - hex_number2{0x400} in dec format is is : " << hex_number2 << std::endl;

    // Representing colors with hex
    int black_color{0xffffff};
    std::cout << "Black color - black_color{0xffffff} in dec format is: " << std::dec << black_color << std::endl;

    // Octal literals : prefix with 0
    int octal_number{0777u}; // 511 Dec
    std::cout << std::oct << "The octal number - octal_number{0777u} in octal is: " << octal_number << std::endl;
    std::cout << std::dec << "The octal number - octal_number{0777u} in decimal is: " << octal_number << std::endl;
    //!!BE CAREFUL NOT TO PREFIX YOUR INTEGERS WITH 0 IF YOU MEAN DEC
    int error_octal{055}; // This is not 55 in memory , it is 45 dec
    std::cout << std::dec << "The erronous octal number - error_octal{055} in dec is : " << error_octal << std::endl;
    std::cout << std::oct << "The erronous octal number - error_octal{055} in oct is : " << error_octal << std::endl;

    // Binary literals
    unsigned int binary_literal{0b11111111u}; // 255 dec
    std::cout << "The binary literal - binary_literal{0b11111111u} - std::bitset<4>(binary_literal) is : " << std::bitset<4>(binary_literal) << std::endl;
    std::cout << "The binary literal - binary_literal{0b11111111u} - std::bitset<8>(binary_literal) is : " << std::bitset<8>(binary_literal) << std::endl;
    std::cout << "The binary literal - binary_literal{0b11111111u} - std::bitset<16>(binary_literal) is : " << std::bitset<16>(binary_literal) << std::endl;
    std::cout << "The binary literal - binary_literal{0b11111111u} - std::bitset<32>(binary_literal) is : " << std::bitset<32>(binary_literal) << std::endl;
    std::cout << "The binary literal - binary_literal{0b11111111u} - std::bitset<64>(binary_literal) is : " << std::bitset<64>(binary_literal) << std::endl;
    std::cout << "The binary literal - binary_literal{0b11111111u} - std::bitset<132>(binary_literal) is : " << std::bitset<132>(binary_literal) << std::endl;

    // dec literals in binary format
    unsigned int dec_literal{12};
    std::cout << "The binary literal - dec_literal{12} - std::bitset<4>(dec_literal) is : " << std::bitset<4>(dec_literal) << std::endl;
    std::cout << "The binary literal - dec_literal{12} - std::bitset<8>(dec_literal) is : " << std::bitset<8>(dec_literal) << std::endl;
    std::cout << "The binary literal - dec_literal{12} - std::bitset<16>(dec_literal) is : " << std::bitset<16>(dec_literal) << std::endl;
    std::cout << "The binary literal - dec_literal{12} - std::bitset<32>(dec_literal) is : " << std::bitset<32>(dec_literal) << std::endl;
    std::cout << "The binary literal - dec_literal{12} - std::bitset<64>(dec_literal) is : " << std::bitset<64>(dec_literal) << std::endl;
    std::cout << "The binary literal - dec_literal{12} - std::bitset<132>(dec_literal) is : " << std::bitset<132>(dec_literal) << std::endl;

    std::cout << std::dec << "The binary literal - binary_literal{0b11111111u} in dec is : " << binary_literal << std::endl;
    std::cout << std::oct << "The binary literal - binary_literal{0b11111111u} in oct is : " << binary_literal << std::endl;

    std::cout << std::dec; // Turn this back on to the default decimal.

    // Other literals. This is just an example and we will learn
    // more about  strings as we progress in the course.
    char char_literal{'c'};
    int number_literal{15};
    float fractional_literal{1.5f};
    std::string string_literal{"Hit the road"};

    std::cout << "The char literal is : " << char_literal << std::endl;
    std::cout << "The number literal is : " << number_literal << std::endl;
    std::cout << "The fractional literal is : " << fractional_literal << std::endl;
    std::cout << "The string literal is : " << string_literal << std::endl;

    return 0;
}