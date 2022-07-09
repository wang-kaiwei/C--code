#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	for (n = 1; n <= 9; n++)
//	{
//		for (m = 1; m <= 9; m++)
//		{
//			printf("%d*%d ",n,m);
//		}
//		
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = {0,1,2,3,4,5,60,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max=arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为：%d\n",max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int x = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i) * x;
//		x = x * (-1);
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			a++;
//		}
//		if (i / 10 == 9)
//		{
//			a++;
//		}
//	}
//	printf("%d", a);
//	return 0;
//}