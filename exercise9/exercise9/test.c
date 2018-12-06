#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
//int fun()
//{
//	static count = 1;
//	return ++count;
//}
int main()
{
	int n = 10;
	char *pa = (char*)&n;
	int  *pi = &n;
	printf("%p\n", &n);
	printf("%p\n", pa);
	printf("%p\n", pa+1);
	printf("%p\n", pi);
	printf("%p\n", pi+1);
	/*int ret = fun() - fun()*fun();
	printf("%d\n", ret);*/

	//char a = 127;   //00000000000000000000000001111111
	//char b = 3;     //00000000000000000000000000000011
	//char c = a + b; //00000000000000000000000010000010
	//printf("%d\n", c);// 10000010
	//                  //11111111111111111111111110000010  负数  补码
	//                  //11111111111111111111111110000001
	//                  //10000000000000000000000001111110
	
	
	//char c = 1;
	////00000001
	//printf("%d\n", sizeof(c));//1
	//printf("%d\n", sizeof(+c));//4
	//printf("%d\n", sizeof(!c));//4 为啥是1

	/*char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");*/

	/*struct Stu{
		char name[20];
		int age;
		char sex[5];
		double score;
	};
	struct Stu s;
	struct Stu *ps = &s;
	strcpy(s.name, "haote");
	s.score = 5.24;
	printf("%s %lf\n", s.name, s.score);*/

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	////i = a++ && ++b && d++;
	//i = a++||++b||d++;
	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);


	/*int i = 5;
	int ret = (--i) - (--i)-(--i)-(--i);
	printf("%d\n", ret);
	printf("%d\n", i);*/
	//printf("%d\n", sizeof int);
	system("pause");
	return 0;
}