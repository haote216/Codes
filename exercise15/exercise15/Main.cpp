#include<iostream>
using namespace std;
//class Date
//{
//public:
//	void Display()
//	{
//		cout << _year <<":"<< _month <<":"<< _day << endl;
//	}
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d1)
//	{
//		_year = d1._day;
//		_month = d1._month;
//		_day = d1._day;
//	}
//	~Date()
//	{
//		;
//	}
//	Date& operator=(const Date& d1)
//	{
//		if (this != &d1)
//		{
//			_year = d1._year;
//			_month = d1._month;
//			_day = d1._day;
//		}
//		return *this;
//	}
//	//Date operator+(int days);
//    //Date operator-(int days);
//	//int operator-(const Date& d);
//	//Date& operator++();
//	//Date operator++(int);
//	//Date& operator--();
//	//Date operator--(int);
//	//bool operator>(const Date& d)
//	//bool operator>=(const Date& d)
//	//bool operator<(const Date& d)
//	//bool operator<=(const Date& d)
//	bool operator==(const Date& d)
//	{
//		
//	}
//	//bool operator!=(const Date& d)const;
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	d1.Display();
//	Date d2(2019, 3, 8);
//	d1
//	system("pause");
//	return 0;
//}

//ֻ���ڶ��ϴ�������
class HeapType
{
public:
	static HeapType* GetHeapObj()
	{
		return new HeapType;
	}
private:
	HeapType()
	{}
	//1.ֻ��������ʵ�֡���Ϊʵ�ֿ��ܻ���鷳�����㱾����Ҫ
	//2.������˽��
	HeapType(const HeapType& ht) = delete;
};
int main()
{
	HeapType* p1 = HeapType::GetHeapObj();
	//HeapType obj1;(����)
	//HeapType obj3(*p1);(��������)
	return 0;
}


//ֻ����ջ�ϴ�������
class StackType
{
public:
	static StackType GetStackObj()
	{
		//return StackType();
		StackType obj;
		return obj;
	}
private:
	StackType()
	{}
};
int main()
{
	return 0;
}