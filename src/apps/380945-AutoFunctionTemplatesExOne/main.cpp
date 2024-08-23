#include <iostream>
 
//Declaration
auto add ( auto a , auto b);
 
int main()
{
    int x{33};
    double y{33.6};
    auto result = add(x,y);
    std::cout << "result : " << result << std::endl;
    return 0;
}
 
//Definition
auto add ( auto a , auto b){
    return a + b;
}