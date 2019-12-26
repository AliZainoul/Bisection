#include <iostream>
#include <cmath>
//#include "Vector.hpp"
#include "error.hpp"
using namespace std;
typedef double (*pfn) (double);

double bisection(double a, double b, pfn f , double delta, double epsilon)
{
  double midpoint = (a+b)/ 2;
  while (((abs(b-a)) > delta) && ((abs(f(midpoint))) > epsilon)
)
  {
    if (f(a)*f(midpoint) < 0) return bisection (a, b=midpoint, f, delta, epsilon);
    else return bisection(a=midpoint, b, f, delta, epsilon);
  }
  return midpoint;
}
