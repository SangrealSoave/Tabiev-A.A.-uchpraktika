#include <stdio.h>
#include <math.h>
double arr;
int n;
void main()
{
m:
	printf("Input n:\n");
	scanf("%i", &n);
	writeArray(&arr, n);
	readArray(&arr, n);
	sort(&arr, n);
	readArray(&arr, n);
	system("pause");
	printf("Continue work: yes or no?");
	switch (_getch()) {
	case 'y':
		system("cls");
		goto m;
	default:
		break;
	}
}