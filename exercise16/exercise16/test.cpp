#include<iostream>
using namespace std;
//��������

//�ڿӷ�
//int Parition_2(int array[], int left, int right)
//{
//	int begin = left;
//	int end = right;
//	int pivot = array[right];
//	while (begin < end)
//	{
//		while (begin < end && array[begin] <= pivot)
//		{
//			begin++;
//		}
//		array[end] = array[begin];
//		while (begin < end && array[end] >= pivot)
//		{
//			end--;
//		}
//		array[begin] = array[end];
//	}
//	array[begin] = pivot;
//}

//int Parition_3(int array[], int left, int right)
//{
//	int i = left;
//	int d = left;
//	int pivot = right;
//	while (i <= right)
//	{
//		if (array[i] >= pivot)
//		{
//			i++;
//		}
//		if (array[i] < pivot)
//		{
//			Swap(&array[i], &array[d]);
//			i++;
//			d++;
//		}
//	}
//}
//ѡ���׼ֵ�İ취��ֻ�����Ҳࣨ����ࣩѡΪ��׼ֵ���������ÿ����˻�Ϊ���������������� ���� ����



//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()const
//	{
//		cout << "haote216" << endl;
//	}
//	void Display()
//	{
//		Print();
//		cout << "Display()" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//	void Display2()const
//	{
//		Print();
//		cout << "Display()const" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//	
//	//void Print()
//	//{
//	//	cout << _year << "-" << _month << "-" << _day << endl;
//	//}
//	//void operator=(const Date& d)
//	//{
//	//	if (this != &d)
//	//	{
//	//		_year = d._year;
//	//		_month = d._month;
//	//		_day = d._day;
//	//	}
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2019,3,14);
//	d1.Display();
//	d1.Display2();
//	
//
//	const Date d2(2020, 8, 15);
//    //d2.Display();���ܵ���
//	//d2.Display2();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Sum
//{
//public:
//	Sum()
//	{
//		count += i;
//		++i;
//	}
//	static int count;
//	static int i;
//};
//int Sum::count = 0;
//int Sum::i = 1;
//int main()
//{
//	Sum a[10];
//	cout << Sum::count << endl;
//	system("pause");
//	return 0;
//}

//��ģ��
//template<class T>
//class Vector
//{
//public:
//	Vector()
//		:_a(nullptr)
//		, _size(0)
//		, _capacity(0)
//	{}
//	~Vector()
//	{
//		if (_a)
//		{
//			delete[] _a;
//			_size = _capacity = 0;
//		}
//	}
//	void PushBack(const T& x)
//	{
//		if (_size == _capacity)
//		{
//			size_t newcapacity = _capacity == 0 ? 3 : _capacity * 2;
//			T * tmp = new T[newcapacity];
//			if (_a)
//			{
//				memcpy(tmp, _a, sizeof(T)*_capacity);
//				delete[] _a;
//			}
//			_a = tmp;
//			_capacity = newcapacity;
//		}
//		_a[_size] = x;
//		_size++;
//	}
//	T& operator[](size_t pos)
//	{
//		return _a[pos];
//	}
//	size_t Size()
//	{
//		return _size;
//	}
//private:
//	T* _a;
//	size_t _size;
//	size_t _capacity;
//};
//int main()
//{
//	Vector<int> v1;
//	v1.PushBack(1);
//	v1.PushBack(2);
//	v1.PushBack(3);
//	v1.PushBack(4);
//	//v1[0] = 10;
//	Vector<double> v2;
//	v2.PushBack(1.11);
//	v2.PushBack(2.22);
//	v2.PushBack(3.33);
//	v2.PushBack(4.44);
//
//	for (size_t i = 0; i < v1.Size(); ++i)
//	{
//		cout << v1[i] << "  ";
//		//cout << v1.operator[](i) << endl;
//	}
//	system("pause");
//	return 0;
//}
#include<vector>
#include<string>
#include<list>
//int main()
//{
//	/*int a = 1, b = 2;
//	swap(a, b);
//	cout << a <<" "<< b << endl;*/
//
//	//vector<int>v1;
//	//v1.push_back(1);
//	//v1.push_back(2);
//	//v1.push_back(3);
//	//v1.push_back(4);
//	//v1.push_back(5);
//
//	/*string s1("hello world , change world!");
//	cout << s1 << endl;
//	s1[0] = 'H';
//	s1.append("hello haote");
//	s1 += ("hello haote");*/
//	/*string s1("hello");
//	string s2="haote";*/
//
//	string num("123");
//	string::iterator it = num.begin();   //����������ͳһ�ķ�ʽȥ��������,���ε��˵ײ㸴�ӵĽṹϸ�ڡ�
//	                                     //��ͨ�������ǿɶ���д�ģ�const��������ֻ����
//
//	                                     //���ʷ�ʽ��1.������    2.for+�±�    3.C++11�﷨��ʽfor
//	string::reverse_iterator rit = num.rbegin();
//	int value = 0;
//	while (it != num.end())
//	{
//		value *= 10;
//		value += *it - '0';
//		++it;
//	}
//	cout <<value<< endl;
//	while (rit != num.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//	vector<int>::iterator vit = v.begin();
//	while (vit != v.end())
//	{
//		cout << *vit << " ";
//		++vit;
//	}
//	cout << endl;
//	list<int> l;
//	l.push_back(100);
//	l.push_back(100);
//	l.push_back(100);
//	list<int>::iterator lit = l.begin();
//	while (lit != l.end())
//	{
//		cout << *lit << " ";
//		++lit;
//	}
//	cout << endl;
//
//
//
//
//	//for (size_t i = 0; i < s1.size(); ++i)
//	//{
//	//	cout << s1[i] << "";
//	//}
//	//cout << endl;
//	//cout << s2 << endl;
//	system("pause");
//	return 0;
//}

void test_string1()
{
	string file("test.cpp");
	string url("https://www.2345.com/?39291");
	size_t pos = file.rfind('.');
	if (pos == string::npos)
	{
		cout << "�ļ�û�к�׺" << endl;
	}
	else
	{
		cout << file.substr(pos, file.size() - pos) << endl;
	}

}
int main()
{
	test_string1();
	system("pause");
	return 0;
}