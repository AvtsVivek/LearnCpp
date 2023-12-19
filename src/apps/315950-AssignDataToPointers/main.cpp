#include <iostream>

int main()
{
    std::cout << "Introducing & - the address of operator : " << std::endl;
    
    int number {22}; // Stack
	int * p_number = &number;
	
	std::cout << std::endl;
	std::cout << "Declaring pointer and assigning address : " << std::endl;
	std::cout << "number : " << number << std::endl;
	std::cout << "p_number : " << p_number << std::endl;

    std::cout << std::endl;

	std::cout << "&number : " << &number << std::endl;
    std::cout << "*&number : " << *&number << std::endl;
    std::cout << "&*&number : " << &*&number << std::endl;
    std::cout << "*&*&number : " << *&*&number << std::endl;
    std::cout << "&*&*&number : " << &*&*&number << std::endl;
    std::cout << std::endl;

	std::cout << "*p_number : " << *p_number <<  std::endl;
	std::cout << "&*p_number : " << &*p_number <<  std::endl;
	std::cout << "*&*p_number : " << *&*p_number <<  std::endl;
	std::cout << "&*&*p_number : " << &*&*p_number <<  std::endl;
	std::cout << "*&*&*p_number : " << *&*&*p_number <<  std::endl;
	std::cout << "&*&*&*p_number : " << &*&*&*p_number <<  std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    // It is better to separate these declarations on different lines though
    int *p_number7{};
    int other_int_var7{}; // No room for confusion this time

    // Initializing pointers and assigning them data
    // We know that pointers store addresses of variables
    int int_var{43};
    int *p_int{&int_var}; // The address of operator (&);

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory)  : " << p_int << std::endl;

    // You can also change the address stored in a pointer any time
    int int_var1{65};
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address)  : " << p_int << std::endl;

    // Can't cross assign between pointers of different types
    int *p_int1{nullptr};
    double double_var{33};

    // p_int = &double_var; // Compiler error

    // Dereferencing a pointer :
    int *p_int2{nullptr};
    int int_data{56};
    p_int2 = &int_data;

    std::cout << "value - *p_int2 - : " << *p_int2 << std::endl; // Dereferencing a pointer
    std::cout << "Address - p_int2 - : " << p_int2 << std::endl;
    std::cout << "Address - &int_data : " << &int_data << std::endl;
    std::cout << "value - int_data : " << int_data << std::endl;
    std::cout << "value - *&int_data : " << *&int_data << std::endl;
    return 0;
}