#include <stdio.h>
#include <math.h>
#include < string.h >
char *find(const char *str, const char *substr) 
{
	char *istr = 0;
	istr = strstr(str, substr);
	if (istr == NULL)
		printf("Line not found\n");
	else
		printf("Line found,her number= %d\n", istr - str + 1);
	return 0;
}