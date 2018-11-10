#define _CRT_SECURES_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#define MAX 100
//typedef unsigned int uint;
//int main()
//{
//	int i = 100;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 2;
//		for (j = 2; j <= i-1; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int Fib(int N)
//{
//	if (N < 3)
//		return 1;
//	return Fib(N - 1) + Fib(N - 2);
//}
//int main()
//{
//	Fib(1);
//	printf("%d",Fib);
//	system("pause");
//	return 0;
//}

	/*printf("%c\n", '\x051');
	printf("\x051");*/
	/*printf("%d\n", strlen("abcdef"));*/
	/*int age = 20;
	float weight = 55.2f;*/
	/*printf("%d\n", sizeof(long double));*/
	/*const int age = 10;
	enum Sex
	{
		MALE=0,
		FEMALE=20,
		SECRET=30
	};
	printf("%d\n", MAX);
	int arr[FEMALE] = { 0 };*/
	/*double weight = 0.0;
	weight = 10;*/

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	for (i = 1; i <=n ;i++)
//	{
//		int j = 0;
//		for (j = 1; j <=i ; j++)
//		{
//			printf("%d*%d=%2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			printf("%d ", year);
	}
	system("pause");
	return 0;
}
void Swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 1;
	int b = 2;
	/*int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;*/
	/*a = a + b;
	b = a - b;
	a = a - b;*/
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d %d", a,b);




	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 1;
	for (i = 1; i < 10; i++)
	{
		if (arr[0] < arr[i])
		{
			arr[0] = arr[i];
		}
	}
	system("pause");
	return 0;
}

	int a = 3;
	int b = 1;
	int c = 2;
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入变量a，b，c\n");
	scanf_s("%d%d%d", &a, &b, &c);
	int tmp = 0;
	if (a < b)
	{
		Swap(&a,&b);
	}
	if (a < c)
	{
		Swap(&a,&c);
	}
	if (b < c)
	{
		Swap(&b,&c);
	}
	printf("%d %d %d\n",a,b,c);
	求俩个数的最大公约数
	int m = 18;
	int n = 12;
	while (m%n)
	{
		int tmp = m%n;
		m = n;
		n = tmp;
	}
	求俩个数的最小公倍数
	int m = 18;
	int n = 12;
	int o = m*n;
	while (m%n)
	{
		int tmp = m%n;
		m = n;
		n = tmp;
	}
	printf("%d", n);
	printf("%d", o / n);

	
	
	//int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int arr2[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	//int i = 0;
	//for (; i < 10; i++)
	//{
	//	int tmp = 0;
	//	tmp = arr1[i];
	//	arr1[i] = arr2[i];
	//	arr2[i] = tmp;
	//}
	//for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
	//{
	//	printf("%d ", arr1[i]);
	//}
	//for (i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
	//{
	//	printf("%d ", arr2[i]);
	//}

	/*int i = 1;
	double num = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		num = num + flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", num);*/

   /* int count = 0;
	int i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n",count);*/
   /* int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/
    char arr[10] = { 0 };
	scanf_s("%s", arr);
	printf("%c\n", arr[0]);
	printf("%c\n", arr[1]);
	printf("%c\n", arr[2]);
	printf("%c\n", arr[3]);
	printf("%c\n", arr[4]);
    
   
	
