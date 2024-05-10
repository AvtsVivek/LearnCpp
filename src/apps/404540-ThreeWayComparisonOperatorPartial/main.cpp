#include <iostream>
#include <string>
#include <limits>
#include <compare>

int main()
{

  std::string m1{"Hello"};
  std::string m2{"World"}; // World comes after Hello in alphabetical order so it's
                           // considered to be greater.

  // Three way comparison operator : spaceship operator <=>

  int n1{5};
  int n2{5};
  // int n3{0};

  auto result = (n1 <=> n2);

  std::cout << std::boolalpha;
  std::cout << "n1 > n2 : " << ((n1 <=> n2) > 0) << std::endl; // true
  std::cout << "n1 >= n2 : " << ((n1 <=> n2) >= 0) << std::endl;
  std::cout << "n1 == n2 : " << ((n1 <=> n2) == 0) << std::endl;
  std::cout << "n1 < n2 : " << ((n1 <=> n2) < 0) << std::endl;
  std::cout << "n1 <= n2 : " << ((n1 <=> n2) <= 0) << std::endl;

  // Partial ordering

  double d1{33.9};
  double d2{std::numeric_limits<double>::quiet_NaN()};

  auto result1 = (d1 <=> d2);

  std::cout << "typeid(result1).name() - (d1 <=> d2) - : " << typeid(result1).name() << std::endl;
  // std::cout << "result1 - (d1 <=> d2) - : " << result1 << std::endl; // This gives error.

  std::cout << std::boolalpha;
  std::cout << "d1 > d2 : " << (d1 > d2) << std::endl;   // false
  std::cout << "d1 == d2 : " << (d1 == d2) << std::endl; // false
  std::cout << "d1 < d2 : " << (d1 < d2) << std::endl;   // false

  return 0;
}