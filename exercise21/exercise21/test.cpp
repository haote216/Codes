#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//int main()
//{
//	//typedef int *a;
//	//const a s = 0;   // s的类型是int *const
//
//	const char *cp1 = "c";
//	const char *cp2 = "abcdefgh";
//
//	int i = strcmp(cp1, cp2);
//	//i = strcmp(cp2, cp1);
//	//i = strcmp(cp1, cp1);
//	cout << i << endl;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int n=0;
//	vector<int>v;
//	cin >> n;
//	while (n!=999)
//	{
//		v.push_back(n);
//		cin >> n;	
//	}
//	int *p = new int [v.size()];
//
//	
//	for (vector<int>::iterator it = v.begin(); it < v.end(); ++it)
//	{
//		cout << *it << endl;
//		*p = *it;
//		cout << *p << endl;
//		p++;
//		
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char p[10] = { 0 };
//	cin >> p;
//	//int m = 0;
//	//char *p = new char[m];
//	cout << p << endl;
//
//	system("pause");
//	return 0;
//}


//class Sample{
//public:
//	Sample(int x){
//		p = new int(x);
//	}
//	~Sample(){
//		if (p) delete p;
//	}
//	int show(){
//		return *p;
//	}
//private:
//	int*p;
//};
//
//int main(){
//	Sample S(5);
//	cout << S.show() << endl;
//	system("pause");
//	return 0;
//}


//排序子序列
//int main()
//{
//	int n = 0;
//	int count = 1;
//	cin >> n;
//	vector<int> v(n);
//	for (int i = 0; i<n; ++i)
//	{
//		cin >> v[i];
//	}
//	for (int i = 1; i<n - 1; ++i)
//	{
//		if (v[i - 1]<v[i] && v[i]>v[i + 1] || v[i - 1]>v[i] && v[i]<v[i + 1])
//		{
//			++count;
//			if (i != n - 3)
//				i++;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}


//倒置字符串
//int main()
//{
//	string s1, s2;
//	cin >> s1;
//	while (cin >> s2)
//	{
//		s1 = s2 + " " + s1;
//	}
//	cout << s1 << endl;
//	system("pause");
//	return 0;
//}

//倒置字符串
//int main()
//{
//	string s;
//	getline(cin, s);
//	reverse(s.begin(), s.end());
//	auto start = s.begin();
//	while (start != s.end())
//	{
//		auto end = start;
//		while (end != s.end() && *end != ' ')
//		{
//			end++;
//		}
//		reverse(start, end);
//		if (end != s.end())
//			start = end + 1;
//		else
//			start = end;
//	}
//	cout << s << endl;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int p[] = { 1, 2, 3, 4, 5 };
//	int *a = p;
//	vector<int>v(p,p+5);
//	for (auto i : v)
//		cout << i << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	string s;
//	vector<string> v;
//	while (cin >> s)
//	{
//		v.push_back(s);
//	}
//	char **ptr = new char*[v.size()];
//	//处理vector中元素 
//	size_t i = 0;
//	for (vector<string>::iterator it = v.begin(); it != v.end(); ++it, ++i)
//	{
//		char *p = new char[(*it).size() + 1];//创建字符数组 
//		strcpy(p, (*it).c_str());
//		ptr[i] = p;//将字符数组指针插入到字符指针数组中 
//	}
//
//
//	for (vector<string>::iterator ite = v.begin(); ite != v.end(); ++ite)
//		cout << *ite << ' ';
//	cout << endl;
//
//	for (i = 0; i != v.size(); ++i)
//		cout << ptr[i] << ' ';
//	cout << endl;
//
//	//释放各个字符数组 
//	for (i = 0; i != v.size(); ++i)
//		delete[]ptr[i];//动态分配内存，使用完，一定要释放！ 
//
//	//释放字符指针数组 
//	delete[]ptr;
//	system("pause");
//	return 0;
//}

int main()
{
	system("pause");
	return 0;
}