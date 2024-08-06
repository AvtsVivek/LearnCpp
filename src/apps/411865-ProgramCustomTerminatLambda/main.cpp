#include <iostream>
#include <exception>
#include <chrono>
#include <thread>

int main()
{
    std::cout << "Here we go ..." << std::endl;
    std::set_terminate([]()
                       {
        std::cout << "Our custom terminate function called" << std::endl;
        std::cout << "Program will terminate in 5s ..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));//Wait 5 more seconds
            std::cout << "Done ..." << std::endl;
        std::abort(); });
    std::cout << "After defining the lambda ..." << std::endl;
    std::cout << "We are about to throw now ..." << std::endl;
    throw 1;

    return 0;
}