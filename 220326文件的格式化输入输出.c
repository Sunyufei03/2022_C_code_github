#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	FILE* pf = fopen("test.txt", "r+");
	int a[100] = { 0 },n=0;
	fscanf(pf, "%d", &n);
	for (int i = 0; i < n; i++)
	{
		fscanf(pf, "%d", (a + i));
	}
	double s = 0;
	for (int i = 0; i < n; i++)
	{
		s += *(a + i);
	}
	fprintf(pf, "\n%lf", s / n);
	fclose(pf);
	pf = NULL;
	return 0;
}