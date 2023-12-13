#include <iostream>

int main()
{

	std::cout << "typeid(int) : " << typeid(int).name() << std::endl;

	std::cout << "typeid(typeid(int)) : " << typeid(typeid(int)).name() << std::endl;

	std::cout << "typeid(typeid(typeid(int))) : " << typeid(typeid(typeid(int))).name() << std::endl;

	std::cout << "typeid(typeid(typeid(1/0))) : " << typeid(typeid(typeid(1 / 0))).name() << std::endl;

	std::cout << "typeid(1/0) : " << typeid(1 / 0).name() << std::endl;

	std::cout << "typeid(1.1/0) : " << typeid(1.1 / 0).name() << std::endl;

	int zeroint = 0;

	float floatinfinumber = 1.1 / zeroint;

	std::cout << "The value of floatinfinumber - 1.1/zeroint - 1.1/0 is : " << floatinfinumber << std::endl;

	std::cout << "typeid(floatinfinumber) : " << typeid(floatinfinumber).name() << std::endl;

	double doubleinfinumber = 1.1 / zeroint;

	std::cout << "The value of doubleinfinumber - 1.1/zeroint - 1.1/0 is : " << doubleinfinumber << std::endl;

	std::cout << "typeid(doubleinfinumber) : " << typeid(doubleinfinumber).name() << std::endl;

	if (typeid(22.2f) == typeid(float))
		std::cout << "22.2f is a float" << std::endl;
	else
		std::cout << "22.2f is not float" << std::endl;

	return 0;
}