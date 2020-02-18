#include <iostream>
#include <list>
// Smallest multiple
int smallest_multiple(int max)
{
  std::list<int> prime_list = {2, 3};
  if (max < 3)
    return max;
  for(int i = 3; i <= max; i ++)
  {
    bool is_prime = true;
    for(std::list<int>::iterator it = prime_list.begin(); it!= prime_list.end(); it++)
      if(i % *it == 0)
        is_prime = false;
    if(is_prime)
      prime_list.push_back(i);
  }
  int product = 1;
  for(std::list<int>::iterator it = prime_list.begin(); it!= prime_list.end(); it++) 
  {
    int prime_power = *it;
    while (prime_power * *it < max)
        prime_power *= *it;
    product *= prime_power;
  }
  return product;
}

int main()
{
  std::cout << smallest_multiple(20) << std::endl;
  return 0;
}
