//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<assert.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void meun()
//{
//	printf("*************************\n");
//	printf("***  1.add     2.sub  ***\n");
//	printf("***  3.mul     4.div  ***\n");
//	printf("***     0.exit        ***\n");
//	printf("*************************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		meun();
//		int x = 0, y = 0;
//		printf("ѡ��:");
//		scanf_s("%d", &input);
//		int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//		if (input > 0 && input < 5)
//		{
//			printf("�����������Ͳ�������\n");
//			scanf_s("%d %d", &x, &y);
//			int ret = (pfArr[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else
//		{
//			if (input == 0)
//				printf("�˳�����\n");
//			else
//				printf("ѡ�������������\n");
//		}
//	} while (input);
//	return 0;
//}