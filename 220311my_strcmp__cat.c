//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<assert.h>
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++, s2++;
//	}
//	return *s1 - *s2;
//}
//char* my_strcat(char* des, char* src)
//{
//	char* p = des;
//	assert(des && src);
//	while (*des) { des++; }
//	while (*des++ = *src++);
//	return p;
//}
//int main()
//{
//	char* p = "abbb";
//	char* q = "abbbq";
//	int ret = my_strcmp(p, q);
//	if (ret > 0)
//		printf("p>q\n");
//	else
//		if (ret < 0)
//			printf("p<q\n");
//		else
//			printf("p==q\n");
//	return 0;
//}