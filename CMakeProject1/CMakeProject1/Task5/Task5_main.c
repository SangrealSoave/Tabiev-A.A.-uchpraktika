#include <stdio.h>
#include <math.h>
void main()
{
	double f(x);
	printf("Task 5\n");
	double x = 1;
	printf("Input data:\nx=%.4lf\nOutput data:\nf(x)=%.4lf\n", x, f(x));
	system("pause");
	printf("2 variant\n");
	scanf("%lf", &x);
	printf("Input data:\nx=%.4lf\nOutput data:\nf(x)=%.4lf\n", x, f(x));
	system("pause");
}