#include <stdio.h>
#include <math.h>
#include "f.h"
double summ(int n)
{
	double a;
	int i = 0;
	while(i<n)
	{
		a = pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		sum = sum + a;
		++i;
	}
	printf("sum=%lf\n", sum);
}