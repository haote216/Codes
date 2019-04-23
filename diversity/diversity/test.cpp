#include<iostream>

class Person{
public:
	virtual void BuyTicket()
	{
		std::cout << "ÂòÆ±--È«¼Û" << std::endl;
	}
	virtual ~Person()
	{
		std::cout << "~Person " << std::endl;
	}
};

class Student : public Person{
public:
	virtual void BuyTicket()
	{
		std::cout << "ÂòÆ±--°ë¼Û" << std::endl;
	}

	virtual ~Student()
	{
		std::cout << "~Student " ;
	}
};

void Func(Person & p)
{
	p.BuyTicket();
}

int main()
{
	Person p;
	Student s;
	Func(p);
	Func(s);


	system("pause");
	return 0;
}



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
