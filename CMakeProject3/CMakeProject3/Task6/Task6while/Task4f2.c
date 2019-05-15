#include <stdio.h>
#include <math.h>
#include "f.h"
double FindFirstElement(double eps)
{
	a = 1;
	int i = 0;
	while (fabs(a)>=eps)
	{
		a = pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		sum = sum + a;
		i++;
		if (fabs(a) <= eps)
		{
			break;
		}
	}
	printf("a=%lf\n", a);
}