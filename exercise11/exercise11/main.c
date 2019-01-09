#define _CRT_SECURE_NO_WARNINGS 1
#define M 4
#define Y(n) ((M+2)*n)
#include<stdio.h>
#include<windows.h>
#include<assert.h>
//int main()
//{
//	char pc[4] = "abcd";
//	int i,z;
//	char a[20];
//	for (i = 0; i < 5; i++)
//	{
//		a[i] = '0';
//	}
//	/*printf("%d\n", strlen(a));*/
//	printf("%d\n", z = 2 * (M + Y(5 + 1)));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	struct A
//	{
//		int a : 2;
//		int b : 5;
//		int c : 10;
//		int d : 30;
//	};
//	printf("%d\n", sizeof(struct A));
//	system("pause");
//	return 0;
//}

//void A(char **ppBuf)
//{
//	if (NULL == ppBuf)
//	{
//		assert(0);
//		return;
//	}
//	ppBuf = (char *)malloc(256);
//	return;
//}
//void test()
//{
//	char *pBuf = NULL;
//	A(&pBuf);
//	strcpy(pBuf, "hello world\r\n");
//	printf("%s", pBuf);
//	free(pBuf);
//	return;
//}
//int main()
//{
//	/*char a[10];
//	strncpy(a, "hello", 5);
//	printf("%s\n", a);*/
//	/*char *str1 = "ABC\0";
//	char str2[] = "ABC\0";
//	printf("%s\n", str1);
//	printf("%s\n", str2);*/
//	system("pause");
//	return 0;
//}

int main()
{
	struct S1
	{
		char c1;
		int i;
		char c2;
	};
	printf("%d\n", sizeof(struct S1));
	
	struct S2
	{
		char c1;
		char c2;
		int i;
	};
	printf("%d\n", sizeof(struct S2));
	
	struct S3
	{
		double d;
		char c;
		int i;
	};
	printf("%d\n", sizeof(struct S3));

	struct S4
	{
		char c1;
		struct S3 s3;
		double d;
	};
	printf("%d\n", sizeof(struct S4));
	system("pause");
	return 0;
}