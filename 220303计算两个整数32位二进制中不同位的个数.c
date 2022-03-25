//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<assert.h>
//int Count1_final(int N)
//{
//	int Ncopy = N;
//	int count = 0;
//	while (Ncopy)
//	{
//		Ncopy &= (Ncopy - 1);
//		count++;
//	}
//	return count;
//}
//int FindDeff(int a, int b)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++, a >>= 1, b >>= 1)
//	{
//		if ((a & 1) == (b & 1))
//			count++;
//	}
//	return 32 - count;
//}
//int FindDeff_final(int a, int b)
//{
//	int ret = a ^ b;
//	int count = Count1_final(ret);
//	return count;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf_s("%d %d", &a, &b);
//	int count1 = FindDeff(a, b);
//	int count2 = FindDeff_final(a, b);
//	printf("%d\n", count1);
//	printf("%d\n", count2);
//	return 0;
//}