#include<iostream>

//class Person{
//public:
//	virtual void BuyTicket()
//	{
//		std::cout << "ÂòÆ±--È«¼Û" << std::endl;
//	}
//	virtual ~Person()
//	{
//		std::cout << "~Person " << std::endl;
//	}
//};
//
//class Student : public Person{
//public:
//	virtual void BuyTicket()
//	{
//		std::cout << "ÂòÆ±--°ë¼Û" << std::endl;
//	}
//
//	virtual ~Student()
//	{
//		std::cout << "~Student " ;
//	}
//};
//
//void Func(Person & p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	Person p;
//	Student s;
//	Func(p);
//	Func(s);
//
//
//	system("pause");
//	return 0;
//}



//class Car
//{
//public:
//	virtual void Drive() = 0;
//};
//class Benz :public Car
//{
//public:
//	virtual void Drive()override
//	{
//		std::cout << "Benz-ÊæÊÊ" << std::endl;
//	}
//};
//class BMW :public Car
//{
//public:
//	virtual void Drive()override
//	{
//		std::cout << "BMW-²Ù¿Ø" << std::endl;
//	}
//};
//int main()
//{
//	Car* pBenz = new Benz;
//	pBenz->Drive();
//
//	Car* pBMW = new BMW;
//	pBMW->Drive();
//
//	system("pause");
//	return 0;
//}



//class Base
//{
//public:
//	virtual void Func1()
//	{
//		std::cout << "Base::Func1()" << std::endl;
//	}
//	virtual void Func2()
//	{
//		std::cout << "Base::Func2()" << std::endl;
//	}
//	virtual void Func3()
//	{
//		std::cout << "Base::Func3()" << std::endl;
//	}
//private:
//	int _b = 1;
//};
//
//class Derive : public Base
//{
//public:
//	virtual void Func1()
//	{
//		std::cout << "Derive::Func1()" << std::endl;
//	}
//private:
//	int _d = 2;
//};
//
//
//int main()
//{
//	Base b;
//	Derive d;
//
//	system("pause");
//	return 0;
//}
//

class Base1 {
public:
	virtual void func1() { std::cout << "Base1::func1" << std::endl; }
	virtual void func2() { std::cout << "Base1::func2" << std::endl; }
private:
	int b1;
};
class Base2 {
public:
	virtual void func1() { std::cout << "Base2::func1" << std::endl; }
	virtual void func2() { std::cout << "Base2::func2" << std::endl; }
private:
	int b2;
};
class Derive : public Base1, public Base2 {
public:
	virtual void func1() { std::cout << "Derive::func1" << std::endl; }
	virtual void func3() { std::cout << "Derive::func3" << std::endl; }
private:
	int d1;
};
typedef void(*VFPTR) ();
void PrintVTable(VFPTR vTable[])
{
	std::cout << " Ðé±íµØÖ·>" << vTable << std::endl;
	for (int i = 0; vTable[i] != nullptr; ++i)
	{
		printf(" µÚ%d¸öÐéº¯ÊýµØÖ· :0X%x,->", i, vTable[i]);
		VFPTR f = vTable[i];
		f();
	}
	std::cout << std::endl;
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