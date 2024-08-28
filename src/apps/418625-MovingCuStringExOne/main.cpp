#include <iostream>
#include "exercise.h"

int main()
{

	CU::string s1("Hello");
	CU::string tmp("World");
	const char *storage = tmp.c_str();
	CU::string s2(std::move(tmp));

	CU::string s3 = std::move(tmp);

	return 0;
}