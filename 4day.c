#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[20] = { 0 };
	int i = 0;
	while (i < 3)
	{
		printf("请输入密码：");
		scanf("%s", arr);
		if (strcmp(arr ,"123456")==0)//  ==不能用来比较两个字符串是否相等，需要使用库函数—strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
			i++;
		}
	}
	if (i == 3)
	{
		printf("密码错误次数过多，登录失败\n");
	}

	return 0;
}
//#include<string.h>
//#include<windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to yingtan!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息一秒
//		left++;
//		right--;
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	char arr2[] = "abc";
//	int a = sizeof(arr1) / sizeof(arr1[0]);
//	int b = sizeof(arr2) / sizeof(arr2[0]);
//	printf("a=%d,b=%d",a,b);
//	return 0;
//}

//int main()
//{
//	int k = 1;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//	int left = 0;
//	int right = (sz - 1);
//	
//	while (left<=right)
//	{
//		int m = (right + left) / 2;
//		if (arr[m] < k)
//		{
//			left = m+1;
//		}
//		else if (arr[m] > k)
//		{
//			right = m-1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n", m);
//			break;
//		}	
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}
//效率较低
//int main()
//{
//	int k = 2;
//	//写一个代码，在有序数组中找到2
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标为：%d\n", i);
//			break;
//		}
//	}
//	if (i == a)
//		printf("没有找到\n");
//
//	return 0;
//}