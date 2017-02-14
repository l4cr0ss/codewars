#include <math.h>
#include <stdio.h>

double 
v(int k, int n)
{
  /* calculate the denominator first */
  double denom = (double)k*pow(n+1, 2*k);
  return (double) 1/denom;
};

double doubles(int maxk, int maxn) {
  double sum=0;
  for (int k=0; k<maxk; k++)
    for (int n=0; n<maxn; n++)
      sum += v(k+1, n+1);
  return sum;
}
