#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//txt:ajbkcldmenfogphqir
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (!pf)
	{
		perror("fopen");
		return 1;
	}
	char a[100] = { 0 };
	int ch;
	fgets(a, sizeof a, pf);
	fseek(pf, 0, SEEK_SET);
	for (int i = 0; i < (strlen(a))/2; i++)
	{
		ch = fgetc(pf);
		printf("%c ", ch);
		fseek(pf, 1, SEEK_CUR);
	}
	puts(" ");
	fseek(pf, 1, SEEK_SET);
	for (int i = 0; i < (strlen(a) ) / 2; i++)
	{
		ch = fgetc(pf);
		printf("%c ", ch);
		fseek(pf, 1, SEEK_CUR);
	}
	puts(" ");
	fclose(pf);
	pf = NULL;
	return 0;
}