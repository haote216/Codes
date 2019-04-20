#include<iostream>
#include<string>
using namespace std;

//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name: " << _name << endl;
//		//cout << "age: " << _age << endl;
//	}
//	string _name = "Haote";
//
//private:
//	int _age = 22;
//};
//
//
//class Student: public Person
//{
//protected:
//	int _stdid;
//};
//
//class Teacher :public Person
//{
//protected:
//	int _jobid;
//};
//
//
//
//int main()
//{
//
//	Student s;    //派生类
//
//	Person p = s; //p是基类对象
//	Person* ptr = &s;
//	Person& r = s;
//
//	p._name = "123";
//	s._name = "456";
//	r._name = "789";
//
//	p.Print();
//	ptr->Print();
//	r.Print();
//
//	//s = p;基类对象不能赋值给派生类对象
//
//	Student* sptr = (Student*)ptr;
//
//
//	system("pause");
//	return 0;
//}




class Person
{
public:
	Person(const char*name="haote3")
		: _name(name)
	{
		cout << "Person()" << " " << _name << endl;
	}
	Person(const Person& p )
		: _name(p._name)
	{
		cout << "Person(const Person& p)" << p._name << endl;
	}
	Person& operator=(const Person& p)
	{
		cout << "Person operator=(const Person& p)" << endl;
		if (this != &p)
			_name = p._name;
		return *this;
	}
	~Person()
	{
		cout << "~Person()" << endl;
	}
protected:

	
	string _name; // 姓名
};
class Student : public Person
{
public:


	Student()
		:Person()
	{}


	Student(const Student& s)
		: Person(s)
	{}

	//Student(const char* name, int num)
	//	: Person(name)
	//	, _num(num)
	//{
	//	cout << "Student()" << endl;
	//}


	//Student(const Student& s)
	//	: Person(s)
	//	, _num(s._num)
	//{
	//	cout << "Student(const Student& s)" << endl;
	//}


	//Student& operator = (const Student& s)
	//{
	//	cout << "Student& operator= (const Student& s)" << endl;
	//	if (this != &s)
	//	{
	//		Person::operator =(s);
	//		_num = s._num;
	//	}
	//	return *this;
	//}
	//~Student()
	//{
	//	cout << "~Student()" << endl;
	//}
protected:
	int _num; //学号
};
int main()
{
	Student s1;
	Student s2(s1);

	system("pause");
	return 0;
}