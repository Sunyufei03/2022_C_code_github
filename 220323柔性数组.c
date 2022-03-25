#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
typedef struct S
{
	int n;
	int arr[0];
}S;
int main()
{
	S* ps = (S*)malloc(sizeof(S) + 10 * sizeof(int));
	if (!ps)
		return 1;
	ps->n = 10;
	for (int i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	S* ptr = (S*)realloc(ps, sizeof(S) + 20 * sizeof(int));
	if (ptr)
	{
		ps = ptr;
	}
	for (int i = 10; i < 20; i++)
	{
		ps->arr[i] = i;
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	ptr = NULL;
	return 0;
}