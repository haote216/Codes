#include<iostream>
#include<windows.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


//int main()
//{
//	vector<int> v;
//	int m;
//	for (int i = 0; i < 10; ++i)
//	{
//		cin >> m;
//		v.push_back(m);
//	}
//	for (int j = 0; j < v.size(); j+=2)
//	{
//		cout << v[j]+v[j+1] << " ";
//	}
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//	int i = 0;
//	while (i < 10)
//	{
//		v.push_back(i);
//		++i;
//	}
//	for (vector<int>::iterator it = v.begin(); it < v.end(); ++it)
//	{
//		*it = 2 * *it;
//		cout << *it << " ";
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	//vector <char>v;
//	//vector<char>::iterator mid = v.begin() + v.end();   //会发生编译错误
//
//	//int *ip;
//	//string s, *sp = 0;
//	//int i;
//	//double* dp = &i;
//	//int *ip, ip2;
//	//const int i = 0, *p = i;
//	//string *p = NULL;
//	printf("%s , %5.3s\n", "computer", "computer");
//	system("pause");
//	return 0;
//}


//int func(vector<int> &v, int s)
//{
//	int sum = 0;
//	sort(v.begin(), v.end());
//	for (int i = s; i<2 * s; ++i)
//	{
//		sum += v[i];
//	}
//	return sum;
//}
//
//int main()
//{
//	int s = 0;
//	int n = 0;
//	cin >> s;
//	vector<int> v;
//	for (int i = 0; i< s * 3; ++i)
//	{
//		cin >> n;
//		v.push_back(n);
//	}
//	cout << func(v, s) << endl;
//	system("pause");
//	return 0;
//}



//组队竞赛
//long helper(vector<int>& v, int n){
//	long sum = 0;
//	sort(v.begin(), v.end());
//	for (int i = n; i<3 * n; i += 2){
//		sum += v[i];
//	}
//	return sum;
//}
//
//
//
//
//int main(){
//	int n, t;
//	long sum = 0;
//	vector<int> v;
//	cin >> n;
//	for (int i = 0; i<3 * n; i++){
//		cin >> t;
//		v.push_back(t);
//	}
//	cout << helper(v, n) << endl;
//	system("pause");
//	return 0;
//}



//删除公共字符串
//int main()
//{
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	int hashtable[256] = { 0 };
//	for (size_t i = 0; i<s2.size(); ++i)
//	{
//		hashtable[s2[i]]++;
//	}
//	string ret;
//	for (size_t i = 0; i<s1.size(); ++i)
//	{
//		if (hashtable[s1[i]] == 0)
//			ret += s1[i];
//	}
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}


int main()
{
	int i = 42, j = 1024;
	int *p1 = &i, *p2 = &j;
	*p2 = *p1 * *p2;
	*p1 *= *p1;
	cout << *p1 << endl;
	system("pause");
	return 0;
}