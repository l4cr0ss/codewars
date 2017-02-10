#include <cmath>
#include <cstdlib>
#include <cstdio>

class DigPow
{
public:
  static int digPow(int n, int p) {
    double sum=0;
    int len = snprintf(nullptr, 0, "%d", n); // get # of digits in n
    for (int i=p+len, j=n; i>p; i--, j/=10)  // iterate digits of n (backwards)
      sum += std::pow(j%10, i-1);            // sum the digits of n^i-1
    return (int)sum%n==0 ? sum/n : -1;       // return the result if it exists
  };
};

int
main(int argc, char *argv[])
{
  int n = atoi(argv[1]);
  int p = atoi(argv[2]);

  int res = DigPow::digPow(n, p);
  printf("res: %d\n", res);
  return 0;
}
