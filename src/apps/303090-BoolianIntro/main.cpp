#include <iostream>

int main()
{

    bool is_it_raining {false};
    bool is_there_sunshine{true};
    
    if(is_it_raining == true)
        std::cout << "Stop! let it stop" << std::endl;
    else
        std::cout << "Hummm lets go..." << std::endl;
    

    if(is_there_sunshine)
        std::cout << "Where are my sun glasses..." << std::endl;
    else
        std::cout << "Pleasent time...." << std::endl;
    

    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;

    std::cout << std::endl;
    std::cout << "is_it_raining : " << is_it_raining << std::endl;
    std::cout << "is_there_sunshine : " << is_there_sunshine << std::endl;

    std::cout << std::boolalpha;
    std::cout << "is_it_raining(boolalpha) :  " << is_it_raining << std::endl;
    std::cout << "is_there_sunshine(boolalpha) : " << is_there_sunshine << std::endl;

    std::cout << std::noboolalpha;
    std::cout << "is_it_raining(noboolalpha) :  " << is_it_raining << std::endl;
    std::cout << "is_there_sunshine(noboolalpha) : " << is_there_sunshine << std::endl;
   
    std::cout << "typeid(is_there_sunshine) : " << typeid(is_there_sunshine).name() << std::endl;
    std::cout << "typeid(true) : " << typeid(true).name() << std::endl;

    return 0;

}