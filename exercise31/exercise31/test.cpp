#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
using namespace std;

//double Division(int a, int b)
//{
//	// 当b == 0时抛出异常
//	if (b == 0)
//		throw "123";
//	else
//		return ((double)a / (double)b);
//}
//void Func()
//{
//	int len, time;
//	cin >> len >> time;
//	cout << Division(len, time) << endl;
//}
//int main()
//{
//	try {
//		Func();
//	}
//	catch (const char* errmsg){
//		cout << errmsg << endl;
//	}
//	catch (...){
//		cout << "unkown exception" << endl;
//	}
//	system("pause");
//	return 0;
//}

//void TestString1()
//{
//	// 注意：string类对象支持直接用cin和cout进行输入和输出
//	string s("hello, bit!!!");
//	cout << s.length();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	// 将s中的字符串清空，注意清空时只是将size清0，不改变底层空间的大小
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// 将s中有效字符个数增加到10个，多出位置用'a'进行填充
//	// “aaaaaaaaaa”
//	s.resize(10, 'a');
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// 将s中有效字符个数增加到15个，多出位置用缺省值'\0'进行填充
//	// "aaaaaaaaaa\0\0\0\0\0"
//	// 注意此时s中有效字符个数已经增加到15个
//	s.resize(15);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	// 将s中有效字符个数缩小到5个
//	s.resize(5);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//}



//void TestString()
//{
//	string str;
//	str.push_back(' '); // 在str后插入空格
//	str.append("hello"); // 在str后追加一个字符"hello"
//	str += 'b'; // 在str后追加一个字符'b'
//	str += "it"; // 在str后追加一个字符串"it"
//	cout << str << endl;
//	cout << str.c_str() << endl; // 以C语言的方式打印字符串
//	// 获取file的后缀
//	string file1("string.cpp");
//	size_t pos = file1.rfind('.');
//	string suffix(file1.substr(pos, file1.size() - pos));
//	cout << suffix << endl;
//	// npos是string里面的一个静态成员变量
//	// static const size_t npos = -1;
//	// 取出url中的域名
//	string url("http://www.cplusplus.com/reference/string/string/find/");
//	cout << url << endl;
//	size_t start = url.find("://");
//	if (start == string::npos)
//	{
//		cout << "invalid url" << endl;
//		return;
//	}
//	start += 3;
//	size_t finish = url.find('/', start);
//	string address = url.substr(start, finish - start);
//	cout << address << endl;
//	// 删除url的协议前缀
//	pos = url.find("://");
//	url.erase(0, pos + 3);
//	cout << url << endl;
//}


//class Solution {
//public:
//	bool isPalindrome(string s) {
//		if (s.empty())
//			return true;
//		int begin = 0;
//		int end = s.size() - 1;
//		while (begin < end)
//		{
//			while (begin != end)
//			{
//				if (isnumberorletter(s[begin]))
//					break;
//				else
//					begin++;
//			}
//			while (begin < end)
//			{
//				if (isnumberorletter(s[end]))
//					break;
//				else
//					end--;
//			}
//			if (begin < end)
//			{
//				if ((s[begin] + 32 - 'a') % 32 != (s[end] + 32 - 'a') % 32)
//				{
//					cout << "false" << endl;
//					return false;
//				}
//					
//				begin++, end--;
//			}
//		}
//		cout << "true" << endl;
//		return true;
//	}
//
//	bool isnumberorletter(char a)
//	{
//		if (a >= '0'  &&  a <= '9'
//			|| a >= 'A' &&  a <= 'Z'
//			|| a >= 'a' &&  a <= 'z')	
//			return true;
//		return false;
//	}
//};
//
//int main()
//{
//	string s = "race a car";
//	Solution a;
//	a.isPalindrome(s);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	size_t sz;
//	std::vector<int> foo;
//	sz = foo.capacity();
//	std::cout << "making foo grow:\n";
//	for (int i = 0; i<100; ++i) {
//		foo.push_back(i);
//		if (sz != foo.capacity()) {
//			sz = foo.capacity();
//			std::cout << "capacity changed: " << sz << '\n';
//		}
//	}
//	std::vector<int> bar;
//	sz = bar.capacity();
//	bar.reserve(100); // this is the only difference with foo above
//	std::cout << "making bar grow:\n";
//	for (int i = 0; i<100; ++i) {
//		bar.push_back(i);
//		if (sz != bar.capacity()) {
//			sz = bar.capacity();
//			std::cout << "capacity changed: " << sz << '\n';
//		}
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	list<int> l1(array, array + sizeof(array) / sizeof(array[0]));
//	for (auto& e : l1)
//		cout << e << " ";
//	cout << endl;
//	// 将list中第一个节点与最后一个节点中的值改为10
//	l1.front() = 10;
//	l1.back() = 10;
//	for (auto& e : l1)
//		cout << e << " ";
//	cout << endl;
//	const list<int> l2(array, array + sizeof(array) / sizeof(array[0]));
//	//int& a = l2.front(); 因为l2是const类型的list对象，因此其front()为const 引用类型
//	const int& ca = l2.front();
//	system("pause");
//	return 0;
//}


//int main()
//{
//	//// key和value的类型都给成字符串
//	//map<string, string> m1;
//	//// C++11 的类表初始化
//	//map<string, string> m2{ { "apple", "苹果" },
//	//						{ "banana", "香蕉" },
//	//						{ "orange", "橘子" },
//	//						{ "peach", "桃子" },
//	//						{ "waterme", "水蜜桃" } };
//	//cout << m2["apple"] << endl;
//	//cout << m2["waterme"] << endl;
//	//map<string, string> m3(m2);
//
//
//	//map<string, string> m{ { "apple", "苹果" },
//	//{ "banan", "香蕉" },
//	//{ "orange", "橘子" },
//	//{ "peach", "桃子" },
//	//{ "waterme", "水蜜桃" } };
//	//for (auto it = m.begin(); it != m.end(); ++it)
//	//	cout << (*it).first << "--->" << (*it).second << endl;
//	//cout << endl;
//
//	map<string, string> m;
//	/*
//	operator[]的原理是：
//	用<key, T()>构造一个键值对，然后调用insert()函数将该键值对插入到map中
//	如果key已经存在，插入失败，insert函数返回该key所在位置的迭代器
//	如果key不存在，插入成功，insert函数返回新插入元素所在位置的迭代器
//	operator[]函数最后将insert返回值键值对中的value返回
//	*/
//	// 将<"apple", "">插入map中，插入成功，返回value的引用，将“苹果”赋值给该引用结果，
//	// 即修改与"apple"对应的value""为"苹果"
//	m["apple"] = "苹果";
//	// 将<"apple", "">插入map中，插入失败，将<"apple", "苹果">中的"苹果"返回
//	cout << m["apple"] << endl;
//	cout << m.size() << endl;
//	// “banan不在map中，该函数抛异常”
//	m.at("banana");
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	//multimap<string, string> m;
//	//m.insert(make_pair("李逵", "黑旋风"));
//	//m.insert(make_pair("林冲", "豹子头"));
//	//m.insert(make_pair("鲁达", "花和尚"));
//	//// 尝试插入key相同的元素
//	//m.insert(make_pair("李逵", "铁牛"));
//	//cout << m.size() << endl;
//	//for (auto& e : m)
//	//	cout << "<" << e.first << "," << e.second << ">" << endl;
//	//// key为李逵的元素有多少个
//	//cout << m.count("李逵") << endl;
//
//
//	//multimap<int, int> m;
//	//for (int i = 0; i < 10; ++i)
//	//	m.insert(pair<int, int>(i, i));
//	//for (auto& e : m)
//	//	cout << e.first << "--->" << e.second << endl;
//	//cout << endl;
//	//// 返回m中大于等于5的第一个元素
//	//auto it = m.lower_bound(5);
//	//cout << it->first << "--->" << it->second << endl;
//	//// 返回m中大于5的元素
//	//it = m.upper_bound(5);
//	//cout << it->first << "--->" << it->second << endl;
//
//
//	// 用数组array中的元素构造set
//	int array[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	set<int> s(array, array + sizeof(array) / sizeof(int));
//	cout << s.size() << endl;
//	// 正向打印set中的元素，从打印结果中可以看出：set可去重
//	for (auto& e : s)
//		cout << e << " ";
//	cout << endl;
//
//	// 使用迭代器逆向打印set中的元素
//	for (auto it = s.rbegin(); it != s.rend(); ++it)
//		cout << *it << " ";
//	cout << endl;
//	// set中值为3的元素出现了几次
//	cout << s.count(1) << endl;
//	cout << s.count(2) << endl;
//	cout << s.count(3) << endl;
//	cout << s.count(4) << endl;
//	cout << s.count(5) << endl;
//	cout << s.count(6) << endl;
//	cout << s.count(7) << endl;
//	cout << s.count(8) << endl;
//	cout << s.count(9) << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int array[] = { 2, 1, 3, 9, 6, 0, 5, 8, 4, 7 };
//	// 注意：multiset在底层实际存储的是<int, int>的键值对
//	multiset<int> s(array, array + sizeof(array) / sizeof(array[0]));
//	for (auto& e : s)
//		cout << e << " ";
//	cout << endl;
//	// 测试multiset中是否可以存储值相同的元素
//	s.insert(5);
//	cout << s.count(5) << endl;
//	for (auto& e : s)
//		cout << e << " ";
//	cout << endl;
//	// 删除所有值为5的元素
//	s.erase(5);
//	for (auto& e : s)
//		cout << e << " ";
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//class String
//{
//public:
//	String(char* str = "")
//	{
//		if (nullptr == str)
//			str = "";
//		_str = new char[strlen(str) + 1];
//		strcpy(_str, str);
//	}
//
//	String(const String& s)
//		: _str(new char[strlen(s._str) + 1])
//	{
//		strcpy(_str, s._str);
//	}
//
//	String& operator=(const String& s)
//	{
//		if (this != &s)
//		{
//			char* pTemp = new char[strlen(s._str) + 1];
//			strcpy(pTemp, s._str);
//			delete[] _str;
//			_str = pTemp;
//		}
//		return *this;
//	}
//
//	~String()
//	{
//		if (_str)
//			delete[] _str;
//	}
//private:
//	char* _str;
//};
//
//String GetString(char* pStr)
//{
//	String strTemp(pStr);
//	return strTemp;
//}
//
//int main()
//{
//	String s1("hello");
//	String s2(GetString("world"));
//
//	system("pause");
//	return 0;
//}



class A {
public:
	A(int a) {
		cout << "constructor" << endl;
		this->num = new int(a);
	}

	A(const A& t) {
		cout << "copy" << endl;
		this->num = new int(*(t.num));
	}
	int* num;
};

A get() {
	A a(10);
	return a;
}

int main() {
	A t = get();
	system("pause");
	return 0;
}