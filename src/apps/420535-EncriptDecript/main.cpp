#include <iostream>

char encrypt(const char &param)
{ // Callback function
    return static_cast<char>(param + 3);
}

char decrypt(const char &param)
{ // Callback function
    return static_cast<char>(param - 3);
}

std::string &modify(std::string &str_param, char (*modifier)(const char &))
{
    for (size_t i{}; i < str_param.size(); ++i)
    {
        str_param[i] = modifier(str_param[i]);
    }
    return str_param;
}

int main()
{

    std::cout << "A encrypted: " << encrypt('A') << std::endl;

    std::cout << "D decrypted: " << decrypt('D') << std::endl;

    std::string msg{"Hello"};

    modify(msg, encrypt);

    std::cout << "Outcome after encryption: " << msg << std::endl;

    modify(msg, decrypt);

    std::cout << "Outcome after decryption: " << msg << std::endl;

    return 0;
}