#include <vector>
#include <stdio.h>

class ColorChoice
{
public:
    static long long checkChoose(long long m, int n) {
      long long x = 1;                    // first binomial coefficient
      std::vector<long long> nCk = {x};   // storage for coefficients
      for (int a=n, b=1; b<n+1; a--, b++) // generate n'th line of pascal's △
        nCk.push_back(x=x*a/b);
      for (int i=0; i<nCk.size(); i++)    // iterate coefficients
        if(nCk[i]==m)
          return i;                       // return the first match
      return -1;                          // otherwise, -1
    };
};
