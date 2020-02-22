#include <iostream>
// Special Pythagorean triplet
int main()
{
  int a, b;
  for (a = 1; a < 334; a++)
    for (b = (1000 - 2 * a) / 2; b <= (1000 - a) / 2; b++)
    {
      int c = 1000 - a - b;
      if(a * a + b * b == c * c)
        std::cout << a << std::endl << b << std::endl << c << std::endl;
    }
  return 0;
}
