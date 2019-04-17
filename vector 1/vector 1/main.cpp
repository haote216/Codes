#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include"Vector.h"
using namespace std;

//void test_vector1()
//{
//	string str("hello");
//
//	vector<int> v1;
//	vector<int> v2(10, 3);
//	vector<int> v3(v2.begin(), v2.end());
//	vector<int> v4(str.begin(), str.end());
//
//	//������
//	vector<int>::iterator it = v2.begin();
//	while (it != v2.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	
//	//���������
//	vector<int>::reverse_iterator rit = v4.rbegin();
//	while (rit != v4.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	//const������
//	vector<int>::const_iterator cit = v4.cbegin();
//	while (cit != v4.cend())
//	{
//		cout << *cit << " ";
//		++cit;
//	}
//	cout << endl;
//
//	// operator[]
//	for (size_t i = 0; i < v4.size(); ++i)
//	{
//		cout << v4[i] << " ";
//	}
//	cout << endl;
//
//	//�﷨��
//	for (const auto& e : v4)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	vector<string> strv;
//	strv.push_back("hello");
//	strv.push_back("world");
//	for (const auto& s : strv)
//	{
//		cout << s << " ";
//	}
//	cout << endl;
//
//	//����
//	//1.������
//	//2.for + [i]
//	//3.for-each  C++11
//}

//void test_vector2()
//{
//	size_t sz;
//	std::vector<int> foo;
//	sz = foo.capacity();
//	cout << "making foo grow: \n";
//	foo.resize(100);      //�ı�size
//	//foo.reserve(100);   //�ǰ�����capacity���ٵ�100��
//	for (int i = 0; i < 100; ++i)
//	{
//		//foo.push_back(i);         //����β��
//		foo[i] = i;                 //ֱ�ӽ��з��ʣ����ܺ�resever����ʹ��
//		if (sz != foo.capacity()){
//			sz = foo.capacity();
//			cout << "capacity changed: " << sz << endl;
//		}
//	}
//	for (const auto& e : foo)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}

//void test_vector3()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	//vector<int>::iterator pos = find(v.begin(), v.end(), 2);
//	auto pos = find(v.begin(), v.end(), 3);
//	//if (pos != v.end())
//	//{
//	//	v.insert(pos, 20);   //insert����pos֮ǰ��
//	//}
//
//	//������ʧЧ     insert���ݻ�����������ʧЧ,���ݺ�pos��ָ��ԭ���Ŀռ�,��ԭ���Ŀռ��Ѿ��ͷ�,��Ұָ�롣
//	v.erase(pos);
//
//	//������ʧЧ     eraseɾ��,�ٶԵ��������з��ʣ��ͻ����
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}


//void TestVector4()
//{
//	bit::Vector<int> v1;
//	v1.PushBack(1);
//	v1.PushBack(2);
//	v1.PushBack(3);
//	v1.PushBack(4);
//	v1.PushBack(5);
//	v1.Insert(v1.begin(), 30);
//	for (const auto& e : v1)
//	{
//		cout << e << endl;
//	}
//	cout << endl;
//
//	bit::Vector<int>::iterator it = v1.begin();
//	while (it != v1.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout<< endl;
//
//	for (size_t i = 0; i < v1.Size(); ++i)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//
//}

//void TestVector5()
//{
//	bit::Vector<int> v1;
//	v1.PushBack(1);
//	v1.PushBack(2);
//	v1.PushBack(3);
//	v1.PushBack(4);
//	v1.PushBack(5);
//	
//	auto it = v1.begin();
//	while (it != v1.end())
//	{
//		if (*it % 2 == 0)
//		{
//			it = v1.Erase(it);
//		}
//		else
//		{
//			++it;
//		}
//	}
//
//	for (size_t i = 0; i < v1.Size(); ++i)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//}
void TestVector6()
{
	bit::Vector<int> v1;
	v1.PushBack(1);
	v1.PushBack(2);
	v1.PushBack(3);
	v1.PushBack(4);
	v1.PushBack(5);
	v1.Resize(7,4);

	for (const auto& e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	TestVector6();
	system("pause");
	return 0;
}