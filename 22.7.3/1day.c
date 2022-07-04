#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    int day=0;
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("星期一\n");
        break;
    case 2:
        printf("星期二\n");
        break;
    case 3:
        printf("星期三\n");
        break;
    case 4:
        printf("星期四\n");
        break;
    case 5:
        printf("星期五\n");
        break;
    case 6:
        printf("星期六\n");
        break;
    case 7:
        printf("星期日\n");
        break;
    default:
        printf("输入错误\n");
        break;

    }
    return 0;
}


   
    /*int a = 0;
    scanf("%d", &a);
    if (0 == a % 2)
        printf("a为偶数\n");
    else
        printf("a为奇数\n");
    return 0;*/

   ///* int age = 0;
   // scanf("%d", &age);
   // if (age <= 18)
   //     printf("少年\n");
   // else if (age <= 28)
   //     printf("青年\n");
   // else if (age <= 50)
   //     printf("中年\n");
   // else
   //     printf("老年\n");*/
   // return 0;

