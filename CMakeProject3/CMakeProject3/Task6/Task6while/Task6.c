#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "f.h"
void main()
{
	printf("Chose Task:\n1-Task1.\n2-Task2.\n3-Task3.\n4-Task4.\n5-Task5.\n6-Exit\n");
	switch(_getch())
	{
	case '1':
		system("cls");
		printf("Task1:\n");
		printf("Input n:\n");
		scanf("%i", &n);
		printf("n=%i\n", n);
		summ(n);
		system("pause");
		break;
	case '2':
		system("cls");
		printf("Task2:\n");
		printf("Input eps:\n");
		scanf("%lf", &eps);
		printf("eps=%lf\n", eps);
		summ2(eps);
		system("pause");
		break;
	case '3':
		system("cls");
		printf("Task3:\n");
		printf("Input n:\n");
		scanf("%i", &n);
		printf("Input k:\n");
		scanf("%i", &k);
		print(n, k);
		system("pause");
		break;
	case '4':
		system("cls");
		printf("Task4:\n");
		printf("Input eps:\n");
		scanf("%lf", &eps);
		printf("eps=%lf\n", eps);
		FindFirstElement(eps);
		system("pause");
		break;
	case '5':
		system("cls");
		printf("Task5:\n");
		printf("Input eps:\n");
		scanf("%lf", &eps);
		printf("eps=%lf\n", eps);
		FindFirstNegativeElement(eps);
		system("pause");
		break;
	case '6':
		system("end");
		break;
	default:
		printf("Unavalible Variant\n");
		system("pause");
		break;
	}
}