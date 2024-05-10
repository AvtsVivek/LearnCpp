#include <iostream>
#include <string>
#include <limits>

int main()
{
  // Three way comparison operator : spaceship operator <=>

  int n1{5};
  int n2{5};
  int n3{0};

  auto result1 = (n1 <=> n2);

  auto result2 = (n1 <=> n3);

  std::cout << std::boolalpha;

  std::cout << "typeid(result1).name() - (n1 <=> n2) - : " << typeid(result1).name() << std::endl;

  std::cout << "typeid(result2).name() - (n1 <=> n3) - : " << typeid(result2).name() << std::endl;

  // std::cout << "result1 - (n1 <=> n2) - : " << result1 << std::endl; // This gives error

  // std::cout << "result2 - (n1 <=> n3) - : " << result2 << std::endl; // This gives error

  std::cout << "n1 > n2 : " << ((n1 <=> n2) > 0) << std::endl;

  std::cout << "n1 >= n2 : " << ((n1 <=> n2) >= 0) << std::endl;

  std::cout << "n1 == n2 : " << ((n1 <=> n2) == 0) << std::endl;

  std::cout << "n1 < n2 : " << ((n1 <=> n2) < 0) << std::endl;

  std::cout << "n1 <= n2 : " << ((n1 <=> n2) <= 0) << std::endl;

  // Strong ordering

  int n4{5};
  int n5{5};

  std::cout << std::boolalpha;
  std::cout << "n4 > n5 : " << (n4 > n5) << std::endl;   // false
  std::cout << "n4 == n5 : " << (n4 == n5) << std::endl; // true :  Absolute equality
  std::cout << "n4 < n5 : " << (n4 < n5) << std::endl;   // false

  return 0;
}