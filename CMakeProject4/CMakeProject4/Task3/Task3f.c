#include <stdio.h>
#include <math.h>
void readArray(int *arr, int n)
{
	int i = 0;
	*(arr + i) = *arr;
	for(i=1;i<n+1;i++)
	{
		*(arr + i) = *(arr);
		if (i == n)
		{
			break;
		}
		printf("Input %i digit of array:\n", i+1);
		scanf("%i", arr);
	} 
	for (int i = 1; i < n+1; i++)
	{
		printf("%i ", *(arr+i));
	}
}