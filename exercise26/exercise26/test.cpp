#include<iostream>
using namespace std;
//int main()
//{
//	struct Node
//	{
//		int data;
//		struct Node* next;
//	};
//	cout << sizeof(struct Node);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	typedef struct Node
//	{
//		int data;
//		struct Node* next;
//	}Node;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//struct s1
//	//{
//	//	char c1;
//	//	int i;
//	//	char c2;
//	//};
//
//	//struct s1
//	//{
//	//	char c1;
//	//	char c2;
//	//	int i;
//	//};
//
//
//	struct s1
//	{
//		double d;
//		char c;
//		int i;
//	};
//
//	struct s2
//	{
//		char c1;
//		struct s1 s1;
//		double d;
//	};
//	cout << sizeof(struct s2) << endl;
//	system("pause");
//	return 0;
//}

//#pragma pack(8)
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//#pragma pack(1)
//struct s2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//int main()
//{
//	cout << sizeof(struct s1);
//	cout << sizeof(struct s2);
//	system("pause");
//	return 0;
//}


//#define offsetof1(s,m) (size_t)&(((s*)0)->m)
//
//struct student{
//	int a;
//	double d;
//	char ch[2];
//};
//
//int main()
//{
//	int i = offsetof1(student, ch);
//	cout << i << endl;
//	system("pause");
//	return 0;
//}

//struct A
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	double d : 1;
//};


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	cout << sizeof(struct S) << endl;
//	system("pause");
//	return 0;
//}

int main()
{
	//union Un
	//{
	//	int i;
	//	char c;
	//};
	//union Un un;
	//un.i = 0x11223344;
	//un.c = 0x55;
	//cout << &(un.i) << endl;
	//cout << &(un.c) << endl;
	
	union Un1
	{
		char c[5];
		int i;
	};
	union Un2
	{
		short c[7];
		int i;
	};
	cout << sizeof(union Un1) << endl;
	cout << sizeof(union Un2) << endl;

	system("pause");
	return 0;
}