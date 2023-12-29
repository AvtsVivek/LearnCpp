#include <iostream>


int main(){

    //Capture everything by value. Use = inside the capture list sqare brackets.
    /*
     int c{42};
     
     auto func = [=](){
         std::cout << "Inner value : " << c << std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << std::endl;
         func();
         ++c;
     }
     */


    //Capturing all reference. Use & inside the capture list sqare brackets.
     int c{42};
     int d{5};
     
     auto func = [&](){
         std::cout << "Inner value : " << c << std::endl;
         std::cout << "Inner value(d) : " << d << std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << std::endl;
         func();
         ++c;
     }
  
    return 0;
}