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
//							((e == 4) + (a == 1) == 1))    //�жϳ����еĿ�����
//						{
//							flag = 0;
//							flag |= (1 << (a - 1));
//							flag |= (1 << (b - 1));
//							flag |= (1 << (c - 1));
//							flag |= (1 << (d - 1));//�����еĽ�������в������߼���
//							flag |= (1 << (e - 1));//�ѽ��������һ�����Ķ�������
//							while (flag)//�ж����������
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
//	printf("����������N\n");
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
		for (; j < i; j++)//ǧ����<=������p[i][i]������1���ᱻ�ĳ����ֵ�������ᵼ�³����޷������ȷ�Ľ��
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

//����Ա��malloc�ڶ��Ͽ��ٿռ䣬��Ҫ����Ա�Լ���free�ͷŵ���������ͷŵ����ͻ�����ڴ�й©���⡣
