#include <iostream>
#include <string>

template <typename T> T maximum( T first, T second){

	std::cout << "typeid(first).name() : " << typeid(first).name() << std::endl;
	std::cout << "typeid(second).name() : " << typeid(second).name() << std::endl;
    std::cout << "typeid(T).name() : " << typeid(T).name() << std::endl;

    return (first > second) ? first : second;

}

int main(){

	int a{10};
	int b{23};

	double c{34.7};
	double d{23.4};

	std::string e{"hello"};
	std::string f{"world"};

    //Explicit template arguments

    auto max_int = maximum<int>(a, b);
    std::cout << "max_int : " << max_int << std::endl;

	auto max_double = maximum<double>(c, d);
    std::cout << "max_double : " << max_double << std::endl;

	auto max_string = maximum<std::string>(e, f);
    std::cout << "max_string : " << max_string << std::endl;
   
    return 0;
}