#include<iostream>
#include<string>
using namespace std;

//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//		cout << 111 << endl;
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//		cout << 222 << endl;
//	}
//private:
//	char* _str;
//};
//int main()
//{
//	String s1("hello");
//	/*String s2(s1);*/
//	system("pause");
//	return 0;
//}



//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//int main()
//{
//	String s1("hello");
//	String s2("world");
//	s1 = s2;
//	system("pause");
//	return 0;
//}



//class Date
//{
//public:
//	void Display()
//	{
//		cout << "Display ()" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//		Display()const;
//	}
//	void Display() const
//	{
//		cout << "Display () const" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//		Display();
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//int main()
//{
//	Date d1;
//	d1.Display();
//	const Date d2;
//	d2.Display();
//
//	system("pause");
//	return 0;
//}




//class A
//{
//public:
//	A() { ++_scount; }
//	A(const A& t) { ++_scount; }
//	static int GetACount() { return _scount; }
//private:
//	static int _scount;
//};
//int A::_scount = 0;
//int main()
//{
//	cout << A::GetACount() << endl;
//	A a1, a2;
//	A a3(a1);
//	cout << A::GetACount() << endl;
//	system("pause");
//	return 0;
//}


//class Test
//{
//public:
//	Test()
//		: _data(0)
//	{
//		cout << "Test():" << this << endl;
//	}
//	~Test()
//	{
//		cout << "~Test():" << this << endl;
//	}
//private:
//	int _data;
//};
//void Test1()
//{
//	// 申请单个Test类型的空间
//	Test* p1 = (Test*)malloc(sizeof(Test));
//	free(p1);
//	// 申请10个Test类型的空间
//	Test* p2 = (Test*)malloc(sizeof(Test) * 10);
//	free(p2);
//}
//
//void Test2()
//{
//// 申请单个Test类型的对象
//Test* p1 = new Test;
//delete p1;
//// 申请10个Test类型的对象
//Test* p2 = new Test[10];
//delete[] p2;
//}
//int main()
//{
//	Test2();
//	system("pause");
//	return 0;
//}


//class Car
//{
//public:
//	virtual void Drive() final {}
//};
//
//class Benz :public Car
//{
//public:
//	virtual void Drive() { cout << "Benz-舒适" << endl; }
//};

//class Car{
//public:
//	virtual void Drive(){}
//};
//// 2.override 修饰派生类虚函数强制完成重写，如果没有重写会编译报错
//class Benz :public Car {
//public:
//	virtual void Drive() override { cout << "Benz-舒适" << endl; }
//};


//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Base::Func1()" << endl;
//	}
//	virtual void Func2()
//	{
//		cout << "Base::Func2()" << endl;
//	}
//	void Func3()
//	{
//		cout << "Base::Func3()" << endl;
//	}
//private:
//	int _b = 1;
//};
//
//
//class Derive : public Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Derive::Func1()" << endl;
//	}
//	virtual void Func4()
//	{
//		cout << "Derive::Func4()" << endl;
//	}
//
//private:
//	int _d = 2;
//};
//
//typedef void(*VFPTR) ();
//void PrintVTable(VFPTR vTable[])
//{
//	// 依次取虚表中的虚函数指针打印并调用。调用就可以看出存的是哪个函数
//	cout << " 虚表地址>" << vTable << endl;
//	for (int i = 0; vTable[i] != nullptr; ++i)
//	{
//		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
//		VFPTR f = vTable[i];
//		f();
//	}
//	cout << endl;
//}
//int main()
//{
//	Base b;
//	Derive d;
//	// 思路：取出b、d对象的头4bytes，就是虚表的指针，前面我们说了虚函数表本质是一个存虚函数指针的
//	//指针数组，这个数组最后面放了一个nullptr
//		// 1.先取b的地址，强转成一个int*的指针
//		// 2.再解引用取值，就取到了b对象头4bytes的值，这个值就是指向虚表的指针
//		// 3.再强转成VFPTR*，因为虚表就是一个存VFPTR类型(虚函数指针类型)的数组。
//		// 4.虚表指针传递给PrintVTable进行打印虚表
//		// 5.需要说明的是这个打印虚表的代码经常会崩溃，因为编译器有时对虚表的处理不干净，虚表最后面没有
//		//放nullptr，导致越界，这是编译器的问题。我们只需要点目录栏的 - 生成 - 清理解决方案，再编译就好了。
//	VFPTR* vTableb = (VFPTR*)(*(int*)&b);
//	PrintVTable(vTableb);
//	VFPTR* vTabled = (VFPTR*)(*(int*)&d);
//	PrintVTable(vTabled);
//	system("pause");
//	return 0;
//}


class Base1 {
public:
	virtual void func1() { cout << "Base1::func1" << endl; }
	virtual void func2() { cout << "Base1::func2" << endl; }
private:
	int b1;
};


class Base2 {
public:
	virtual void func1() { cout << "Base2::func1" << endl; }
	virtual void func2() { cout << "Base2::func2" << endl; }
private:
	int b2;
};


class Derive : public Base1, public Base2 {
public:
	virtual void func1() { cout << "Derive::func1" << endl; }
	virtual void func3() { cout << "Derive::func3" << endl; }
private:
	int d1;
};


typedef void(*VFPTR) ();
void PrintVTable(VFPTR vTable[])
{
	cout << " 虚表地址>" << vTable << endl;
	for (int i = 0; vTable[i] != nullptr; ++i)
	{
		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
		VFPTR f = vTable[i];
		f();
	}
	cout << endl;
}
int main()
{
	Derive d;
	VFPTR* vTableb1 = (VFPTR*)(*(int*)&d);
	PrintVTable(vTableb1);
	VFPTR* vTableb2 = (VFPTR*)(*(int*)((char*)&d + sizeof(Base1)));
	PrintVTable(vTableb2);
	system("pause");
	return 0;
}