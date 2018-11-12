#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<windows.h>
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//
//
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//
//3.模拟实现strcpy
//4.模拟实现strcat
void my_strcpy(char * dest, char * str)
{
	assert(dest != NULL);
	assert(str != NULL);
	while (*dest++ = *str++)
	{
		;
	}
}
int main()
{
	char str1[] = "haote";
	char str2[40] = { 0 };
	//char *str3 = "abcefghjklkjhgfd";  为什么这个不行
	char str3[40] = { 0 };
    my_strcpy(str2, str1);
	my_strcpy(str3, "拷贝成功");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	system("pause");
	return 0;
}