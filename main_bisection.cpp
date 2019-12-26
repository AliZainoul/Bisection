#include <iostream>
#include <cmath>
using namespace std;

//#include "Vector.hpp"
#include "error.hpp"
#include "bisection.hpp"

typedef double (*pfn) (double);

double f(double x){return (1/x) - pow(2,x);};
double g(double x){return pow(2,(-x)) + exp(x) + 2 * cos(x) - 6;};
double p(double x){return x+1;}

int main ()
{
cout << "*** **** **** ****"<< "\n";
cout << "Function f evaluated at x=1 : " << f(1) << "\n";
cout << "*** **** **** ****"<< "\n";
cout << bisection(0, 1, f, 0.000000001, 0.000000001)<< "\n";
cout << "*** **** **** ****"<< "\n";


cout << "*** **** **** ****"<< "\n";
cout << "Function g evaluated at x=1 :  " << g(1) << "\n";
cout << "*** **** **** ****"<< "\n";
cout << bisection(1, 3, g, 0.000000001, 0.000000001)<< "\n";
cout << "*** **** **** ****"<< "\n";

cout << "*** **** **** ****"<< "\n";
cout << "Function p evaluated at x=1 :  " << p(1) << "\n";
cout << "*** **** **** ****"<< "\n";
cout << bisection(-2, 2, p, 0.000000001, 0.000000001)<< "\n";
cout << "*** **** **** ****"<< "\n";


}
