#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>


#include"Sort.h"
using namespace std;


//int ticket = 100;
//void *route(void *arg)
//{
//	char *id = (char*)arg;
//	while (1) {
//		if (ticket > 0) {
//			sleep(10);
//			printf("%s sells ticket:%d\n", id, ticket);
//			ticket--;
//		}
//		else {
//			break;
//		}
//	}
//}


//class A{
//public:
//	static int a;
//	
//};
//int A::a = 1;
//
//int main()
//{
//	A s;
//	cout << sizeof(s) << endl;
//
//	system("pause");
//	return 0;
//}

int main()
{

	int a[] = { 8, 2, 3, 7, 6, 1, 4, 5 };
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
		printf("%d ", a[i]);
	printf("\n");



	MergeSort(a, sizeof(a) / sizeof(int));


	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
		printf("%d ", a[i]);
	system("pause");
	return 0;
}
