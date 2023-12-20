#include <iostream>
#include <string>

int main()
{

    std::string message{"Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!vvHello world!Hello world!Hello world!Hello world!Hello world!"};
    std::string &message_copy{message};
    std::string seperate_message_copy{message};

    char *p1 = message.data();
    char *p2 = message_copy.data();
    char *p3 = seperate_message_copy.data();

    std::cout << "Address of message - &message[0] - (void *)p1 : " << (void *)p1 << std::endl;
    std::cout << "Address of message copy - &message_copy[0] - (void *)p2 : " << (void *)p2 << std::endl;
    std::cout << "Address of seperate message copy - &seperate_message_copy[0] - (void *)p3 : " << (void *)p3 << std::endl;

    std::cout << "" << std::endl;
    std::cout << std::endl;

    std::cout << "message - &message[0] - p1 : " << p1 << std::endl;
    std::cout << "message copy - &message_copy[0] -p2 : " << p2 << std::endl;
    std::cout << "seperate message copy - &seperate_message_copy[0] -p3 : " << p3 << std::endl;

    return 0;
}