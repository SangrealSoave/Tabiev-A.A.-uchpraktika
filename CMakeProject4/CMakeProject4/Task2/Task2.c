#include <stdio.h>
#include <math.h>
int arr;
int n;
void main()
{
	void writeArray(arr, n);
	printf("Input n:\n");
	scanf("%i", &n);
	printf("Input first digit:\n");
	scanf("%i", &arr);
	writeArray(&arr, n);
	system("pause");
}