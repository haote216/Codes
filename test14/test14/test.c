#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//version1
//char* Resever(char *a, int sz,int key)
//{
//	int num_ = key%sz;
//	int end = sz-1;
//	while (num_)
//	{
//		char c = a[0];
//		for (int i = 0; i < sz-1; i++)
//		{
//			a[0 + i] = a[1 + i];
//		}
//		a[end] = c;
//		num_--;
//	}	
//	return a;
//}

//version2   (最好的方法)
//void ReverseString(char *start,char *end)
//{
//	while (start < end)
//	{
//		assert(start);
//		assert(end);
//		*start ^= *end;
//		*end ^= *start;
//		*start ^= *end;
//		start++, end--;
//	}
//}
//char* Resever(char *a, int sz, int key)
//{
//	assert(a);
//	int num_ = key%sz;
//	ReverseString(a,a+num_-1);
//	ReverseString(a+num_, a+sz-1);
//	ReverseString(a, a+sz-1);
//	return a;
//}
//version3
//char* Resever(char *a, int sz, int key)
//{
//	assert(a);
//	int num_ = key%sz;
//
//	char *p = (char *)malloc(sz * 2 + 1);//开辟的空间最后还要加上'\0'
//	strcpy(p, a);
//	strcat(p, a);
//	strncpy(a, p + num_, sz);
//	free(p);
//	return a;//free写在return后面可以吗？
//	
//}
//int main()
//{
//	char str[] = "ABCD1234";
//	int k = 0;
//	int sz = strlen(str);
//	printf("Please Enter:");
//	scanf("%d", &k);
//	printf("%s\n", Resever(str, sz, k));
//	system("pause");
//	return 0;
//}

void ReverseString(char *start,char *end)
{
	while (start < end)
	{
		assert(start);
		assert(end);
		*start ^= *end;
		*end ^= *start;
		*start ^= *end;
		start++, end--;
	}
}
int test(char *str1,char *str2,int sz)
{
	//char *p = str1;//如何给p加const   
	for (int i = 0; i < sz;i++)
	{
		//解决思路:1.每次反转1次，循环i次，反转i次。   2.每次反转i次，循环1次指针指向最初的位置，i++;
		ReverseString(str1, str1);//str[0],str[0+i]不行？
		ReverseString(str1+1, str1+sz-1);
		ReverseString(str1, str1+sz-1);
		if ((strcmp(str1, str2)) ==0)
			return 1;
	}
	return 0;	
}
int main()
{
	char str1[] = "CDAAB";//
	char str2[] = "BCDAA";
	int sz = strlen(str1);
	printf("%d\n", test(str1, str2,sz));
	system("pause");
	return 0;
}