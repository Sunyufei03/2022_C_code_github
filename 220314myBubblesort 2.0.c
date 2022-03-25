//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//int arr[100] = { 0 };
//const void swap(const void* e1, const void* e2, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		char tmp = *(char*)e1;
//		*(char*)e1 = *(char*)e2;
//		*(char*)e2 = tmp;
//		(char*)e1 = (char*)e1 + 1;
//		(char*)e2 = (char*)e2 + 1;
//	}
//}
//void myBubblesort(void* base,
//	size_t num,
//	size_t size,
//	double (*cmp)(const void*, const void*))
//{
//	assert(base && cmp);
//	for (char* i = (char*)base; i < ((char*)base + size * (num - 1)); (char*)i += size)
//	{
//		for (char* j = (char*)base; j < ((char*)base + size * (num - 1)); (char*)j += size)
//		{
//			if (cmp(j, j + size) < 0.0)
//			{
//				swap(j, j + size, size);
//			}
//		}
//	}
//}
//int intcmp(const void* e1, const void* e2)
//{
//	assert(e1 && e2);
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	printf("input the number of the arr:");
//	int n = 0;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", arr + i);
//	}
//	myBubblesort(arr, n, sizeof arr[0], intcmp);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	puts('\n');
//	return 0;
//}