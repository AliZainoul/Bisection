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
double q(double x){return (x*x)-1;};
double r(double x){return (x*x*x)-(5*x*x)+(3*x)+7;};
double s(double x){return 1-(x*x);};


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
cout << bisection(-2, 1, p, 0.000000001, 0.000000001)<< "\n";
cout << "*** **** **** ****"<< "\n";

cout << "*** **** **** ****"<< "\n";
cout << "Function q evaluated at x=1 : " << q(1) << "\n";
cout << "*** **** **** ****"<< "\n";
cout << bisection(-1, 1, q, 0.000000001, 0.000000001)<< "\n";
cout << "*** **** **** ****"<< "\n";

cout << "*** **** **** ****"<< "\n";
cout << "Function r evaluated at x=1 : " << r(1) << "\n";
cout << "*** **** **** ****"<< "\n";
cout << bisection(0, 3, r, 0.000000001, 0.000000001)<< "\n";
cout << "*** **** **** ****"<< "\n";

cout << "*** **** **** ****"<< "\n";
cout << "Function s evaluated at x=1 : " << s(1) << "\n";
cout << "*** **** **** ****"<< "\n";
cout << bisection(-3, 3, s, 0.000000001, 0.000000001)<< "\n";
cout << "*** **** **** ****"<< "\n";


}
