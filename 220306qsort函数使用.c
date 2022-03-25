//#include<stdio.h>
//#include<stdlib.h>
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
//	qsort(arr, sizeof arr / sizeof arr[0], sizeof arr[0], cmp_int);
//	print_intArr(arr, sizeof arr / sizeof arr[0]);
//}
//void test_struct()
//{
//	struct Stu s[3] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
//	//sort for age
//	int sz = sizeof s / sizeof s[0];
//	qsort(s, sz, sizeof s[0], cmp_struct_age);
//	print_struct(s, sz);
//	qsort(s, sz, sizeof s[0], cmp_struct_name);
//	print_struct(s, sz);
//}
//int main()
//{
//	test_int();
//	test_struct();
//	return 0;
//}