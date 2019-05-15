#include <stdio.h>
#include <math.h>
int arr;
int n;
void main()
{
	printf("Input n:\n");
	scanf("%i", &n);
	printf("Input first digit:\n");
	scanf("%i", &arr);
	readArray(&arr, n);
	system("pause");
}