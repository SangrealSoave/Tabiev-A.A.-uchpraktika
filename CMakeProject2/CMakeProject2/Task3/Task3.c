#include <stdio.h>
#include <math.h>
#include <stdlib.h>
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
double f(double x)
{
	double res = 0;
	if (x > 0)
	{
		res = log(x) + 9;
	}
	else if (x == -sqrt(7))
	{
		res = 0;
	}
	else
	{
		res = (-x / (pow(x, 2) - 7));
	}
}
int main()
{
	double x;
	double y;
	printf("Chose variant of Tasks: 1 or 2\n");
	switch (_getch())
	{case '1':
		printf("Variant 1\n");
		printf("Enter x\n");
		scanf("%lf", &x);
		printf("Enter y\n");
		scanf("%lf", &y);
		double c = isInArea(x, y);
		printf("If 1 that true.\nIf 0 that false\n%lf\n", c);
		system("pause");
		break;
	case '2':
		printf("Variant2\n");
		printf("Enter x:\n");
		scanf("%lf", &x);
		printf("f(%lf)=%lf\n", x, f(x));
		system("pause");
			break;
	default:
		printf("Unavalible Variant\n");
		system("pause");
		break;
	}
}