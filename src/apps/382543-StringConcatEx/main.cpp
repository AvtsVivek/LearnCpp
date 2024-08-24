#include <iostream>
#include <concepts>

template <typename T>
concept ConvertibleToStdString = requires( T n) {
                                     std::to_string(n);
                                 };
template <typename T> 
requires ConvertibleToStdString<T>

auto concatenate(const T n1, const T n2)
{
    return std::to_string(n1) + std::to_string(n2);
}

int main(){

   auto result = concatenate(22,33);
   std::cout << "result : " << result << std::endl;

   result = concatenate(22.22,33.33);
   std::cout << "result : " << result << std::endl;
   return 0;
}