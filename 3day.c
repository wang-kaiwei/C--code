#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n=1;n<10;n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("ret=%d\n", ret);
	printf("sum=%d\n", sum);
	//¼ÆËã1£¡+2£¡+...+10£¡
	return 0;
}
//int main()
//{
//	int i = 0;
//    int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i < (n + 1); i++)
//	{
//		ret = ret*i;
//		sum = sum + ret;
//	}
//	printf("ret=%d\n", ret);
//	printf("sum=%d\n", sum);
//¼ÆËãn!
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ",i);
//		i++;
//	} 
//	while (i <= 10);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}