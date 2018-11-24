//#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<windows.h>
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 9, 10};
//	int arr1[20] = {0};   
//	int arr2[20] = { 0 };
//	int i = 0;
//	int j = 0; 
//	int sum = 0;
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < 16; i++)
//	{
//		sum ^= arr[i];//所有数字异或的结果
//	}
//	while ((sum&1)!=0)
//	{
//		sum >>= 1; 
//		j++;//这俩个不一样的整数二进制中最低位的不同的比特位的位数
//	}
//	for (i = 0; i < 16;i++)
//	{
//		if (((arr[i] >> (j-1)) & 1) == 0)
//			arr1[i] = arr[i];//存放二进制第j位为0的数
//		else
//			arr2[i] = arr[i]; //存放二进制第j位位1的数
//	}
//	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
//	{
//		num1 ^= arr1[i];//第j位为0的所有的数异或的结果
//	}
//	for (i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
//	{
//		num2 ^= arr2[i];//第j位为1的所有的数异或的结果
//	}
//	printf("%d  %d\n", num1,num2);
//	system("pause");
//	return 0;
//}
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
int main()
{
	int money = 20;
	int count1 = 0;
	int count2 = 0;
	while (money)
	{
		money -= 1;
		count1 += 1;
		count2 += 1;
		if (count2 == 2)
		{
			count1 += 1;
			count2 = 1;
		}
	}
	printf("喝了%d瓶 \n", count1);
	system("pause");
	return 0;
}
//
//3.模拟实现strcpy
//4.模拟实现strcat
//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 9 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int i = 1;
//	int count = 0;
//	while (i <= num)
//	{
//
//		i++;
//	}
//	system("pause");
//	return 0;
//}


//void my_strcpy(char * dest, char * str)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}
//int main()
//{
//	char str1[] = "haote";
//	char str2[40] = { 0 };
//	//char *str3 = "abcefghjklkjhgfd";  //指向的是字符串常量区，不能被修改。
//	char str3[40] = { 0 };
//    my_strcpy(str2, str1);
//	my_strcpy(str3, "拷贝成功");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	system("pause");
//	return 0;
//}

//char *my_strcat(char *dst,const char *src)
//{
//	assert(dst);
//	assert(src);
//	char *ret = dst;
//	while (*dst)
//		dst++;
//	while (*dst++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[] = "123456";
//	char str2[] = "7890123456";
//	printf("%s\n", my_strcat(str1, str2));
//	system("pause");
//	return 0;
//}