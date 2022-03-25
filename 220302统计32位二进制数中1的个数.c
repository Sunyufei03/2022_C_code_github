//#include<stdio.h>
//int Count1(unsigned int N)
//{
//	unsigned int Ncopy = 0;
//	int count = 0;
//	Ncopy = N;
//	while (Ncopy > 0)
//	{
//		if ((Ncopy % 2) == 1)
//			count++;
//		Ncopy /= 2;
//	}
//	return count;
//}
//int Count1_other(int N)
//{
//	int count = 0;
//	int Ncopy = N;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((Ncopy >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
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
//int main()
//{
//	int n;
//	printf("请输入一个十进制整数:");
//	scanf_s("%d", &n);
//	int Road1 = 0, Road2 = 0, Road3 = 0;
//	Road1 = Count1(n);
//	Road2 = Count1_other(n);
//	Road3 = Count1_final(n);
//	printf("对应32位二进制数中1的个数为：%d\n", Road1);
//	printf("对应32位二进制数中1的个数为：%d\n", Road2);
//	printf("对应32位二进制数中1的个数为：%d\n", Road3);
//	return 0;
//}