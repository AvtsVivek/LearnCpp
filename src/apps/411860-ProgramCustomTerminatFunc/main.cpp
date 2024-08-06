#include <iostream>
#include <exception>
#include <chrono>
#include <thread>

void our_terminate_function()
{
    std::cout << "Our custom terminate function called" << std::endl;
    std::cout << "Program will terminate in 5s ..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(5000)); // Wait 5 more seconds
    std::cout << "Done ..." << std::endl;
    std::abort();
}

int main()
{

    std::cout << "Here we go..." << std::endl;

    std::set_terminate(&our_terminate_function);

    std::cout << "After defining the set_terminate function deligate..." << std::endl;
    std::cout << "Before throwing ..." << std::endl;
    throw 1;
    std::cout << "After throwing ..." << std::endl;
    return 0;
}