//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<assert.h>
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2));
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_struct_age(const void* e1, const void* e2)
//{
//	return (*((struct Stu*)e1)).age - (*((struct Stu*)e2)).age;
//}
//int cmp_struct_name(const void* e1, const void* e2)
//{
//	return strcmp((*((struct Stu*)e1)).name, (*((struct Stu*)e2)).name);
//}
//void print_intArr(int a[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	putchar('\n');
//}
//void print_struct(struct Stu* s, int sz)
//{
//	struct Stu* p = s;
//	for (int i = 0; i < sz; i++, p++)
//	{
//		printf("%s %d\n", p->name, p->age);
//	}
//}
//void test_int()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	bubble_sort(arr, sizeof arr / sizeof arr[0], sizeof arr[0], cmp_int);
//	print_intArr(arr, sizeof arr / sizeof arr[0]);
//}
//void test_struct()
//{
//	struct Stu s[3] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
//	int sz = sizeof s / sizeof s[0];
//	bubble_sort(s, sz, sizeof s[0], cmp_struct_age);
//	print_struct(s, sz);
//	bubble_sort(s, sz, sizeof s[0], cmp_struct_name);
//	print_struct(s, sz);
//}
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			char* stp1 = (char*)base + j * width;
//			char* stp2 = (char*)base + (j + 1) * width;
//			if (cmp(stp1, stp2) > 0)
//			{
//				for (int k = 0; k < width; k++)
//				{
//					char tmp = *stp1;
//					*stp1 = *stp2;
//					*stp2 = tmp;
//					stp1++;
//					stp2++;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	test_int();
//	test_struct();
//	return 0;
//}