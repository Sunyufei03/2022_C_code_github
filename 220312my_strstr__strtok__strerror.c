//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cp = s1;
//	if (!*str2)
//		return (char*)str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++, s2++;
//		}
//		if (!*s2)
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	/*char arr1[] = "abcdefabcdef"
//	char arr2[] = "bcd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("failed to find it!\n");
//	else
//		printf("find:%s\n",ret);*/
//		//the use of strtok
//		/*char arr[] = "zpw@bitede.tech";
//		char* p = "@.";
//		char tmp[20] = { 0 };
//		strcpy(tmp, arr);
//		char* ret = NULL;
//		for (ret = strtok(tmp, p);ret; ret=strtok(NULL,p))
//			puts(ret);*/
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		puts(strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}