#include <iostream>
#include <list>
#include <math.h>
// Summation of primes
int main()
{
  std::list <int> prime_list {2, 3};
  int n = 5, max_value = 2000000;
  long int prime_sum = 5; 
  while (n < max_value)
  {
    bool is_prime = true;
    for(auto it = prime_list.begin(); it != prime_list.end(); it++)
    {
      if (n % *it == 0)
        is_prime = false;
      if (*it > sqrt(n))
        break;
    }
    if (is_prime)
    {
      prime_list.push_back(n);
      prime_sum += n;
    }
    n += 2;
    std::cout << n << std::endl;
  }
  std::cout << prime_sum << std::endl;
  return 0; 
}
