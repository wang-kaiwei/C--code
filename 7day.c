#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//关机程序
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在一分钟内关机，请输入：“我是猪”取消关机\n请输入：");
	scanf("%s", arr);
	if (strcmp(arr, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//#include<time.h>
////猜数字游戏
//void game()
//{
//	int x = 0;
//	int ret = 0;
//	ret = rand() % 100 + 1;//生成一个随机数
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &x);
//		if (x < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (x > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜，猜对了\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("***********************\n");
//	printf("*** 1.play   0.exit ***\n");
//	printf("***********************\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//设定随机数起点为时间戳
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default :
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
