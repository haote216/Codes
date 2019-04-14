#include"String.h"


//void TestString1()
//{
//	string s1;
//	string s2("hello world");
//	cout << s1.c_str() << " ";
//	cout << s2.c_str() << endl;
//
//	char a1[] = "\0";
//	cout << sizeof(a1) << " ";
//	cout << strlen(a1) << " ";
//	cout << a1 << endl;
//
//	char a2[] = "\\0";
//	cout << sizeof(a2) << " ";
//	cout << strlen(a2) << " ";
//	cout << a2 << endl;
//
//	char a3[] = "0000";
//	cout << sizeof(a3) << " ";
//	cout << strlen(a3) << " ";
//	cout << a3 << endl;
//
//	char a4[] = "\0000";
//	cout << sizeof(a4) << " ";
//	cout << strlen(a4) << " ";
//	cout << a4 << endl;
//
//	char a5[] = "\0 000";
//	cout << sizeof(a5) << " ";
//	cout << strlen(a5) << " ";
//	cout << a5 << endl;
//}

//·´×ª×Ö·û´®2

//class Solution {
//public:
//	string reverseStr(string s, int k) {
//		int len = s.size() - 1;
//		int i = 0;
//		int j = i + k;
//		while (i < len)
//		{
//			while (i < i + k)
//			{
//				swap(s[i++], s[j-- - 1]);
//			}
//			i += 2 * k;
//		}
//		i -= 2 * k;
//		if (len - i < k)
//		{
//			swap(s[i], s[len]);
//		}
//		else if ((len - i < 2 * k) && (len - i >= k))
//		{
//			swap(s[i], s[j - 1]);
//		}
//		return s;
//	}
//};


//void TestString3()
//{
//	/*string s1(10, 'a');
//	cout << s1 << endl;*/
//	String s1;
//	String s2("hello world");
//	String s3("hello haote");
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//
//	String s3(s2);
//	cout << s3.c_str() << endl;
//	cout << endl;
//	s1 = s3;
//	cout << s1.c_str() << endl;
//
//
//	string s1("abcdefgh");
//	string s3;
//	Solution s2;
//	s3 = s2.reverseStr(s1, 4);
//	cout << s3 << endl;
//	bit::String s1("hello");
//	bit::String s2(s1);
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//
//	s1 += ' ';
//	s1 += "world";
//	cout << s1.c_str() << endl;
//
//	for (size_t i = 0; i < s1.Size(); ++i)
//	{
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//}


//void teststring4()
//{
//	//1
//	bit::string ss("hello");
//	ss.resize(17, 'a');
//	cout << ss.c_str() << endl;
//
//	//2
//	bit::string::iterator it = ss.begin();
//	while (it != ss.end())
//	{
//		cout << *it << "";
//		++it;
//	}
//	cout << endl;
//
//	//3
//	for (auto c : ss)
//	{
//		cout << c << "";
//	}
//	cout << endl;
//}

//void TestString5()
//{
//	bit::String file1 = "String.cpp";
//	bit::String file2 = "String.c";
//
//	size_t pos = file1.RFind('.');
//	bit::String sub = file2.Substr(pos , 5);
//	cout << sub.c_str() << endl;
//
//	bit::String url("http://www.cplusplus.com/654654544/54654/sfsfsf");
//	size_t start = url.Find("://");
//	start += 3;
//	size_t end = url.Find('/', start);
//
//	bit::String domin = url.Substr(start, end - start);
//	cout << domin.c_str() << endl;
//
//}

void TestString6()
{
	bit::String str("hello world");
	//str.Insert(5, ' ');
	//str.Insert(0, ' ');
	//str.Insert(0, "haote");
	//str.PushBack('a');
	str.Erase(0, 7);
	cout << str.c_str() << endl;

}
int main()
{
	TestString6();

	system("pause");
	return 0;
}