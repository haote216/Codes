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


//class Person
//{
//public:
//	Person(const char* name = "haote1")
//		: _name(name)
//	{
//		cout << "Person()" << " " << _name << endl;
//	}
//	Person(const Person& p )
//		: _name(p._name)
//	{
//		cout << "Person(const Person& p)" << " " <<p._name << endl;
//	}
//	Person& operator=(const Person& p)
//	{
//		cout << "Person operator=(const Person& p)" << endl;
//		if (this != &p)
//			_name = p._name;
//		return *this;
//	}
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//protected:	
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//public:
//		Student(const char* name = "haote2", int num = 217)
//		: Person(name)
//		, _num(num)
//	{
//		cout << _name << " " << _num << endl;
//	}
//
//	Student(const Student& s)
//		: Person(s)
//		, _num(s._num)
//	{}
//
//	Student& operator = (const Student& s)
//	{
//		cout << "Student& operator= (const Student& s)" << endl;
//		if (this != &s)
//		{
//			Person::operator =(s);
//			_num = s._num;
//		}
//		return *this;
//	}
//
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//protected:
//	int _num; //学号
//};
//int main()
//{
//	Student s1;
//	Student s2(s1);
//
//
//	system("pause");
//	return 0;
//}

//class Student;
//
//class Person
//{
//public:
//	friend void D(const Person& p, const Student& s);
//protected:
//	string _name;
//};
//
//class Student :public Person
//{
//public:
//	friend void D(const Person& p, const Student& s);
//protected:
//	int _stuNum;
//};
//
//void D(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//}
//
//int main()
//{
//	Person p;
//	Student s;
//	D(p, s);
//	return 0;
//}

//class Person
//{
//public:
//	Person() { ++_count; ++_num; }
//protected:
//	string _name; // 姓名
//public:
//	static int _count; // 统计人的个数。
//	static int _num;
//};
//int Person::_count = 0;
//int Person::_num = 0;
//
//class Student : public Person
//{
//protected:
//	int _stuNum; // 学号
//};
//
//class Graduate : public Student
//{
//protected:
//	string _seminarCourse; // 研究科目
//};
//
//int main()
//{
//	Student s1;
//	Student s2;
//	Student s3;
//	Graduate s4;
//	cout << " 人数 :" << Person::_count << endl;
//	cout << " 人数 :" << Student::_count << endl;
//	cout << " 人数 :" << Graduate::_count << endl;
//	cout << Person::_num << endl;
//	Student::_count = 0;
//	cout << " 人数 :" << Person::_count << endl;
//
//	system("pause");
//	return 0;
//}




//class Person
//{
//public:
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//protected:
//	int _num; //学号
//};
//
//class Teacher : public Person
//{
//protected:
//	int _id; // 职工编号
//};
//
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // 主修课程
//};
//int main()
//{
//	// 这样会有二义性无法明确知道访问的是哪一个
//	Assistant a;
//	//a._name = "peter";     //二义性
//	// 需要显示指定访问哪个父类的成员可以解决二义性问题，但是数据冗余问题无法解决
//	a.Student::_name = "小王";
//	a.Teacher::_name = "老王";
//
//	cout << a.Student::_name << endl;
//	cout << a.Teacher::_name << endl;
//
//	system("pause");
//	return 0;
//}


class A
{
public:
	int _a;
};

class B : virtual public A
{
public:
	int _b;
};

class C : virtual public A
{
public:
	int _c;
};

class D : public B, public C
{
public:
	int _d;
};

int main()
{
	D d;
	cout << sizeof(d) << endl;
	d.B::_a = 1;
	d.C::_a = 2;
	//d._b = 3;
	//d._c = 4;
	//d._d = 5;
	system("pause");
	return 0;
}