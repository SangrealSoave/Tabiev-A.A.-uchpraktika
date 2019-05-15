#include <stdio.h>
#include <math.h>
#include "f.h"
double summ(int n)
{
	double a;
	int i = 0;
	do 
	{
		a = pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		sum = sum + a;
		++i;
	} while (i < n );
	printf("sum=%lf\n", sum);
}