#ifndef BISECTION_H
#define BISECTION_H
#include <iostream>
#include <cmath>
//#include "Vector.hpp"
#include "error.hpp"
using namespace std;
typedef double (*pfn) (double);

double bisection(double a, double b, pfn f , double delta, double epsilon);
#endif
