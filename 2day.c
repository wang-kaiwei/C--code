#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int ch1 = 0;
	int ch2 = 0;
	char  password[20] = { 0 };
	printf("����������:\n");
	scanf("%s", password);
	printf("��ȷ������(Y/N):\n");
	while ((ch2 = getchar()) != '\n')
	{
		;
	}
	ch1 = getchar();
	if (ch1 == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("����ȷ��");
	}
	return 0;
}

//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}
//int main()
//{
//   /* int n = 1, m = 2;
//    switch(n)
//    {case 1:
//            m++;
//        case 2:
//            n++;
//        case 3:
//            switch (n)
//            {
//            case 1:
//                n++;
//            case 2:
//                m++, n++;
//                break;
//            }
//        case 4:
//            m++;
//            break;
//        default :
//            break;
//            
//     }
// 
//     printf("m=%d,n=%d\n", m, n);
//     return 0;*/
//
//}