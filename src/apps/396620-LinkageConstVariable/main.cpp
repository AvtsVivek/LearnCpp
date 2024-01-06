#include <iostream>


const double distance{45.8}; // Internal linkage

void print_distance();

int main(){

    
    std::cout << "distance(main) : " << distance << "  &distance : " << &distance <<std::endl;

    std::cout << "-----" << std::endl;

    print_distance();
    
    return 0;
}