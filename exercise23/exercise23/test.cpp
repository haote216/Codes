#include<iostream>
#include<string>
#include<vector>
using namespace std;


//字符串中寻找连续最长的数字串
//int main()
//{
//	string str, res, cur;
//	cin >> str;
//	for (int i = 0; i <= str.length(); i++)
//	{
//		// 数字+=到cur
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			cur += str[i];
//		}
//		else
//		{
//			// 找出更长的字符串，则更新字符串
//			if (res.size() < cur.size())
//				res = cur;
//			else
//				cur.clear();
//		}
//	}
//	cout << res;
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	vector<int> v;
//	while (cin >> a)
//		v.push_back(a);
//	int hashtable[10] = { 0 };
//	for (int i = 0; i <= v.size(); ++i)
//	{
//		hashtable[v[i]]++;
//		if (hashtable[v[i]] >= v.size() / 2)
//			cout << v[i] << endl;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	system("pause");
//	return 0;
//}
