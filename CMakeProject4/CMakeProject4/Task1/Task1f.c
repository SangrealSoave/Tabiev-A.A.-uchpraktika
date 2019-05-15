#include <stdio.h>
#include <math.h>
void f(const double *x, double *result)
{
	*result= (sin(2 * *x) + sin(5 * *x) - sin(2 * *x)) / (cos(*x) - cos(3 * *x) + cos(5 * *x));
}