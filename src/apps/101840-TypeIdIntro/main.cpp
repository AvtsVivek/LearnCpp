#include <iostream>


int main(){

	//1. typeid with fundemental types : returns static type
    std::cout << "typeid(int) : " << typeid(int).name() << std::endl;
	if(typeid(22.2f) == typeid(float)){
		std::cout << "22.2f is a float" << std::endl;
	}else{
		std::cout << "22.2f is not float" << std::endl;
	}
	

    return 0;
}