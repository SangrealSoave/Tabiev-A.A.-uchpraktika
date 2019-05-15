#include <stdio.h>
#include <math.h>
#include <windows.h>
double result, x;
void f();
void main()
{
	printf("TASK 4\n");
	x = 1;
	f();
	printf("Input data:\nx=%.4lf\nOutput data:f(x)=%.4lf\n", x, result);
	printf("2 variant\n");
	scanf("%lf", &x);
	f();
	printf("Input data:\nx=%.4lf\nOutput data:f(x)=%.4lf\n", x, result);
	system("pause");
}
void f(void)
{
	result = (sin(2 * x) + sin(5 * x) - sin(2 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}