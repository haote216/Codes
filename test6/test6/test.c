#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

////��ɲ�������Ϸ��
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
//		printf("������:");
//		scanf("%d", &input);
//		if (num > input)
//			printf("��С��");	
//		else if (num < input)
//			printf("�´���");
//		else
//		{
//			printf("��ϲ�㣬�¶���");
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
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			game();
//			break;
//		case 1:
//			printf("�˳��ɹ�");
//			break;
//		default:
//			printf("�������");
//			break;
//		}
//	} while (input - 1);
//	system("pause");
//	return 0;
//}

//д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
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
//			printf("�ҵ���\n");
//			break;
//		}
//	}
//	if (left>right)
//		printf("û�ҵ�\n");
//	system("pause");
//	return 0;
//}


//��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
//int main()
//{
//	char input[6] = {0};
//	int i = 0;
//	for (i = 0; i < 3;i++)
//	{
//		printf("����������:");
//		scanf("%s", &input);
//		if (strcmp(input,"123456") == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�������3�Σ�������ס\n");
//	}
//	else
//	{
//		printf("������ȷ����¼�ɹ�\n");
//	}
//	system("pause");
//	return 0;
//}

//��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
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