#include<iostream>
#include<vector>
#include<queue>


using namespace std;
//class Solution {
//public:
//	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
//		vector<int> ret;
//		if (k <= 0 || k>input.size())
//			return ret;
//		priority_queue<int> pq;
//		for (int i = 0; i<k; ++i)
//			pq.push(input[i]);
//
//		for (int i = 0; i<input.size(); ++i)
//		{
//			if (input[i] < pq.top())
//			{
//				pq.pop();
//				pq.push(input[i]);
//			}
//		}
//		ret.reserve(k);
//		while (!pq.empty())
//		{
//			ret.push_back(pq.top());
//			pq.pop();
//		}
//		return ret;
//
//		for (int i = 0; i < ret.size(); ++i)
//			cout << ret[i] << endl;
//	}
//};
//
//int main()
//{
//	vector<int>v = { 8, 5, 4, 6, 3, 1, 2, 7 };
//	Solution s;
//	s.GetLeastNumbers_Solution(v,4);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	vector<int>v1;
//	vector<int>v2;
//	int n = 0, m = 0;
//	//cin >> n;
//	//cin >> m;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> v1[i];
//		cout << v1[i];
//	}
//	system("pause");
//	return 0;
//}

//void TestFunc(int a = 10)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//void TestFunc(int a)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//
//
//int main()
//{
//	int b;
//	TestFunc(b);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int n = 0;
//	for (int i = 1; i <= 23456; i++)
//	{
//		n = i;
//		while(n>0)
//		{
//			if (n == 2)
//			{
//				count++;
//				n /= 10;
//			}
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}



//class A1 {
//public:
//	void f1(){}
//private:
//	int _a;
//};
//
//class A2{
//private:
//	int _a;
//};
//
//class A3 {
//public:
//	void f2() {}
//};
//
//class A4
//{};
//
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//	cout << sizeof(A4) << endl;
//
//	system("pause");
//	return 0;
//}



//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//	//void Show()
//	//{
//	//	cout << "Show()" << endl;
//	//}
//private:
//	int _a ;
//};
//int main()
//{
//	A p;
//	p.PrintA();
//	system("pause");
//	return 0;
//}


//class Date
//{
//public:
//	// 1.�޲ι��캯��
//	Date()
//	{
//		cout << "1" << endl;
//	}
//	// 2.���ι��캯��
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "2" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1; // �����޲ι��캯��
//	Date d2(2015, 1, 1); // ���ô��εĹ��캯��
//	// ע�⣺���ͨ���޲ι��캯����������ʱ��������治�ø����ţ�����ͳ��˺�������
//	// ���´���ĺ�����������d3�������ú����޲Σ�����һ���������͵Ķ���
//	Date d3();
//
//
//	system("pause");
//	return 0;
//}


class Time
{
public:
	Time()
	{
		cout << "Time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}

private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	int _year;
	int _month;
	int _day;

	Time _t;
};
int main()
{
	Date d ;
	system("pause");
	return 0;
}