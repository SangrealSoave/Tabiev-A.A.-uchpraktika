#include <stdio.h>
#include <math.h>
void readArray(double *arr, int n)
{
	for (int i =0 ; i < n ; i++)
	{
		printf("%lf ", *(arr + i));
	}
	printf("\n");
}
void writeArray(double *arr,int n)
{
	double x;
	for (int i = 0; i < n; i++)
	{
		printf("Input %i x:\n", i + 1);
		scanf("%lf", &x);
		*(arr+i) = (sin(2 * x) + sin(5 * x) - sin(2 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
		if (i == n-1)
		{
			break;
		}
	}
}
void sort(double *arr, int n)
{
	int i;
	double k;
	int j;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-1; j++)
		{
			if (*(arr+j) > *(arr + j + 1))
			{
				k = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = k;
			}
		}
	}
}