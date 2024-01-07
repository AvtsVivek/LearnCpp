#include <iostream>
extern const double distance; // Declaration

// External linkage -> internal linkage

/*
static void some_other_function()
{
    std::cout << "Hello there" << std::endl;
}
*/
// Internal linkage


namespace{
     void some_other_function(){
        std::cout << "Hello there" << std::endl;
    }
}