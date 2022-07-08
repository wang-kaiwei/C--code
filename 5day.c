#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//改进——引用开平方的数学库函数sqrt
int main()
{
	int i = 0;
	int x = 2;
	for (i = 101; i <= 200; i+=2, x = 2)
	{
		while (sqrt(i)> x)
		{
			if (i % x != 0)
			{
				x++;
			}
			else
			{
				break;
			}
		}
	    if (x>sqrt(i))
		{
			printf("%d ", i);
		}
	}

	return 0;
}
//int main()
//{
//	int i = 0;
//	int x = 2;
//	for (i = 100; i <= 200; i++,x=2)
//	{
//		while (i > x)
//		{
//			if (i % x != 0)
//			{
//				x++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (i > x)
//		{
//			continue;
//		}
//		else if (i == x)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int i = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ",year);
//			i++;
//		}
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			i++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			i++;*/
//		/*}*/
//	}
//	printf("\n一共有%d个闰年\n",i);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d%d", &a, &b);
//	while (m=a % b != 0)
//	{
//		a = b;
//		b = m;
//	}
//	printf("最大公约数为：%d",b);
//	return 0;
//}
////int main()
//{
//	int a = 4;
//	int b = 7;
//	int c = a % b;
//	printf("%d\n", c);
//	/*int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}*/
//	/*while (i <= 100)
//	{
//		i++;
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}*/
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("请输入三个数：\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//		
//	return 0;
//}