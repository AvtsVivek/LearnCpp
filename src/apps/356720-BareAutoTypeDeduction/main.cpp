#include <iostream>

int main()
{

	// Type deduction with auto : Just a copy

	/*

	double some_var{55.5};

	auto x = some_var;

	std::cout << "sizeof(some_var) : " << sizeof(some_var) << std::endl;
	std::cout << "sizeof(x) : " << sizeof(x) << std::endl;
	std::cout << "&some_var : " << &some_var << std::endl;
	std::cout << "&x : " << &x << std::endl;
	std::cout << " some_var : " << some_var << std::endl;
	std::cout << " x : " << x << std::endl;
	std::cout << " typeid(x).name() : " << typeid(x).name() << std::endl;
	std::cout << " typeid(some_var).name() : " << typeid(some_var).name() << std::endl;

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;	

	*/


	/*
	double some_double_var = 55.5; // double

	double &some_double_var_ref{some_double_var};

	auto y = some_double_var_ref; // y is not deduced as a reference to double
						   // it's just a double that contains the value
						   // in some_double_var_ref
	++y;

	std::cout << "sizeof(some_double_var) : " << sizeof(some_double_var) << std::endl;		 // 8
	std::cout << "sizeof(some_double_var_ref) : " << sizeof(some_double_var_ref) << std::endl; // 8
	std::cout << "sizeof(y) : " << sizeof(y) << std::endl;						 // 8
	std::cout << "&some_double_var : " << &some_double_var << std::endl;						 // 0xabc123
	std::cout << "&some_double_var_ref : " << &some_double_var_ref << std::endl;				 // 0xabc123
	std::cout << "&y : " << &y << std::endl;									 // 0xaab543
	std::cout << "some_double_var : " << some_double_var << std::endl;						 // 55.5
	std::cout << "some_double_var_ref : " << some_double_var_ref << std::endl;				 // 55.5
	std::cout << "y : " << y << std::endl;										 // 56.5

	std::cout << "typeid(some_double_var).name() : " << typeid(some_double_var).name() << std::endl;
	std::cout << "typeid(some_double_var_ref).name() : " << typeid(some_double_var_ref).name() << std::endl;
	std::cout << "typeid(y).name() : " << typeid(y).name() << std::endl;


	std::cout << "" << std::endl;
	std::cout << "" << std::endl;	

	*/


	// True reference deduction

	/*

	double some_reference_var = 55.5; // double
	double &some_reference_var_ref{some_reference_var};

	auto &z = some_reference_var_ref; // z is deduced as a double reference
	++z;

	std::cout << "sizeof(some_reference_var) : " << sizeof(some_reference_var) << std::endl;		 // 8
	std::cout << "sizeof(some_reference_var_ref) : " << sizeof(some_reference_var_ref) << std::endl; // 8
	std::cout << "sizeof(z) : " << sizeof(z) << std::endl;											 // 8
	std::cout << "&some_reference_var : " << &some_reference_var << std::endl;						 // 0xabc123
	std::cout << "&some_reference_var_ref : " << &some_reference_var_ref << std::endl;				 // 0xabc123
	std::cout << "&z : " << &z << std::endl;														 // 0xabc123
	std::cout << "some_reference_var : " << some_reference_var << std::endl;						 // 56.5
	std::cout << "some_reference_var_ref : " << some_reference_var_ref << std::endl;				 // 56.5
	std::cout << "z : " << z << std::endl;															 // 56.5

	std::cout << "typeid(some_reference_var).name() : " << typeid(some_reference_var).name() << std::endl;
	std::cout << "typeid(&some_reference_var_ref).name() : " << typeid(&some_reference_var_ref).name() << std::endl;
	std::cout << "typeid(some_reference_var_ref).name() : " << typeid(some_reference_var_ref).name() << std::endl;
	std::cout << "typeid(&z).name() : " << typeid(&z).name() << std::endl;
	std::cout << "typeid(z).name() : " << typeid(z).name() << std::endl;

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;	

	*/

	// Constness is preserved with properly deduced references.

	const double some_other_var{44.3};

	const double &const_ref{some_other_var};

	auto &p = const_ref;

	std::cout << "some_other_var : " << some_other_var << std::endl;
	std::cout << "const_ref : " << const_ref << std::endl;
	std::cout << "p : " << p << std::endl;

	//++p; // Compiler error

	std::cout << "some_other_var : " << some_other_var << std::endl;
	std::cout << "const_ref : " << const_ref << std::endl;
	std::cout << "p : " << p << std::endl;

	std::cout << "typeid(some_other_var).name() : " << typeid(some_other_var).name() << std::endl;
	std::cout << "typeid(const_ref).name() : " << typeid(const_ref).name() << std::endl;
	std::cout << "typeid(&const_ref).name() : " << typeid(&const_ref).name() << std::endl;
	std::cout << "typeid(p).name() : " << typeid(p).name() << std::endl;
	std::cout << "typeid(&p).name() : " << typeid(&p).name() << std::endl;


	std::cout << "" << std::endl;
	std::cout << "" << std::endl;	


	// Constness doesn't matter with non reference deduction
	const double i_am_const{71.2};
	const double &my_ref{i_am_const};

	auto q = my_ref; // q is a separate variable, initialized with the
					 // value in i_am_const.
	++q;			 // Can modify q without a problem. It's a copy.

	std::cout << "typeid(i_am_const).name() : " << typeid(i_am_const).name() << std::endl;
	std::cout << "typeid(my_ref).name() : " << typeid(my_ref).name() << std::endl;
	std::cout << "typeid(&my_ref).name() : " << typeid(&my_ref).name() << std::endl;
	std::cout << "typeid(q).name() : " << typeid(q).name() << std::endl;
	std::cout << "typeid(&q).name() : " << typeid(q).name() << std::endl;

	return 0;
}