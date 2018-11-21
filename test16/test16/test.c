#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>

//1.实现strcpy
//2.实现strcat
//3.实现strstr
//4.实现strchr
//5.实现strcmp
//6.实现memcpy
//7.实现memmove

//void my_strcpy(char *dest,const char * str)
//{
//	assert(str != NULL);
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}
//int main()
//{
//	char str1[] = "hello world";
//	char str2[20] = { 0 };
//	char str3[] = "1236541122111";
//	char *str3 = "123456789";// 这是一个指向常量字符串的指针。类似于常量指针，其指向的内容不能被修改，const char * p = &a 或者char const * p = &a。
//	char *str3 = NULL;
//	*str3 = &"12345678910111115616515";
//	my_strcpy(str2, str1);
//	my_strcpy(str3, str1);//这样拷贝会出错。
//	printf("%s\n", str2);
//	printf("%s\n", str3);
//	system("pause");
//	return 0;
//}

//void my_strcat(char * dest, const char * source)
//{
//	assert(dest != NULL);
//	assert(source != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//		
//	while (*dest++ = *source++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char str1[] = "abcd";
//	char str2[50] = "haote";
//	my_strcat(str2, str1);
//	printf("%s\n", str2);
//	system("pause");
//	return 0;
//}

//const char *my_strstr(const char * str1 , const char * str2)
//{
//	assert(str1);
//	assert(str2);
//	const char *p  = (char *)str1; // 为什么要进行强转？
//	const char *sp = (char *)str2; //
//	while (*p){
//		p = str1;//
//		sp = str2;//每次指针++后都得恢复到str原来的位置
//		while (*p && *sp && (*p == *sp))
//		{ 
//			p++, sp++;
//		}
//		if (*sp == '\0')
//			return str1;
//		str1++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char *str1 = "123456789";
//	const char *str2 = "56";
//	const char *ret = my_strstr(str1, str2);
//	printf("%s\n", ret);
//	//char s1[] ="122222222";
//	//char s3[] ="122222222";
//	//char *s2 = "122222222";
//	//char *s4 = "122222222";
//	//printf("%p\n%p\n%p\n%p\n", s1, s2 ,s3 ,s4);
//	system("pause");
//	return 0;
//}

//const char *my_strchr(const char *str, char a)
//{
//	assert(str);
//	while (*str)
//	{
//		if (*str == a)
//			return str;
//		str++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char *p = "123456789";
//	char a = '0';
//	printf("%s\n", strchr(p, a));
//	system("pause");
//	return 0;
//}

//int my_strcmp(const char *str1,const char *str2)
//{
//	assert(str1);
//	assert(str2);
//	int ret = 0;
//	while (!(ret = *(unsigned char *)str1 - *(unsigned char *)str2) && *str1)//条件：若*str1==*str2，相减=0，取反为1，&& *str1（str1,str2不能为\0），条件成立，++。
//		str1++, str2++;//                                                  若*str1 != *str2，相减=1，取反为0，条件不成立跳出while，进行if判断。
//	if (ret > 0)
//		return 1;
//	else if (ret < 0)
//		return -1;
//	return 0;
//}
//int main()
//{
//	const char *str1 = "haote";
//	const char *str2 = "Haote";
//	printf("%d\n", my_strcmp(str1, str2));
//	system("pause");
//	return 0;
//}

//memcpy可以拷贝字符，字符串，数组，结构体......（需要头文件string.h）
//void *my_memcpy(void *dst,const void *src, int num)
//{
//	assert(dst);
//	assert(src);
//	char *dst_ = (char *)dst;
//	const char *src_ = (const char *)src;
//	while (num)
//	{
//		*dst_ = *src_;
//		src_++, dst_++;
//		num--;
//	}
//	return dst;
//}
//int main()
//{
//	char str1[50] = "abcdefg123";
//	char str2[15] = { 0 };
//	printf("%s\n", my_memcpy(str1+1 , str1 , strlen(str1) + 1));
//	system("pause");
//	return 0;
//}

void *my_memmove(char *dst, const char *src, int num)
{
	assert(dst);
	assert(src);
	
	if (src < dst && dst < src + num)//从右往左拷
	{
		char *dst_ = (char *)dst + num - 1;
		const char *src_ = (const char *)src + num - 1;
		while (num)
		{
			*dst_ = *src_;
			dst_--, src_--;
			num--;
		}
	}
	else //从左往右拷
	{
		char *dst_ = (char *)dst;
		const char *src_ = (const char *)src;
		while (num)
		{
			*dst_ = *src_;
			dst_++, src_++;
			num--;
		}
	}
	return dst;
}
int main()
{
	char str1[] = "wangrongshigechoushabi";
	char str2[] = "wangrongshigechoushabi";
	printf("%s\n", my_memmove(str1 + 1, str1, strlen(str1) + 1));//函数返回的是dst,所以返回的是str+1处的地址
	printf("%s\n", str1);
	printf("%s\n", my_memmove(str2, str2 + 1, strlen(str2) + 1));
	printf("%s\n", str2);
	system("pause");
	return 0; 
}

