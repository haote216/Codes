#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	unsigned flag = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++) 
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && \
//							((b == 2) + (e == 4) == 1) && \
//							((c == 1) + (d == 2) == 1) && \
//							((c == 5) + (d == 3) == 1) && \
//							((e == 4) + (a == 1) == 1))    //判断出所有的可能性
//						{
//							flag = 0;
//							flag |= (1 << (a - 1));
//							flag |= (1 << (b - 1));
//							flag |= (1 << (c - 1));
//							flag |= (1 << (d - 1));//这所有的结果可能有不符合逻辑的
//							flag |= (1 << (e - 1));//把结果保存在一个数的二进制中
//							while (flag)//判断这个二进制
//							{
//								if (!(flag & 1))
//								{
//									break;
//								}
//								flag >>= 1;
//							}
//							if (!flag)
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 3;//0011->0001
//	int b = 3;
//	printf("%d,%d",a>>1,1<<b );//0001   1000
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 0; a <= 1; a++)
//	{
//		for (b = 0; b <= 1; b++)
//		{
//			for (c = 0; c <= 1; c++)
//			{
//				for (d = 0; d <= 1; d++)
//				{
//					if ((a == 0) + (c == 1) + (d == 1) + (d == 0) == 3)
//						printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int Killer = 'A';
//	for (; Killer <= 'D'; Killer++)
//	{
//		if ((Killer != 'A') + (Killer == 'C') + (Killer == 'D') + (Killer != 'D') == 3)
//			printf("Killer is = %c\n", Killer);
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//
//	int i, j, N = 0;
//	int arr[30][30] = { 0 };
//	printf("请输入行数N\n");
//	scanf("%d", &N);
//	for (i = 0; i<N; i++)
//		arr[i][0] = 1;
//	//arr[i][i] = 1;
//
//
//	for (i = 1; i<N; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i<N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-3d", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
void yang(int n)
{
	int **p = (int **)malloc(sizeof(int*) *n);
	int i = 0;
	for (; i < n; i++)
	{
		p[i] = (int *)malloc(sizeof(int)*n); 
		p[i][0] = 1;
		p[i][i] = 1;
	}
	//for (i = 0; i < n; i++)
	//{
	//	p[i][0] = 1;
	//	p[i][i] = 1;
	//}
	i = 2;
	for (; i < n; i++)
	{
		int j = 1;
		for (; j < i; j++)//千万不能<=，这样p[i][i]都不是1，会被改成随机值，这样会导致程序无法输出正确的结果
		{
			p[i][j] = p[i - 1][j] + p[i - 1][j - 1];
		}
	}
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (; j <= i; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
		
	for (i = 0; i < n; i++)
	{
		free(p[i]);
	}
	free(p);

}

int main()
{
	int n = 0;
	printf("Please Enter:");
	scanf("%d", &n);
	yang(n);
	system("pause");
	return 0;
}

//程序员用malloc在堆上开辟空间，需要程序员自己用free释放掉，如果不释放掉，就会造成内存泄漏问题。
