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
//	// ��b == 0ʱ�׳��쳣
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
//	// ע�⣺string�����֧��ֱ����cin��cout������������
//	string s("hello, bit!!!");
//	cout << s.length();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	// ��s�е��ַ�����գ�ע�����ʱֻ�ǽ�size��0�����ı�ײ�ռ�Ĵ�С
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// ��s����Ч�ַ��������ӵ�10�������λ����'a'�������
//	// ��aaaaaaaaaa��
//	s.resize(10, 'a');
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// ��s����Ч�ַ��������ӵ�15�������λ����ȱʡֵ'\0'�������
//	// "aaaaaaaaaa\0\0\0\0\0"
//	// ע���ʱs����Ч�ַ������Ѿ����ӵ�15��
//	s.resize(15);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	// ��s����Ч�ַ�������С��5��
//	s.resize(5);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//}



//void TestString()
//{
//	string str;
//	str.push_back(' '); // ��str�����ո�
//	str.append("hello"); // ��str��׷��һ���ַ�"hello"
//	str += 'b'; // ��str��׷��һ���ַ�'b'
//	str += "it"; // ��str��׷��һ���ַ���"it"
//	cout << str << endl;
//	cout << str.c_str() << endl; // ��C���Եķ�ʽ��ӡ�ַ���
//	// ��ȡfile�ĺ�׺
//	string file1("string.cpp");
//	size_t pos = file1.rfind('.');
//	string suffix(file1.substr(pos, file1.size() - pos));
//	cout << suffix << endl;
//	// npos��string�����һ����̬��Ա����
//	// static const size_t npos = -1;
//	// ȡ��url�е�����
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
//	// ɾ��url��Э��ǰ׺
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
//	// ��list�е�һ���ڵ������һ���ڵ��е�ֵ��Ϊ10
//	l1.front() = 10;
//	l1.back() = 10;
//	for (auto& e : l1)
//		cout << e << " ";
//	cout << endl;
//	const list<int> l2(array, array + sizeof(array) / sizeof(array[0]));
//	//int& a = l2.front(); ��Ϊl2��const���͵�list���������front()Ϊconst ��������
//	const int& ca = l2.front();
//	system("pause");
//	return 0;
//}


//int main()
//{
//	//// key��value�����Ͷ������ַ���
//	//map<string, string> m1;
//	//// C++11 ������ʼ��
//	//map<string, string> m2{ { "apple", "ƻ��" },
//	//						{ "banana", "�㽶" },
//	//						{ "orange", "����" },
//	//						{ "peach", "����" },
//	//						{ "waterme", "ˮ����" } };
//	//cout << m2["apple"] << endl;
//	//cout << m2["waterme"] << endl;
//	//map<string, string> m3(m2);
//
//
//	//map<string, string> m{ { "apple", "ƻ��" },
//	//{ "banan", "�㽶" },
//	//{ "orange", "����" },
//	//{ "peach", "����" },
//	//{ "waterme", "ˮ����" } };
//	//for (auto it = m.begin(); it != m.end(); ++it)
//	//	cout << (*it).first << "--->" << (*it).second << endl;
//	//cout << endl;
//
//	map<string, string> m;
//	/*
//	operator[]��ԭ���ǣ�
//	��<key, T()>����һ����ֵ�ԣ�Ȼ�����insert()�������ü�ֵ�Բ��뵽map��
//	���key�Ѿ����ڣ�����ʧ�ܣ�insert�������ظ�key����λ�õĵ�����
//	���key�����ڣ�����ɹ���insert���������²���Ԫ������λ�õĵ�����
//	operator[]�������insert����ֵ��ֵ���е�value����
//	*/
//	// ��<"apple", "">����map�У�����ɹ�������value�����ã�����ƻ������ֵ�������ý����
//	// ���޸���"apple"��Ӧ��value""Ϊ"ƻ��"
//	m["apple"] = "ƻ��";
//	// ��<"apple", "">����map�У�����ʧ�ܣ���<"apple", "ƻ��">�е�"ƻ��"����
//	cout << m["apple"] << endl;
//	cout << m.size() << endl;
//	// ��banan����map�У��ú������쳣��
//	m.at("banana");
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	//multimap<string, string> m;
//	//m.insert(make_pair("����", "������"));
//	//m.insert(make_pair("�ֳ�", "����ͷ"));
//	//m.insert(make_pair("³��", "������"));
//	//// ���Բ���key��ͬ��Ԫ��
//	//m.insert(make_pair("����", "��ţ"));
//	//cout << m.size() << endl;
//	//for (auto& e : m)
//	//	cout << "<" << e.first << "," << e.second << ">" << endl;
//	//// keyΪ���ӵ�Ԫ���ж��ٸ�
//	//cout << m.count("����") << endl;
//
//
//	//multimap<int, int> m;
//	//for (int i = 0; i < 10; ++i)
//	//	m.insert(pair<int, int>(i, i));
//	//for (auto& e : m)
//	//	cout << e.first << "--->" << e.second << endl;
//	//cout << endl;
//	//// ����m�д��ڵ���5�ĵ�һ��Ԫ��
//	//auto it = m.lower_bound(5);
//	//cout << it->first << "--->" << it->second << endl;
//	//// ����m�д���5��Ԫ��
//	//it = m.upper_bound(5);
//	//cout << it->first << "--->" << it->second << endl;
//
//
//	// ������array�е�Ԫ�ع���set
//	int array[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	set<int> s(array, array + sizeof(array) / sizeof(int));
//	cout << s.size() << endl;
//	// �����ӡset�е�Ԫ�أ��Ӵ�ӡ����п��Կ�����set��ȥ��
//	for (auto& e : s)
//		cout << e << " ";
//	cout << endl;
//
//	// ʹ�õ����������ӡset�е�Ԫ��
//	for (auto it = s.rbegin(); it != s.rend(); ++it)
//		cout << *it << " ";
//	cout << endl;
//	// set��ֵΪ3��Ԫ�س����˼���
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
//	// ע�⣺multiset�ڵײ�ʵ�ʴ洢����<int, int>�ļ�ֵ��
//	multiset<int> s(array, array + sizeof(array) / sizeof(array[0]));
//	for (auto& e : s)
//		cout << e << " ";
//	cout << endl;
//	// ����multiset���Ƿ���Դ洢ֵ��ͬ��Ԫ��
//	s.insert(5);
//	cout << s.count(5) << endl;
//	for (auto& e : s)
//		cout << e << " ";
//	cout << endl;
//	// ɾ������ֵΪ5��Ԫ��
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