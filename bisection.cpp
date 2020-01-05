#include <iostream>
#include <cmath>
#include "error.hpp"
#include "bisection.hpp"
using namespace std;
typedef double (*pfn) (double);

bool root(pfn f, double x) {return (f(x)==0.0)?true:false;};

double bisection(double a, double b, pfn f , double delta, double epsilon)
{
  double midpoint = (a+b)/ 2;
  if (root(f,midpoint)) return midpoint;
  if (root(f,a)) return a;
  if (root(f,b)) return b;
  if (root(f,0.0)) return 0.0;
  if (f(midpoint+epsilon)-f(midpoint)==0.0)
  error("Constant Functions do no admit roots.");
  if (((abs(b-a)) > delta) && ((abs(f(midpoint))) > epsilon))
  {
    if (f(a)*f(midpoint) < 0)
      return bisection(a, b=midpoint, f, delta, epsilon);
    else return bisection(a=midpoint, b, f, delta, epsilon);
  }
  return midpoint;
};
