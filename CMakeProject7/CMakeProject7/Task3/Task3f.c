#include <stdio.h>
#include < string.h >
#include <stdlib.h>
char *find(const char *str, const char *substr) 
{
	char *istr = 0;
	istr = strstr(str, substr);
	if (istr == NULL)
		printf("Line not found\n");
	else
		printf("Line found,her number= %d\n", istr - str + 1);
	char *c= istr - str ;
	return c;
}
void deletet(char *str, const char *substr)
{
	 *str = (int*)
		malloc(30 * sizeof(int));
	printf("Old line: %s\n", str);
	int istr = 0;
	istr = find(str, substr);
	strcpy(str+(istr),str+(istr+strlen(substr)));
	printf("New line:%s\n",str);
	str = 0;
	free(str);
}