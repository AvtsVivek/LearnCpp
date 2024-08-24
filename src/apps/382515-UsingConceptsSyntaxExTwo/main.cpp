#include <iostream>
#include <concepts>
 
template <typename T>
T add_up( const T collection[] , unsigned int size) {
    T sum{};
    for(unsigned int i{0} ; i < size ; ++i){
        sum += collection[i];
    }
    return sum;
}
 
int main(){
 
   double scores[] {40.3,50,60};
   auto result = add_up(scores,3);
   std::cout << "result : " << result << std::endl;
   return 0;
}