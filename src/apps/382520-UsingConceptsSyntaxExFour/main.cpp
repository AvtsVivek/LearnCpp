#include <iostream>
#include <concepts>
 
template <typename T>
T add_up( const T collection[] , unsigned int size)
     requires std::integral<T> {
    T sum{};
    for(unsigned int i{0} ; i < size ; ++i){
        sum += collection[i];
    }
    return sum;
}
 
int main(){
 
   std::string message[] {"The", " sky"," is"," blue."};
   auto result = add_up(message,4);
   std::cout << "result : " << result << std::endl;
   return 0;
}