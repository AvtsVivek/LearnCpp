#include <iostream>
#include <concepts>
#include "map.h"

int main()
{
	Map<int, std::string> m1(11222, std::string{"Steve Murphy"}); // Works
	Map<long int, std::string> m2(22333, "Ahmed Malik");		  // Works - Compiler inserts conversion because of explicit arguments
	
	// The following will fail.
	// Map<double,unsigned int> m3(22.1,44555); // Fails to compile and throws good errors

	return 0;
}
