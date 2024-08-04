#include <iostream>
#include <memory>

class MyException
{
public:
    MyException() = default;

public:
    MyException(const MyException &ex)
    {
    }
};

int main()
{

    // If copy constructor is either deleted, protected or private, the
    // object can't be thrown as exception. You'll get a compiler error.

    std::cout << "Here we go..." << std::endl;

    try
    {
        MyException e;
        std::cout << "About to throw the exception in the try block ..." << std::endl;
        throw e; //
    }
    catch (MyException ex)
    {
        std::cout << "From the catch..." << std::endl;
    }
    std::cout << "END." << std::endl;

    return 0;
}