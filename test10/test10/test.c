#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111        4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//
//3. 输出一个整数的每一位。
//
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//
//5.写博客总结C语言操作符，博客链接发给我，并分享到群里。

//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value!=0)
//	{
//		if ((value % 2) == 1)
//			count++;
//		value /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d", count_one_bits(x));
//	system("pause");
//	return 0;
//}
//void bits(unsigned int value)
//{
//	int count = 0;
//	int a[32] = { 0 };
//	int i = 0;
//	while (value)
//	{
//		a[i++] = value % 2;
//		value /= 2;
//		count++;
//	}
//	printf("奇数位:\n");
//	for (i = count; i > 0; i -= 2)
//	{
//		printf("%d ", a[i-1]);
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (i = count - 1; i > 0; i -= 2)
//	{
//		printf("%d ", a[i-1]);
//	}
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	bits(x);
//	system("pause");
//	return 0;
//}
//void print_int(unsigned int value)
//{
//	int a[32] = { 0 };
//	int i = 31;
//	while (value)
//	{
//		a[i--] = value % 2;
//		value /= 2;
//	}
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d", a[i]);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_int(n);
//	system("pause");
//	return 0;
//}

void difnum_int(unsigned int value1,unsigned int value2)
{
	int a1[32] = { 0 };
	int a2[32] = { 0 };
	int i = 31;
	int count = 0;
	while (value1)
	{
		a1[i--] = value1 % 2;
		value1 /= 2;
	}
	for (i = 0; i < 32; i++)
	{
		printf("%d", a1[i]);
	}
	printf("\n");
	i = 31;
	while (value2)
	{
		a2[i--] = value2 % 2;
		value2 /= 2;
	}
	for (i = 0; i < 32; i++)
	{
		printf("%d", a2[i]);
	}
	printf("\n");
	for (i = 0; i < 32; i++)
	{
		if (a1[i] != a2[i])
			count++;
	}
	printf("%d\n", count);
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	difnum_int(m, n);
	system("pause");
	return 0;
}
