#include <iostream>
#include <memory>
#include "dog.h"

int main()
{

    //----------------------------------------------------------------------------------
    // Using raw pointers : Remember to manually release memory,
    //						if you don't relase , you leak memory

    Dog *p_dog2 = new Dog("Dog2");
    int *p_int1 = new int(100);

    p_dog2->print_dog();
    std::cout << "Integer is : " << *p_int1 << std::endl;
    std::cout << "Integer lives at address : " << p_int1 << std::endl;

    // If you go out of scope withoug releasing (deleting) p_dog2 and
    //  p_int1 you'll have leaked memory
    std::cout << "Now deleting the pointers by delete keyword" << std::endl;
    delete p_dog2; // Calls the destructor
    delete p_int1;
    std::cout << "deleting done" << std::endl;
    return 0;
}