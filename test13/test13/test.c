#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
void show(int a[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void Exchange(int a[], int sz)
{
	int start = 0;
	int end = sz - 1;
	while (start < end)
	{
		if (!(a[start] & 1)){
			if ((a[end] & 1) == 1)
			{
				a[start] ^= a[end];
				a[end] ^= a[start];
				a[start] ^= a[end];
				start++, end--;
			}
			else
			{
				end--;
			}

		}
		else
		{
			start++;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	show(arr, sz);
	Exchange(arr, sz);
	show(arr, sz);
	system("pause");
	return 0;
}