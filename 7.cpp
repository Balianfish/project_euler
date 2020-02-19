#include <iostream>
#include <list>
// 10001st prime
int main()
{
  std::list<long int> prime_list {2};
  long int curr = 3;
  while(prime_list.size() < 10001)
  {
    bool is_prime = true;
    for(auto it = prime_list.begin(); it != prime_list.end(); it++)
    {
      if(curr % *it == 0)
      {  
        is_prime = false;
        break;
      }
    }
    if(is_prime)
      prime_list.push_back(curr);
    curr += 2;
  }
//  for(auto it = prime_list.begin(); it != prime_list.end(); it++)
//    std::cout << *it << std::endl;
  std::cout << prime_list.back() << std::endl;
}
