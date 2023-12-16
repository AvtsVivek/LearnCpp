#include <iostream>


int main(){

	short int var1 {10}; // 2 bytes
	short int var2 {20};
	
	char var3 {40}; //1
	char var4 {50};
	
	std::cout << "size of var1 : " << sizeof(var1) << std::endl;
	std::cout << "size of var2 : " << sizeof(var2) << std::endl;
	std::cout << "size of var3 : " << sizeof(var3) << std::endl;
	std::cout << "size of var4 : " << sizeof(var4) << std::endl;

	std::cout << "value of vari : " << var1 << std::endl;
	std::cout << "value of var2 : " << var2 << std::endl;
	std::cout << "value of var3 : " << var3 << std::endl;
	std::cout << "value of var4 : " << var4 << std::endl;	
	
	auto result1 = var1 + var2 ;
	auto result2 = var3 + var4;
	
	std::cout << "size of result1 : " << sizeof(result1) << std::endl; // 4
	std::cout << "size of result2 : " << sizeof(result2) << std::endl; // 4
	std::cout << "value of result1 : " << result1 << std::endl; 
	std::cout << "size of result2 : " << result2 << std::endl; 
	std::cout << "typeid(result1) : " << typeid(result1).name() << std::endl; 
	std::cout << "typeid(result2) : " << typeid(result2).name() << std::endl; 	
	
	std::cout << "Notice here the type of result 1 and 2 are of integer which are of 4 bytes. " << std::endl; 		
	std::cout << "What we need to understand here is when we add two short int, we cannot get the result in short int. " << std::endl; 			
	std::cout << "What we get is int instead, which is of 4 bytes. " << std::endl; 				
	std::cout << "The compiler automatically casts into an inteager instead of short int. " << std::endl; 					
	std::cout << "This is because of the limitation of computer arch. " << std::endl; 						
	std::cout << "They cannot add two short ints. If they have to add, then must convert into int and then add them. " << std::endl; 							
   
    return 0;
}