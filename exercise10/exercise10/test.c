#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
//void fun(int a[])
//{
//	printf("%d\n", sizeof(a));
//}
//int j = 0;
//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
int main()
{
	/*int a[10] = { 0 };
	printf("%d\n", sizeof(a));

	fun(a);*/
	/*int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int arr[10] = { 0 };*/

	/*int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print_arr1(arr, 3, 5);
	print_arr2(arr, 3, 5);*/
	//int i = 1;
	//int ret = (++i) + (++i) + (++i);
	//printf("%d\n", ret);

	//int i = 1, m = 0,n=0;
	//m = i++;
	//n = ++i;
	//printf("%d%d", m, n);

	//char arr[] = { '1', '2', '3', '4', '5', '6' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4   ��һ������ĵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));//4
	//printf("%d\n", strlen(arr));//6����  ��ȷ����ȷ���������ٱ�6�󣬼�����10����Ϊstrlenû                                                                         ������\0
	//printf("%d\n", strlen(arr + 0));//1����   ��ȷ����Ԫ�صĵ�ַ����ֵ�Ϻ�����ĵ�ַ��Сһ����                                                                             10       
	////printf("%d\n", strlen(*arr));//1����   ֱ�ӱ������Ͳ�ƥ�䡣
	////printf("%d\n", strlen(arr[1]));//1����    ֱ�ӱ������Ͳ�ƥ�䡣  
	//printf("%d\n", strlen(&arr));// 10  �����10��Ԫ����\0
	//printf("%d\n", strlen(&arr + 1));//4   �����10��Ԫ����\0��Խ��һ�����飨6��֮������4                                                                 ����С��������\0 
	//printf("%d\n", strlen(&arr[0] + 1));//  9

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4
	//printf("%d\n", strlen(arr));//7
	//printf("%d\n", strlen(arr + 0));//7
	////printf("%d\n", strlen(*arr));//ֱ�ӱ���
	////printf("%d\n", strlen(arr[1]));//ֱ�ӱ���
	//printf("%d\n", strlen(&arr));//7
	//printf("%d\n", strlen(&arr + 1));//���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//6

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p + 1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p + 1));//4
	//printf("%d\n", sizeof(&p[0] + 1));//4
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//ֱ�ӱ���
	////printf("%d\n", strlen(p[0]));//ֱ�ӱ���
	//printf("%d\n", strlen(&p));//6
	//printf("%d\n", strlen(&p + 1));//5
	//printf("%d\n", strlen(&p[0] + 1));//5

	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16   �Ѷ�ά���鿴��һά���飬a[0]�ǵ�һ��Ԫ�أ���һ��Ԫ���Ǿ���4�����ε����飬Ҳ���ǵ�һ������
	//printf("%d\n", sizeof(a[0] + 1));//4  ��һ��Ԫ��+1����һ��Ԫ�صĵ�ַ�������ǵ�һ��Ԫ������ڶ���Ԫ�صĵ�ַ��&a[0][1]��4��
	//printf("%d\n", sizeof(*(a[0] + 1)));//4  ����
	//printf("%d\n", sizeof(a + 1));//4   ��һ��Ԫ�صĵ�ַ+1=�ڶ���Ԫ�صĵ�ַ��Ҳ���ǵڶ�������ĵ�ַ��
	//printf("%d\n", sizeof(*(a + 1)));//16
	//printf("%d\n", sizeof(&a[0] + 1));//4   �ڶ�������ĵ�ַ��
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16  �ڶ�������
	//printf("%d\n", sizeof(*a));//16  ��һ��Ԫ�� ����һ������ 
	//printf("%d\n", sizeof(a[3]));//����   ��С��16

	//int a[5] = { 1, 2, 3, 4, 5 };
	//int *ptr = (int *)(&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1));

	/*struct Test
	{
		int Num;
		char *pcName;
		shortsDate;
		char cha[2];
		shortsBa[4];
	}*p;
	printf("%d\n", p + 0x1);*/

	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 = (int *)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));

	/*int a[5][5];
	int(*p)[4];
	p = a;
	printf("a_ptr=%#p,p_ptr=%#p\n", &a[4][2], &p[4][2]);
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);*/


	/*int a = 1;
	if (*(char*)&a == 1)
		printf("С��\n");
	else
		printf("���\n");*/


	/*int a[4] = { 1, 2, 3, 4 };
	int *ptr2 = (int *)(a + 1);
	printf("%x",*ptr2);*/





	system("pause");
	return 0;
}