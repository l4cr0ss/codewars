#include <sstream>
#include <stdio.h>
#include <iostream>
#include <cmath>

class SumSquaredDivisors
{
public:
    static std::string listSquared(long long m, long long n);
    
private:
		static std::string divsAreSquare(long long n);
};

std::string
SumSquaredDivisors::listSquared(long long m, long long n)
{
  std::string temp;                                       // stores divsAreSquare result
  std::stringstream res;                                  // stores stringified output
  int tokens = 0;                                         // enables proper comma placement
  res << "{";                                             // start the result
  for (long long i=m; i<=n; i++)                          // for the given range
    if ((temp = divsAreSquare(i)) != "")                  // if the divisors are ^2
      tokens++ > 0 ? res << ", " << temp : res << temp;   // add the result to output
  res << "}";                                             // close the result
  return res.str();                                       // stringify && return 
};

std::string
SumSquaredDivisors::divsAreSquare(long long n)
{
  std::stringstream res;
  unsigned long long sum = 0;
  for (auto i=1; i<=std::sqrt(n); i++)                    // from 1 to sqrt(n)
    if (n%i==0)                                           // if we find a factor
      sum = (n/i*n/i == i*i ? i*i : n/i*n/i + i*i) + sum; // ^2 and add (but only once)
  if (std::sqrt(sum) == std::floor(std::sqrt(sum)))       // if the sum is square
    res << "{" << n << ", " << sum << "}";                // wrap it up
  return res.str();                                       // stringify && return
};
