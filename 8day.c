#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ػ�����
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ĵ��Խ���һ�����ڹػ��������룺��������ȡ���ػ�\n�����룺");
	scanf("%s", arr);
	if (strcmp(arr, "������") == 0)
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
////��������Ϸ
//void game()
//{
//	int x = 0;
//	int ret = 0;
//	ret = rand() % 100 + 1;//����һ�������
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &x);
//		if (x < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (x > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ���¶���\n");
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
//	srand((unsigned int)time(NULL));//�趨��������Ϊʱ���
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default :
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
