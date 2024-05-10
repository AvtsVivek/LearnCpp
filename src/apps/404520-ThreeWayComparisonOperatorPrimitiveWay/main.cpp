#include <iostream>
#include <string>
#include <limits>

int main()
{

  std::string m1{"Hello"};
  std::string m2{"World"}; // World comes after Hello in alphabetical order so it's
                           // considered to be greater.

  auto result = m1.compare(m2);

  // auto result = (m1 <=> m2);

  std::cout << "typeid(result) : " << typeid(result).name() << std::endl;

  if (result > 0)
  {
    std::cout << "m1 > m2" << std::endl;
  }
  else if (result == 0)
  {
    std::cout << "m1 == m2" << std::endl;
  }
  else
  {
    std::cout << "m1 < m2" << std::endl;
  }

  return 0;
}