#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (!p)
	{
		return 1;
	}
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}