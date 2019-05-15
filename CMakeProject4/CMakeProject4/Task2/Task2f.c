#include <stdio.h>
#include <math.h>
void writeArray(int *arr, int n)
{
	int i = 0;
	do
	{
		printf("%i ", *(arr+i));
		*(arr+i+1) = *(arr+i)+ 1;
		i++;
	} while (i < n);
	printf("\n");
}