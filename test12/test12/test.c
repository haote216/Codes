#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>
//unsigned int reverse_bit(unsigned int x)
//{
//	int top = sizeof(int)* 8;//32个比特位
//	unsigned int flag = 1;
//	unsigned int y = 0;
//	unsigned int i = 0;
//	for (i = 0; i < top;i++)
//	{
//		if (x & (flag<<i))
//		{
//			y |= (flag << (31 - i)); 
//		}
//	}
//	return y;
//
//	00000000000000000000000000011001    25
//	10011000000000000000000000000000    2550136832
//}
//int main()
//{
//	unsigned int x = 0;
//	unsigned int y = 0;
//	printf("Please Enter:");
//	scanf("%d", &x);
//	y = reverse_bit(x);
//	printf("%u\n",y);
//	system("pause");
//	return 0;
//}




//int Avg(int x,int y)
//{
//	return (x&y) + (x^y) >> 1;//相同的部分用&保存下来，不同的部分^保存下来再/2
//}
//int main()
//{
//	//0000 1010
//	//0001 0100
//	//printf("%d\n", Avg(10, 20));
//	printf("%d\n", 10 ^ 20);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8 };
//	int num = 0;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		num ^= arr[i];
//	}
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}

//不能使用库函数
//指针数组
void ReverseString(char *start, char *end)
{
	assert(start);
	assert(end);
	while (start < end)
	{
		*start ^= *end;
		*end ^= *start;
		*start ^= *end;
		start++, end--;
	}
}
//方法一:先局部反转，再全局反转
//void ChangeString(char a[])
//{
//	assert(a);
//
//	char *p = a;
//	char *prev = p;
//	while (*p)
//	{
//		if (*p == ' ')
//		{
//			ReverseString(prev, p - 1);
//			prev = p + 1;
//		}
//		p++;
//	}
//	ReverseString(prev, p - 1);
//	ReverseString(a, p - 1);
//
//}
//方法二:先全局反转，再局部反转
void ChangeString(char a[])
{
	assert(a);

	char *p = a;
	char *prev = p;
	while (*p != '\0')
	{
		p++;
	}
	ReverseString(a, p - 1);
	p = a;
	while (*p)
	{
		if (*p == ' ')
		{
			ReverseString(prev, p - 1);
			prev = p + 1;
		}
		p++;
	}
	ReverseString(prev, p - 1);
}
int main()
{
	char arr[] = "student a am i";
	ChangeString(arr);
	printf("%s", arr);
	system("pause");
	return 0;
}