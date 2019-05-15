#include <stdio.h>
#include <math.h>
void main()
{
printf("Task 1\n");
double x = 1;
double f;
f = (sin(2 * x) + sin(5 * x) - sin(2 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
printf("Input data:\nx=%.4lf\nOutput data:f(x)=%.4lf\n", x, f);
printf("2 variant\n");
scanf("%lf", &x);
f = (sin(2 * x) + sin(5 * x) - sin(2 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
printf("Input data:\nx=%.4lf\nOutput data:\nf(x)=%.4lf\n", x, f);
system("pause");
}