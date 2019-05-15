#include <stdio.h>
#include <math.h>
#include"f.h"
void main()
{
	printf("Input eps:\n");
	scanf("%lf", &eps);
	printf("eps=%lf\n", eps);
	FindFirstNegativeElement(eps);
	system("pause");
}