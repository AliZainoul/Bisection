#include <iostream>
#include <cmath>
using namespace std;
#include "error.hpp"
#include "bisection.hpp"

typedef double (*pfn) (double);

double f(double x){return (1/x) - pow(2,x);};
double g(double x){return pow(2,(-x)) + exp(x) + 2 * cos(x) - 6;};

double p(double x){return x+1;}
double q(double x){return (x*x)-1;};
double r(double x){return (x*x*x)-(5*x*x)+(3*x)+7;};
double s(double x){return 1-(x*x);};

int main ()
{
  double delta, epsilon;
  delta = 0.00001;
  epsilon = 0.00000001 ;

cout << "*** **** **** ****"<< "\n";
cout << " Function f evaluated at " <<bisection(0, 1, f, delta, epsilon)<< " is "
<< f(bisection(0, 1, f, delta, epsilon))<<"\n";
getchar();

cout << "*** **** **** ****"<< "\n";
cout << " Function g evaluated at " <<bisection(1, 3, g, delta, epsilon)<< " is "
<< g(bisection(1, 3, g, delta, epsilon))<<"\n";
getchar();

cout << "*** **** **** ****"<< "\n";
cout << " Function p evaluated at " <<bisection(-2, 1, p, delta, epsilon)<< " is "
<< p(bisection(-2, 1, p, delta, epsilon))<<"\n";
getchar();

cout << "*** **** **** ****"<< "\n";
cout << " Function q evaluated at " <<bisection(-1, 1, q, delta, epsilon)<< " is "
<< q(bisection(-1, 1, q, delta, epsilon))<<"\n";
getchar();

cout << "*** **** **** ****"<< "\n";
cout << " Function r evaluated at " <<bisection(0, 3, r, delta, epsilon)<< " is "
<< r(bisection(0, 3, r, delta, epsilon))<<"\n";
getchar();

cout << "*** **** **** ****"<< "\n";
cout << " Function s evaluated at " <<bisection(-3, 3, s, delta, epsilon)<< " is "
<< s(bisection(-3, 3, s, delta, epsilon))<<"\n";
getchar();

}
