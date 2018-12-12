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
	//printf("%d\n", sizeof(&arr + 1));//4   下一个数组的地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4
	//printf("%d\n", strlen(arr));//6错误  正确：不确定，但至少比6大，假设是10，因为strlen没                                                                         有遇到\0
	//printf("%d\n", strlen(arr + 0));//1错误   正确：首元素的地址在数值上和数组的地址大小一样，                                                                             10       
	////printf("%d\n", strlen(*arr));//1错误   直接报错，类型不匹配。
	////printf("%d\n", strlen(arr[1]));//1错误    直接报错，类型不匹配。  
	//printf("%d\n", strlen(&arr));// 10  假设第10个元素是\0
	//printf("%d\n", strlen(&arr + 1));//4   假设第10个元素是\0，越过一个数组（6）之后，再走4                                                                 个大小就能遇到\0 
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
	////printf("%d\n", strlen(*arr));//直接报错
	////printf("%d\n", strlen(arr[1]));//直接报错
	//printf("%d\n", strlen(&arr));//7
	//printf("%d\n", strlen(&arr + 1));//随机值
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
	////printf("%d\n", strlen(*p));//直接报错
	////printf("%d\n", strlen(p[0]));//直接报错
	//printf("%d\n", strlen(&p));//6
	//printf("%d\n", strlen(&p + 1));//5
	//printf("%d\n", strlen(&p[0] + 1));//5

	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16   把二维数组看成一维数组，a[0]是第一个元素，第一个元素是具有4个整形的数组，也就是第一个数组
	//printf("%d\n", sizeof(a[0] + 1));//4  第一个元素+1是下一个元素的地址，所以是第一个元素里面第二个元素的地址，&a[0][1]，4。
	//printf("%d\n", sizeof(*(a[0] + 1)));//4  整形
	//printf("%d\n", sizeof(a + 1));//4   第一个元素的地址+1=第二个元素的地址，也就是第二个数组的地址。
	//printf("%d\n", sizeof(*(a + 1)));//16
	//printf("%d\n", sizeof(&a[0] + 1));//4   第二个数组的地址。
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16  第二个数组
	//printf("%d\n", sizeof(*a));//16  第一个元素 ，第一个数组 
	//printf("%d\n", sizeof(a[3]));//错误   大小是16

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
		printf("小端\n");
	else
		printf("大端\n");*/


	/*int a[4] = { 1, 2, 3, 4 };
	int *ptr2 = (int *)(a + 1);
	printf("%x",*ptr2);*/





	system("pause");
	return 0;
}