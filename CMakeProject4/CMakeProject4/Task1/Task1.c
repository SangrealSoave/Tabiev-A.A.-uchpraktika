#include <stdio.h>
#include <math.h>
double x;
double result;
int n;
void main()
{
	void f(x,result);
	printf("Input n:\n");
	scanf("%i", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Input x:\n");
		scanf("%lf", &x);
		f(&x, &result);
		printf("x=%lf   f(x)=%lf\n", x, result);
	}
	system("pause");
}