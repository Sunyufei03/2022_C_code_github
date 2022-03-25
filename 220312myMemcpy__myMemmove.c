//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//void* myMemcpy(void* destination, const void* source, size_t num)
//{
//	assert(destination && source);
//	void* t = destination;
//	while (num--)
//	{
//		*(char*)destination = *(char*)source;
//		destination = (char*)destination + 1;
//		source = (char*)source + 1;
//	}
//	return t;
//}
//void* myMemmove(void* destination, const void* source, size_t num)
//{
//	assert(destination && source);
//	void* t = destination;
//	if (destination < source)
//	{
//		while (num--)
//		{
//			*(char*)destination = *(char*)source;
//			destination = (char*)destination + 1;
//			source = (char*)source + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//			*((char*)destination + num) = *((char*)source + num);
//	}
//	return t;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int arr2[10] = { 0 };
//	myMemcpy(arr2, arr1, 20);
//	for (int i = 0; i < sizeof arr2 / sizeof arr2[0]; i++)
//	{
//		printf("%3d", arr2[i]);
//	}
//	putchar('\n');
//	memmove(arr1 + 2, arr1, 20);
//	for (i = 0; i < sizeof arr1 / sizeof arr1[0]; i++)
//	{
//		printf("%3d", arr1[i]);
//	}
//	return 0;
//}