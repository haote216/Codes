#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x*y;
}
int div1(int x, int y)
{
	return x / y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 1;
	int ret = 0;
	int(*a[5])(int x, int y) = { 0, add, sub, mul, div1 };//ת�Ʊ�
	printf("********************************\n");
	printf("*********1.add    2.sub*********\n");
	printf("*********3.mul    4.div*********\n");
	printf("********************************\n");
	printf("������Ҫѡ����㷨\n");
	while (input)
	{
		scanf("%d", &input);
		if (input <= 4 && input >= 1)
		{
			printf("�����������\n");
			scanf("%d %d", &x, &y);
			ret = (*a[input])(x, y);
		}
		else
			printf("��������\n");
		printf("ret = %d\n", ret);
	}
    system("pause");
	return 0;
}