#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
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

//version2   (��õķ���)
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
//	char *p = (char *)malloc(sz * 2 + 1);//���ٵĿռ����Ҫ����'\0'
//	strcpy(p, a);
//	strcat(p, a);
//	strncpy(a, p + num_, sz);
//	free(p);
//	return a;//freeд��return���������
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
	//char *p = str1;//��θ�p��const   
	for (int i = 0; i < sz;i++)
	{
		//���˼·:1.ÿ�η�ת1�Σ�ѭ��i�Σ���תi�Ρ�   2.ÿ�η�תi�Σ�ѭ��1��ָ��ָ�������λ�ã�i++;
		ReverseString(str1, str1);//str[0],str[0+i]���У�
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