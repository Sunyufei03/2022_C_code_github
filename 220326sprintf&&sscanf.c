#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef struct S{char a[10];
			 	 int age;
				 float f;
				 }S;
int main()
{
	S s = { "hello",20,5.5f };
	S s1 = { 0 };
	char buf[100] = { 0 };
	sprintf(buf, "%s %d %f", s.a, s.age, s.f);
	fprintf(stdout, "%s\n", buf);
	sscanf(buf, "%s %d %f", s1.a, &(s1.age), &(s1.f));
	fprintf(stdout, "%s %d %f\n", s1.a, s1.age, s1.f);
	return 0;
}