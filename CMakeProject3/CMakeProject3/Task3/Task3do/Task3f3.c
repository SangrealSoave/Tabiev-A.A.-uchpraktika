#include <stdio.h>
#include <math.h>
#include "f.h"
void print(int n, int k)
{
	a = 1;
	int i = 0;
	int j = 0;
	do
	{
		a = pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		printf("i=%i     a=%lf\n", i, a);

		if (i == k + j - 2)
		{
			j = j + k;
			++i;
			++i;
			continue;
		}
		++i;
	} while (i <= n);
}