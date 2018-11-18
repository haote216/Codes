#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

////完成猜数字游戏。
//void menu()
//{
//	printf("***************************\n");
//	printf("*******0.play 1.exit*******\n");
//	printf("***************************\n");
//}
//void game()
//{
//	int input = 0;	
//	int num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入:");
//		scanf("%d", &input);
//		if (num > input)
//			printf("猜小了");	
//		else if (num < input)
//			printf("猜大了");
//		else
//		{
//			printf("恭喜你，猜对了");
//			break;
//		}		
//	}
//}
//int main()
//{
//	menu();
//	int input;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			game();
//			break;
//		case 1:
//			printf("退出成功");
//			break;
//		default:
//			printf("输入错误");
//			break;
//		}
//	} while (input - 1);
//	system("pause");
//	return 0;
//}

//写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）
//int main()
//{
//	int mid = 0;
//	int key = 0;
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > key)
//			right = mid - 1;
//		else if (arr[mid] < key)
//			left = mid + 1;
//		else
//		{
//			printf("找到了\n");
//			break;
//		}
//	}
//	if (left>right)
//		printf("没找到\n");
//	system("pause");
//	return 0;
//}


//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main()
//{
//	char input[6] = {0};
//	int i = 0;
//	for (i = 0; i < 3;i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", &input);
//		if (strcmp(input,"123456") == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("密码错误3次，卡已锁住\n");
//	}
//	else
//	{
//		printf("密码正确，登录成功\n");
//	}
//	system("pause");
//	return 0;
//}

//编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
			printf("%c", ch + 32);
		else if (ch >= 'a' && ch <= 'z')
			printf("%c", ch - 32);
	}
	system("pause");
	return 0;
}