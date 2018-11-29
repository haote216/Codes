#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>
//void show(int a[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void Exchange(int a[], int sz)
//{
//	int start = 0;
//	int end = sz - 1;
//	while (start < end)
//	{
//		if (!(a[start] & 1)){
//			if ((a[end] & 1) == 1)
//			{
//				a[start] ^= a[end];
//				a[end] ^= a[start];
//				a[start] ^= a[end];
//				//start++, end--;
//			}
//			else
//			{
//				end--;
//			}
//
//		}
//		else
//		{
//			start++;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	show(arr, sz);
//	Exchange(arr, sz);
//	show(arr, sz);
//	system("pause");
//	return 0;
//}

//杨氏矩阵
//时间复杂度小于O(N)
void FindData(int(*a)[4], int row, int key)
{
	assert(a);
	int row_ = 0;
	int col_ = 3;
	while (row_<row && col_>=0)
	{
		if (key>a[row_][col_])
			row_++;
		else if (key < a[row_][col_])
			col_--;
		else
		{
			printf("第%d行，第%d列\n", row_ + 1, col_ + 1);
			return;
		}	
	}
}
int main()
{
	int yangshi[4][4] = {
		{ 1, 2, 3, 4 },
		{ 2, 3, 4, 5 },
		{ 3, 4, 5, 6 },
		{ 4, 5, 6, 7 }
	};
	int x = 0;
	int row = sizeof(yangshi) / sizeof(yangshi[0]);
	printf("Please Enter:\n");
	scanf("%d\n", &x);
	FindData(yangshi, row , x);
	system("pause");
	return 0;
}