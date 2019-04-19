#include<iostream>
#include<list>
#include<vector>
#include"list.h"
using namespace std;


//void test_list1()
//{
//	list<int> l1;
//	list<int> l2(3, 10);
//	list<int> l3(l2);
//	list<int> l4(l3.begin(), l3.end());
//
//	auto it4 = l4.begin();
//	while (it4 != l4.end())
//	{
//		cout << *it4 << " ";
//		++it4;
//	}
//	cout << endl;
//
//	for (const auto& e : l4)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	int array[] = { 16, 2, 77, 29 };
//	list<int> l5(array, array + sizeof(array) / sizeof(array[0]));
//	for (const auto& e : l5)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	string v(8,1);
//	list<int> l6(v.begin(), v.end());
//	for (const auto& e : l6)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}

//void test_list2()
//{
//	list<int> l;
//	l.push_back(1);
//	l.push_back(2);
//	l.push_back(3);
//	l.push_back(4);
//	l.push_back(5);
//
//	auto it = l.begin();
//	while (it != l.end())
//	{
//		if (*it % 2 == 0)
//		{
//			*it *= 2;
//		}
//		++it;
//	}
//
//	it = l.begin();
//	while (it != l.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	for (const auto& i : l)
//	{
//		cout << i << " ";
//	}
//	cout << endl;	
//}

//void test_list3()
//{
//	list<int> l;
//	l.push_back(1);
//	l.push_back(2);
//	l.push_back(3);
//	//l.push_front(2);
//	//l.insert(l.begin(), 3);
//	//auto pos = find(l.begin(), l.end(), 2);
//	//if (pos != l.end())
//	//{
//		//l.insert(pos, 20);
//	//}
//
//	auto pos = find(l.begin(), l.end(), 2);
//	l.emplace(pos, 20);     // l.insert(pos, 20);  在当前情况下，没有任何差别
//	
//	for (const auto& e : l)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//vector    insert/erase会导致迭代器失效
//	//list      erase会导致迭代器失效 
//	//迭代器失效，但是程序不一定会崩溃，但是会出各种各样的错误。 在Linux和VS上运行会有不同的结果。
//}

void test_list3()
{
	//bit::List<int> l;
	//l.PushBack(1);
	//l.PushBack(2);
	//l.PushBack(3);
	//l.PushBack(4);
	//l.PushBack(5);

	//bit::List<int>::iterator it = l.begin();

	bit::Date d;
	bit::List<bit::Date> l;
	l.PushBack(d);
	l.PushBack(d);
	l.PushBack(d);
	l.PushBack(d);

	bit::List<bit::Date>::iterator it = l.begin();

	
	while (it != l.end())
	{
		cout << it ->_year << " ";
		++it;
	}
	cout << endl;

	//for (auto e : l)
	//{
	//	cout << e << " ";
	//}
	//cout << endl;

	//bit::PrintList(l);
}


int main()
{
	test_list3();
	system("pause");
	return 0;
}