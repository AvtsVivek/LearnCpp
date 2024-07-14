#include "CaseInsensitiveString.h"

int main(){

	CaseInsensitiveString ci_str1("Hello");
	CaseInsensitiveString ci_str2("ZELLO");
	
	std::cout << std::boolalpha;
	
	std::cout << "ci_str1 <= ci_str2 : " << (ci_str1 <= ci_str2) << std::endl;
	std::cout << "ci_str1 <= Kello : " << (ci_str1 <= "Kello") << std::endl;
    std::cout << "Kello <= ci_str2 : " << ("Kello" <= ci_str2) << std::endl;
    
	//You need to put in a == operator. Compiler won't generate one for you.
	std::cout << "ci_str1 == ci_str2 : " << (ci_str1 == ci_str2) << std::endl;
   
    return 0;
}