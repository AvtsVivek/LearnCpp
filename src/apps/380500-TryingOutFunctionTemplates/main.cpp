#include <iostream>
#include <string>

template <typename T>
T maximum(T a , T b){
    std::cout << "typeid(a).name() : " << typeid(a).name() << std::endl;
    std::cout << "typeid(T).name() : " << typeid(T).name() << std::endl;
    return (a > b)? a : b; 
}


int main(){

    int x{5};
    int y{7};

    int* p_x {&x};
    int* p_y {&y};

    auto result = maximum(p_x, p_y);
    std::cout << "result : " << *result << std::endl;
   
    return 0;
}