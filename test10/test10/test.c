#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111        4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}
//
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//
//3. ���һ��������ÿһλ��
//
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//
//5.д�����ܽ�C���Բ��������������ӷ����ң�������Ⱥ�

//1.дһ���������ز����������� 1 �ĸ���
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value!=0)
//	{
//		if ((value % 2) == 1)
//			count++;
//		value /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d", count_one_bits(x));
//	system("pause");
//	return 0;
//}
#define NUM 8
//version 1
//int CountBits(unsigned int x_)
//{
//	unsigned int flag_ = 1;
//	int top_ = sizeof(x_)*NUM;
//	int count_= 0;
//	while (top_)
//	{
//	
//		if (x_ & flag_)
//		{
//			count_++;
//		}
//		flag_ <<= 1;
//		top_--; 
//	}
//	return count_;
//}
//version 2 
//unsigned int CountBits(unsigned int x_)
//{
//	int count_ = 0;
//	while (x_)
//	{
//		x_ = x_ &(x_ - 1);
//		count_++;
//	}
//	return count_;
//} 
//int main()
//{
//	unsigned int data;
//	printf("Please Enter: ");
//	scanf("%d", &data);
//
//	int count_ = CountBits(data);
//	printf("%d bit 1 num is : %d\n", data, count_);
//
//	system("pause");
//	return 0;
//}
//version 3
//����
//int main()
//{
//	int n = 5;
//	unsigned char BitsSetTable256[256] = { 0 };
//	for (int i = 0; i < 256; i++)
//	{
//		BitsSetTable256[i] = (i & 1) + BitsSetTable256[i / 2];
//	}
//	unsigned int c = 0;
//	unsigned char* p = (unsigned char*)&n;
//	c = BitsSetTable256[p[0]] +
//		BitsSetTable256[p[1]] +
//		BitsSetTable256[p[2]] +
//		BitsSetTable256[p[3]];
//	printf("%d ", c);
//	system("pause");
//	return 0;
//}

//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
//void bits(unsigned int value)
//{
//	int count = 0;
//	int a[32] = { 0 };
//	int i = 0;
//	while (value)
//	{
//		a[i++] = value % 2;
//		value /= 2;
//		count++;
//	}
//	printf("����λ:\n");
//	for (i = count; i > 0; i -= 2)
//	{
//		printf("%d ", a[i-1]);
//	}
//	printf("\n");
//	printf("ż��λ:\n");
//	for (i = count - 1; i > 0; i -= 2)
//	{
//		printf("%d ", a[i-1]);
//	}
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	bits(x);
//	system("pause");
//	return 0;
//}

//void PrintBit(unsigned int data_)
//{
//	unsigned int flag_ = 0x80000000;
//	printf("ż��bits:");
//	while (flag_)
//	{
//		if (data_ &flag_)
//		{
//			printf("1 ");
//		}
//			
//		else
//		{
//			printf("0 ");
//		}
//		flag_ >>= 2;
//	}
//	printf("\n");
//	printf("����bits:");
//	flag_ = 0x40000000;
//	while (flag_)
//	{
//		if (data_ &flag_)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//		flag_ >>= 2;
//	}
//	printf("\n");
//}
//int main()
//{
//	unsigned int data;
//	printf("Please Enter");
//	scanf("%d", &data);
//
//	PrintBit(data); 
//
//	system("pause");
//	return 0;
//}

//3.���һ��������ÿһλ��
//void print_int(unsigned int value)
//{
//	int a[32] = { 0 };
//	int i = 31;
//	while (value)
//	{
//		a[i--] = value % 2;
//		value /= 2;
//	}
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d", a[i]);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_int(n);
//	system("pause");
//	return 0;
//}
//void PrintBit(unsigned int data_)
//{
//	unsigned int flag_ = 0x80000000;
//	while (flag_)
//	{
//		if (data_ & flag_)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//		flag_ >>= 1;
//	}
//	printf("\n");
//}
//int main()
//{
//	unsigned int data;
//	printf("Please Enter");
//	scanf("%d", &data);
//	PrintBit(data);
//
//	system("pause");
//	return 0;
//}

//4.
//void difnum_int(unsigned int value1,unsigned int value2)
//{
//	int a1[32] = { 0 };
//	int a2[32] = { 0 };
//	int i = 31;
//	int count = 0;
//	while (value1)
//	{
//		a1[i--] = value1 % 2;
//		value1 /= 2;
//	}
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d", a1[i]);
//	}
//	printf("\n");
//	i = 31;
//	while (value2)
//	{
//		a2[i--] = value2 % 2;
//		value2 /= 2;
//	}
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d", a2[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 32; i++)
//	{
//		if (a1[i] != a2[i])
//			count++;
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	difnum_int(m, n);
//	system("pause");
//	return 0;
//}
 



//����  >>   >>=    �����ݵ�Ӱ��
//int main()
//{
//	int a = 1;
//	printf("%d %d %d %d",a, a << 2, a <<= 2,a);
//	system("pause");
//	return 0;
//}