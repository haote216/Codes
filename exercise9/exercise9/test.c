#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main()
{
	struct Stu{
		char name[20];
		int age;
		char sex[5];
		double score;
	};
	struct Stu s;
	struct Stu *ps = &s;
	s.name = "name";
	s.score = 5.24;

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