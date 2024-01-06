#include <iostream>

const double distance{}; // Declaration and definition


//Functions have external linkage by default
void print_distance() {
    std::cout << "distance (other_file) : " << distance << " &distance  :"
     << &distance << std::endl;
}


