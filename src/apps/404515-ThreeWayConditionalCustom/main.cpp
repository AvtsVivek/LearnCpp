#include <compare>

struct Widget
{
  int i, j;

  std::strong_ordering operator<=>(const Widget &other) const
  {
    if (auto cmp = i <=> other.i; cmp != 0)
    {
      return cmp;
    }
      
    return j<=> other.j;
    
  }
};

int main()
{
  Widget w1, w2;
  auto result2 = w1 <= w2;
  return 0;
}
