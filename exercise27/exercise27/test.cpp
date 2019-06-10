#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<list>
#include<vector>
#include<deque>
using namespace std;
//int main()
//{
//	char p1[15] = "abcd", *p2 = "ABCD", str[50] = "xyz";
//	strcpy(str + 2, strcat(p1 + 2, p2 + 1));
//	printf("%s", str);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int n[][3] = { 10, 20, 30, 40, 50, 60 };
//	int(*p)[3];
//	p = n;
//	cout << p[0][0] << "," << *(p[0] + 1) << "," << (*p)[2] << endl;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a =0; float b=0, c=0;
//	scanf("%2d%3f%4f", &a, &b, &c);
//	printf("\na=%d,b=%d,c=%f\n", a, b, c);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	class A{
//		void test(float a){ cout << "1"; }
//	};
//	class B :public A{
//		void test(int b){ cout << "2"; }
//	};
//	A *a = new A;
//	B *b = new B;
//	a = b;
//	a.test(1.1);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	list<int> l(array, array + sizeof(array) / sizeof(array[0]));
//	//for (list<int>::reverse_iterator it = l.rbegin(); it != l.rend(); ++it)
//	//	cout << *it << " ";
//	//cout << endl;
//
//	/*cout << l.size() << endl;*/
//
//	//if (l.empty())
//	//	cout << "¿ÕµÄlist" << endl;
//	//else
//	//{
//	//	for (const auto& e : l)
//	//		cout << e << " ";
//	//	cout << endl;
//	//}
//
//	l.front() = 10;
//	l.back() = 10;
//
//	for (list<int>::reverse_iterator it = l.rbegin(); it != l.rend(); ++it)
//		cout << *it << " ";
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//void PrintList(list<int>& l)
//{
//	for (auto& e : l)
//		cout << e << " ";
//	cout << endl;
//}
//
//class Date
//{
//public:
//	Date(int year = 2019, int month = 6, int  day = 10)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//		cout << "Date(int ,int ,int):" << this << endl;
//	}
//
//	Date(const Date& d)
//		: _year(d._year)
//		, _month(d._month)
//		, _day(d._day)
//	{
//		cout << "Date(const Date&):" << this << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestList1()
//{
//	int array[] = { 1, 2, 3 };
//	list <int> L(array, array + sizeof(array) / sizeof(array[0]));
//
//	L.push_back(4);
//	L.push_front(0);
//	PrintList(L);
//
//	L.pop_back();
//	L.pop_front();
//	PrintList(L);
//}

//void TestList2()
//{
//	list<Date> l;
//	Date d(2019, 6, 11);
//	l.push_back(d);
//	l.emplace_back(2018, 10, 21);
//	l.emplace_front(2018, 10, 19);
//}

//void TestList3()
//{
//	int array[] = { 1, 2, 3 };
//	list<int> L(array, array + sizeof(array) / sizeof(array[0]));
//	PrintList(L);
//
//	//auto pos = ++L.begin();
//	//cout << *pos << endl;
//
//	//vector<int> v{ 7, 8, 9 };
//	//L.insert(pos, v.begin(), v.end());
//	//PrintList(L);
//
//	//L.erase(pos);
//	//PrintList(L);
//
//	//L.erase(L.begin(), L.end());
//	//PrintList(L);
//	L.resize(10);
//	PrintList(L);
//
//	L.resize(20, 4);
//	PrintList(L);
//
//	L.resize(5);
//	PrintList(L);
//
//	vector<int> v{ 4, 5, 6 };
//	list<int> L2(v.begin(), v.end());
//	PrintList(L2);
//
//	L.swap(L2);
//	PrintList(L);
//	PrintList(L2);
//
//	L2.clear();
//	cout << L2.size() << endl;
//
//}


void PrintDeque(const deque<int>& d)
{
	for (const auto& e : d)
		cout << e << " ";
	cout << endl;
}

void TestDeque1()
{
	deque<int>d1;
	deque<int>d2(10, 5);
	PrintDeque(d2);

	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	deque<int>d3(array, array + sizeof(array) / sizeof(array[0]));
	PrintDeque(d3);

	deque<int> d4(d3);
	PrintDeque(d4);

}
int main()
{
	TestDeque1();
	system("pause");
	return 0;
}