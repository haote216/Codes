#include<iostream>
#include<string>
#include<vector>
using namespace std;

//int main()
//{
//	//cout << (43 < 42);
//	vector<int> v;
//	int i = 10;
//	while (i > 0)
//	{
//		v.push_back(i--);
//	}
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//		cout << *it++ << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	vector<string *>v;
//	string s1;
//	cin >> s1;
//	string *s2= new string;
//	s2 = &s1;
//	v.push_back(s2);
//	for (vector<string *>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << **it << endl << (**it).size();    
//	}
//
//	for (vector<string *>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		delete *it;
//	}
//	s2 = NULL;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	vector<string> v(10);
//	vector<string> *p1 = new vector<string>(10);
//	//vector<string> **p2 = new vector<string>(10);
//	//vector<string> *p3 = &p1;
//	vector<string> *p4 = p1;
//	
//	delete p4;
//	
//	//delete v;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	//char a = -1;
//	//signed char b = -1;
//	//unsigned char c = -1;
//	//printf("%d\n%d\n%d\n", a,b,c);
//
//	//signed char a = 128;
//	//printf("%d\n", a);
//	
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	system("pause");
//	return 0;
//}



int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	system("pause");
	return 0;
}