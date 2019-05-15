#include <stdio.h>
#include <math.h>
#include "f.h"
void main()
{
	printf("Input n:\n");
	scanf("%lf", &n);
	printf("n=%.0lf\n", n);
	summ(n);
	system("pause");
}