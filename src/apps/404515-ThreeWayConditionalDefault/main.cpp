#include <compare>

struct Widget
{
  int i, j;
  auto operator <=> (const Widget &) const = default;
};


int main()
{
  Widget w1, w2;
  auto result2 = w1 != w2;
  return 0;
}
