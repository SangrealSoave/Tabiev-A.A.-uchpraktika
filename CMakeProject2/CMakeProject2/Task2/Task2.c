#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double f(double x)
{
	double res = 0;
	if (x > 0)
	{
		res = log(x)+9;
	}
	else if (x == -sqrt(7))
	{
		res = 0;
	}
	else
	{
		res = (-x / (pow(x, 2) - 7));
	}
}
void main()
{
	double x;
	printf("Enter x:\n");
	scanf("%lf", &x);
	printf("f(%lf)=%lf\n", x,f(x));
	system("pause");
}