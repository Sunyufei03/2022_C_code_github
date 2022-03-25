#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int a[100] = { 0 };
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", a + i);
	}
	int m;
	scanf_s("%d",&m);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (m < *(a + i))
			break;
	}
	memmove(a+i+1, a+i, (n - i)*sizeof(int));
	*(a + i) = m;
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", *(a + i));
	}
	return 0;
}