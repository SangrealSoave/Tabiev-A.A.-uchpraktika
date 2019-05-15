#include <stdio.h>
#include <math.h>
double f(double x)
{
	return (sin(2 * x) + sin(5 * x) - sin(2 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}
void main()
{
	printf("Task 2\n");
	double x = 1;
	printf("Input data:\nx=%.4lf\nOutput data:\nf(x)=%.4lf\n", x, f(x));
	printf("2 variant\n");
	scanf("%lf", &x);
	printf("Input data:\nx=%.4lf\nOutput data:\nf(x)=%.4lf\n", x, f(x));
	system("pause");
}