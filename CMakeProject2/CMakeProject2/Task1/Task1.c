#include <stdio.h>
#include <math.h>
_Bool isInArea(double x, double y)
{
	if (y <= 1 && x >= y && y >= -1 && x <= y)
	{
		return 1;
	}
	else if (y <= 1 && x >= -y)
	{
		return 1;
	}
	else {
		return 0;
	}
}
void main()
{
	double x;
	double y;
	printf("Enter x\n");
	scanf("%lf", &x);
	printf("Enter y\n");
	scanf("%lf", &y);
	double c = isInArea(x, y);
	printf("If 1 that true.\nIf 0 that false\n%lf\n", c);
	system("pause");
}
