#include <stdio.h>
#include <math.h>
double result, x;
void f();
void main()
{
	printf("TASK 6\n");
	x = 1;
	f();
	printf("Input data:\nx=%.4lf\nOutput data:f(x)=%.4lf\n", x, result);
	printf("2 variant\n");
	scanf("%lf", &x);
	f();
	printf("Input data:\nx=%.4lf\nOutput data:f(x)=%.4lf\n", x, result);
	system("pause");
}