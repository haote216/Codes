#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
#include<string.h>

//��дһ������reverse_string(char * string)
//Ҫ�󣺽������ַ����е��ַ��������򣬲���ʹ��C�������е��ַ��������������õݹ�ʵ�֡�
//void reverse_string(char * string)
//{
//
//}
//int main()
//{
//	char arr[] = "haote";
//	reverse_string("haote");
//	system("pause");
//	return 0;
//}

//int Mystrlen(const char *str)
//{
//	assert(str != NULL);//Ϊɶ����assert��������޷�Ӧ
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	
//	char ch[500] = { 0 };
//	printf("������:");
//	scanf("%s", ch);
//	int ret = Mystrlen(ch);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//ģ��ʵ�ֿ⺯��strlen

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++&&++b&&d++;
//    i=a++||++b||d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}
//&& �߼���  ���Ҫ��0���ұ߾Ͳ����㣬���ʽҲ�����㡣
//|| �߼���  ���Ҫ��1���ұ߾Ͳ����㣬���ʽҲ�����㡣

//int main()
//{
//	int num = 0;
//	int i = 1; int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		i = i*j;
//		num += i;
//	}
//	printf("%d", num);
//	system("pause");
//	return 0;
//}
//1! + 2! + 3! +...+n!

//void Swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa =*pb;
//	*pb = tmp;
//}



//int main()
//{
//	/*printf("%c\n", tolower('A'));
//	printf("%c\n", toupper('a'));*/
//
//	/*char a[] = { 'h' };
//	char b[] = { 0 };
//	strcpy(b, a);
//	printf("%s\n", b);*/
//
//	/*int a = 30;
//	int b = 20;
//	int max = a > b ? a : b;
//	printf("%d", max);*/
//
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	system("pause");
//	return 0;
//}

//int binary(int a[], int k, int sz)
//{  
//	int left = 0;
//	int right = sz - 1;
//	while (left <=  right)
//	{
//		int mid = left + (right - left) / 2;
//		if (k < a[mid])
//			right = mid - 1;
//		else if (k>a[mid])
//			left = mid + 1;
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int key = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary(arr, key, sz);
//	if (ret == 1)
//		printf("�ҵ���\n");
//	else
//		printf("�Ҳ���\n");
//	system("pause");
//	return 0;
//}

int main()
{
	//printf("%d\n", strlen("abcdef"));//6
	//printf("%d\n", sizeof("abcdef"));//7

	//printf("%d \n", printf("%d \n", printf("%d \n", 43)));

	//�����ݹ�
	//���������������������������������ʱ�򣬵ݹ�㲻�ټ���;
	//ÿ�εݹ����֮��Խ��Խ�ӽ��������������
	printf("hehe");
	main();
	system("pause");
	return 0;
}


 